using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
#if MangoMango_IAP
using MangoMango.IAP; 
#endif

namespace MangoMango.Advertisement
{
    public class ApplovinAdManager : MonoBehaviour
    {
        public static ApplovinAdManager Instance;

        private string maxSdkKey = "Ff2Qr5L1yLlOsT3h47E1Kcyaa7dQZgNHLMXtKSPfH1evsCn9b4vxf9iVKupdDNX9660eVD9FcuGRKxDkDZC1rb";

#if  MangoMango_IAP
        private bool isRemoveAdsPurchased
        {
            get
            {
                return IAPManager.Instance.IsPurchased(ProductName.RemoveAds) ||
                    IAPManager.Instance.IsPurchased(ProductName.BestBundle);
            }
        }
#endif

        #region Ad Ids
        private string InterstitialAdUnitId;
        private string RewardedAdUnitId;
        private string TopRightFixedBanner;
        private string ControllableBannerAdUnitId;
        private string MRecAdUnitId;
        private string AppOpenAdUnitId;
        // private const string RewardedInterstitialAdUnitId = "ENTER_ANDROID_REWARD_INTER_AD_UNIT_ID_HERE";
        #endregion

        #region Other Variables
        private int _interstitialRetryAttempt;
        private int _rewardedRetryAttempt;
        private int _rewardedInterstitialRetryAttempt;
        private int AdDivisionValue;
        public delegate void RewardCallback();
        // Define an event for the reward callback
        private event RewardCallback OnRewardReceived;
        public Action onInitializationComplete;
        public Action onInitializationFail;
        bool isMaxSDKInitialized = false;
        [HideInInspector] public bool isAppPausedByAd;
        #endregion

        #region Initialization
        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
            }
            else if (Instance != null)
            {
                Destroy(gameObject);
            }
            DontDestroyOnLoad(gameObject);

        }

        private IEnumerator Start()
        {
#if MangoMango_IAP
            IAPManager.Instance.onPurchaseSuccess += OnPurchaseSuccess;
#endif
            RemoteConfigManager.Instance.onInitializationComplete += FetchRemoteValues;
            MaxSdkCallbacks.OnSdkInitializedEvent += InitializeAds;
            isAppPausedByAd = true;
            yield return new WaitForSeconds(2);
            MaxSdk.SetSdkKey(maxSdkKey);
            MaxSdk.InitializeSdk();
        }

        private void InitializeAds(MaxSdkBase.SdkConfiguration configuration)
        {
            isMaxSDKInitialized = true;
            // AppLovin SDK is initialized, configure and start loading ads.
            Debug.Log("MAX SDK Initialized");
            PlayerPrefs.SetInt("OnConsentGranted", 1);
            if (RemoteConfigManager.Instance.GetBool(RCBool.EnableAppOpenAD))
            {
                MaxSdkCallbacks.AppOpen.OnAdHiddenEvent += OnAppOpenDismissedEvent;
                ShowAppOpenIfReady();
            }

            InitializeInterstitialAds();
            InitializeRewardedAds();
            InitializeControllableBannerAds();
            InitializeFixedBannerAds();
            InitializeMRecAds();
            onInitializationComplete?.Invoke();
        }
        #endregion

        #region IAP Methods
#if MangoMango_IAP
        private void OnPurchaseSuccess(ProductName name)
        {
            if (name == ProductName.RemoveAds || name == ProductName.BestBundle)
            {
                MaxSdk.DestroyBanner(ControllableBannerAdUnitId);
                MaxSdk.DestroyBanner(TopRightFixedBanner);
                MaxSdk.DestroyMRec(MRecAdUnitId);
                Debug.Log("Remove Ads Purchased, Ads will not be shown.");
            }
        }

#endif 
        #endregion

        #region Interstitial Ad Methods

        // ReSharper disable Unity.PerformanceAnalysis
        private void InitializeInterstitialAds()
        {
            // Attach callbacks

            MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnInterstitialLoadedEvent;

            MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnInterstitialFailedEvent;
            MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += InterstitialFailedToDisplayEvent;
            MaxSdkCallbacks.Interstitial.OnAdHiddenEvent += OnInterstitialDismissedEvent;
            MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent += OnInterstitialRevenuePaidEvent;

            // Load the first interstitial
            LoadInterstitial();

        }

        // ReSharper disable Unity.PerformanceAnalysis
        public void LoadInterstitial()
        {
            MaxSdk.LoadInterstitial(InterstitialAdUnitId);
        }

        public void ShowInterstitial(RCBool adBool)
        {
#if MangoMango_IAP
            if (isRemoveAdsPurchased)
            {
                Debug.Log("Remove Ads Purchased, Interstitial ad will not be shown.");
                return;
            } 
#endif
            if (!RemoteConfigManager.Instance.GetBool(RCBool.EnableAds))
            {
                Debug.Log("Please enable interstitial ads from Remote Config.");
                return;
            }

            isAppPausedByAd = true;
            var interstitialCheckAll = RemoteConfigManager.Instance.GetBool(RCBool.InterstitialCheckAll);
            var adPlacementEnabled = RemoteConfigManager.Instance.GetBool(adBool);

            if (!interstitialCheckAll || !adPlacementEnabled) return;

            if (MaxSdk.IsInterstitialReady(InterstitialAdUnitId))
            {
                MaxSdk.ShowInterstitial(InterstitialAdUnitId);
            }
        }

        private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Interstitial ad is ready to be shown. MaxSdk.IsInterstitialReady(interstitialAdUnitId) will now return 'true'
            //interstitialStatusText.text = "Loaded";
            Debug.Log("Interstitial loaded");

            // Reset retry attempt
            _interstitialRetryAttempt = 0;
        }

        private void OnInterstitialFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
            // Interstitial ad failed to load. We recommend retrying with exponentially higher delays up to a maximum delay (in this case 64 seconds).
            _interstitialRetryAttempt++;
            var retryDelay = Math.Pow(2, Math.Min(6, _interstitialRetryAttempt));

            //interstitialStatusText.text = "Load failed: " + errorInfo.Code + "\nRetrying in " + retryDelay + "s...";
            Debug.Log("Interstitial failed to load with error code: " + errorInfo.Code);

            Invoke("LoadInterstitial", (float)retryDelay);
        }

        private void InterstitialFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
        {
            // Interstitial ad failed to display. We recommend loading the next ad
            Debug.Log("Interstitial failed to display with error code: " + errorInfo.Code);
            LoadInterstitial();
        }

        private void OnInterstitialDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            isAppPausedByAd = false;
            Debug.Log("Interstitial dismissed");
            LoadInterstitial();
        }

        // ReSharper disable Unity.PerformanceAnalysis
        private void OnInterstitialRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Interstitial ad revenue paid. Use this callback to track user revenue.
            Debug.Log("Interstitial revenue paid");

            // Ad revenue
            double revenue = adInfo.Revenue;

            // Miscellaneous data
            var countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD"!
            var networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
            var adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
            var placement = adInfo.Placement; // The placement this ad's postbacks are tied to

            SendRevenueStatus(adInfo, revenue);
        }

        #endregion

        #region Rewarded Ad Methods

        private void InitializeRewardedAds()
        {
            // Attach callbacks
            MaxSdkCallbacks.Rewarded.OnAdLoadedEvent += OnRewardedAdLoadedEvent;
            MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent += OnRewardedAdFailedEvent;
            MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent += OnRewardedAdFailedToDisplayEvent;
            MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent += OnRewardedAdDisplayedEvent;
            MaxSdkCallbacks.Rewarded.OnAdClickedEvent += OnRewardedAdClickedEvent;
            MaxSdkCallbacks.Rewarded.OnAdHiddenEvent += OnRewardedAdDismissedEvent;
            MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnRewardedAdReceivedRewardEvent;
            MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnRewardedAdRevenuePaidEvent;

            // Load the first RewardedAd
            LoadRewardedAd();
        }

        // ReSharper disable Unity.PerformanceAnalysis
        private void LoadRewardedAd()
        {
            //rewardedStatusText.text = "Loading...";
            MaxSdk.LoadRewardedAd(RewardedAdUnitId);
        }

        public void ShowRewardedAd(RewardCallback callback)
        {


            if (RemoteConfigManager.Instance.GetBool(RCBool.EnableAds) && RemoteConfigManager.Instance.GetBool(RCBool.ShowRewarded))
            {
                isAppPausedByAd = true;
                OnRewardReceived = callback;
                if (MaxSdk.IsRewardedAdReady(RewardedAdUnitId))
                {
                    MaxSdk.ShowRewardedAd(RewardedAdUnitId);
                }
            }
            else
            {
                Debug.Log("Please Enable ads From Remote Config ");
            }


        }

        public bool RewardChecks(RCBool rewardedAdBool)
        {

            if (RemoteConfigManager.Instance.GetBool(RCBool.RewardCheckAll))
            {
                if (RemoteConfigManager.Instance.GetBool(rewardedAdBool) && RewardCheckMAX())
                {
                    return true;
                }
                else
                {
                    return false;

                }
            }
            else
            {
                return false;
            }
        }
        public bool RewardCheckMAX()
        {
            int numberOfTries = 3;
            int delayMilliseconds = 1000;

            for (int i = 0; i < numberOfTries; i++)
            {
                if (MaxSdk.IsRewardedAdReady(RewardedAdUnitId))
                {
                    return true;

                }

                // Wait for 1 second before the next attempt
                System.Threading.Thread.Sleep(delayMilliseconds);
            }

            // If after three attempts the condition is still false, return false
            return false;
        }
        private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded ad is ready to be shown. MaxSdk.IsRewardedAdReady(rewardedAdUnitId) will now return 'true'
            //rewardedStatusText.text = "Loaded";
            Debug.Log("Rewarded ad loaded");

            // showRewardedButton.interactable = true;
            // Reset retry attempt
            _rewardedRetryAttempt = 0;
        }

        private void OnRewardedAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
            // Rewarded ad failed to load. We recommend retrying with exponentially higher delays up to a maximum delay (in this case 64 seconds).
            _rewardedRetryAttempt++;
            var retryDelay = Math.Pow(2, Math.Min(6, _rewardedRetryAttempt));

            //rewardedStatusText.text = "Load failed: " + errorInfo.Code + "\nRetrying in " + retryDelay + "s...";
            Debug.Log("Rewarded ad failed to load with error code: " + errorInfo.Code);

            Invoke("LoadRewardedAd", (float)retryDelay);

        }

        private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded ad failed to display. We recommend loading the next ad
            Debug.Log("Rewarded ad failed to display with error code: " + errorInfo.Code);
            LoadRewardedAd();
        }

        private void OnRewardedAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            Debug.Log("Rewarded ad displayed");
        }

        private void OnRewardedAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            Debug.Log("Rewarded ad clicked");
        }

        private void OnRewardedAdDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            isAppPausedByAd = false;
            LoadRewardedAd();
        }


        private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward, MaxSdkBase.AdInfo adInfo)
        {
            //RewardHandler.instance.GiveReward();
            OnRewardReceived?.Invoke();
        }

        private void OnRewardedAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded ad revenue paid. Use this callback to track user revenue.

            // Ad revenue
            double revenue = adInfo.Revenue;

            // Miscellaneous data
            string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD"!
            string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
            string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
            string placement = adInfo.Placement; // The placement this ad's postbacks are tied to

            SendRevenueStatus(adInfo, revenue);
        }

        #endregion

        #region Rewarded Interstitial Ad Methods

        private void InitializeRewardedInterstitialAds()
        {
            // Attach callbacks
            MaxSdkCallbacks.RewardedInterstitial.OnAdLoadedEvent += OnRewardedInterstitialAdLoadedEvent;
            MaxSdkCallbacks.RewardedInterstitial.OnAdLoadFailedEvent += OnRewardedInterstitialAdFailedEvent;
            MaxSdkCallbacks.RewardedInterstitial.OnAdDisplayFailedEvent += OnRewardedInterstitialAdFailedToDisplayEvent;
            MaxSdkCallbacks.RewardedInterstitial.OnAdDisplayedEvent += OnRewardedInterstitialAdDisplayedEvent;
            MaxSdkCallbacks.RewardedInterstitial.OnAdClickedEvent += OnRewardedInterstitialAdClickedEvent;
            MaxSdkCallbacks.RewardedInterstitial.OnAdHiddenEvent += OnRewardedInterstitialAdDismissedEvent;
            MaxSdkCallbacks.RewardedInterstitial.OnAdReceivedRewardEvent += OnRewardedInterstitialAdReceivedRewardEvent;
            MaxSdkCallbacks.RewardedInterstitial.OnAdRevenuePaidEvent += OnRewardedInterstitialAdRevenuePaidEvent;

            // Load the first RewardedInterstitialAd
            LoadRewardedInterstitialAd();
        }

        private void LoadRewardedInterstitialAd()
        {
            //rewardedInterstitialStatusText.text = "Loading...";
            //    MaxSdk.LoadRewardedInterstitialAd(RewardedInterstitialAdUnitId);
        }

        private void ShowRewardedInterstitialAd()
        {
            /*if (MaxSdk.IsRewardedInterstitialAdReady(RewardedInterstitialAdUnitId))
            {
                //rewardedInterstitialStatusText.text = "Showing";
                MaxSdk.ShowRewardedInterstitialAd(RewardedInterstitialAdUnitId);
            }
            else
            {
                //rewardedInterstitialStatusText.text = "Ad not ready";
            }*/
        }

        private void OnRewardedInterstitialAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded interstitial ad is ready to be shown. MaxSdk.IsRewardedInterstitialAdReady(rewardedInterstitialAdUnitId) will now return 'true'
            //rewardedInterstitialStatusText.text = "Loaded";
            Debug.Log("Rewarded interstitial ad loaded");

            // Reset retry attempt
            _rewardedInterstitialRetryAttempt = 0;
        }

        private void OnRewardedInterstitialAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
            // Rewarded interstitial ad failed to load. We recommend retrying with exponentially higher delays up to a maximum delay (in this case 64 seconds).
            _rewardedInterstitialRetryAttempt++;
            double retryDelay = Math.Pow(2, Math.Min(6, _rewardedInterstitialRetryAttempt));

            //rewardedInterstitialStatusText.text = "Load failed: " + errorInfo.Code + "\nRetrying in " + retryDelay + "s...";
            Debug.Log("Rewarded interstitial ad failed to load with error code: " + errorInfo.Code);

            Invoke("LoadRewardedInterstitialAd", (float)retryDelay);
        }

        private void OnRewardedInterstitialAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded interstitial ad failed to display. We recommend loading the next ad
            Debug.Log("Rewarded interstitial ad failed to display with error code: " + errorInfo.Code);
            LoadRewardedInterstitialAd();
        }

        private void OnRewardedInterstitialAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            Debug.Log("Rewarded interstitial ad displayed");
        }

        private void OnRewardedInterstitialAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            Debug.Log("Rewarded interstitial ad clicked");
        }

        private void OnRewardedInterstitialAdDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded interstitial ad is hidden. Pre-load the next ad
            Debug.Log("Rewarded interstitial ad dismissed");
            LoadRewardedInterstitialAd();
        }

        private void OnRewardedInterstitialAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded interstitial ad was displayed and user should receive the reward
            Debug.Log("Rewarded interstitial ad received reward");
        }

        private void OnRewardedInterstitialAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded interstitial ad revenue paid. Use this callback to track user revenue.
            Debug.Log("Rewarded interstitial ad revenue paid");

            // Ad revenue
            double revenue = adInfo.Revenue;

            // Miscellaneous data
            string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD"!
            string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
            string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
            string placement = adInfo.Placement; // The placement this ad's postbacks are tied to

            SendRevenueStatus(adInfo, revenue);
        }

        #endregion

        #region Banner Ad Methods
        // ReSharper disable Unity.PerformanceAnalysis
        private void InitializeFixedBannerAds()
        {

            // Attach Callbacks
            MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerAdLoadedEvent;
            MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnBannerAdFailedEvent;
            MaxSdkCallbacks.Banner.OnAdClickedEvent += OnBannerAdClickedEvent;
            MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnBannerAdRevenuePaidEvent;

            MaxSdk.CreateBanner(TopRightFixedBanner, MaxSdkBase.BannerPosition.TopRight);

            // Set a semi-transparent black color as the background for the banner
            var transparentBlack = new Color(0f, 0f, 0f, 0f); // Adjust the alpha value (0.5f) for transparency
            MaxSdk.SetBannerBackgroundColor(ControllableBannerAdUnitId, transparentBlack);
        }

        private void InitializeControllableBannerAds()
        {
            // Attach Callbacks
            MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerAdLoadedEvent;
            MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnBannerAdFailedEvent;
            MaxSdkCallbacks.Banner.OnAdClickedEvent += OnBannerAdClickedEvent;
            MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnBannerAdRevenuePaidEvent;


            // Banners are automatically sized to 320x50 on phones and 728x90 on tablets.
            // You may use the utility method `MaxSdkUtils.isTablet()` to help with view sizing adjustments.

            var appLovinBannerPosition = RemoteConfigManager.Instance.GetInt(RCInt.ControllableBannerPosition) switch
            {
                0 => MaxSdkBase.BannerPosition.TopCenter,
                1 => MaxSdkBase.BannerPosition.BottomCenter,
                2 => MaxSdkBase.BannerPosition.TopLeft,
                3 => MaxSdkBase.BannerPosition.TopRight,
                4 => MaxSdkBase.BannerPosition.BottomLeft,
                5 => MaxSdkBase.BannerPosition.BottomRight,
                _ => MaxSdkBase.BannerPosition.TopCenter
            };

            MaxSdk.CreateBanner(ControllableBannerAdUnitId, appLovinBannerPosition);
            // MaxSdk.SetBannerExtraParameter(ControllableBannerAdUnitId, "adaptive_banner", "false");

            var transparentBlack = new Color(0f, 0f, 0f, 0f); // Adjust the alpha value (0.5f) for transparency
            MaxSdk.SetBannerBackgroundColor(ControllableBannerAdUnitId, transparentBlack);
        }

        public void ShowBanner()
        {
#if MangoMango_IAP
            if (isRemoveAdsPurchased)
            {
                Debug.Log("Remove Ads Purchased, Banner ad will not be shown.");
                return;
            } 
#endif

            if (!RemoteConfigManager.Instance.GetBool(RCBool.BannerCheckAll)) return;

            if (RemoteConfigManager.Instance.GetBool(RCBool.ControllableBanner))
            {
                MaxSdk.ShowBanner(ControllableBannerAdUnitId);
            }
            if (RemoteConfigManager.Instance.GetBool(RCBool.TopRightFixedBanner))
            {
                MaxSdk.ShowBanner(TopRightFixedBanner);
            }
        }

        public void HideBanner()
        {
            MaxSdk.HideBanner(ControllableBannerAdUnitId);
            MaxSdk.HideBanner(TopRightFixedBanner);
        }

        private static void OnBannerAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Banner ad is ready to be shown.
            // If you have already called MaxSdk.ShowBanner(BannerAdUnitId) it will automatically be shown on the next ad refresh.
            Debug.Log("Banner ad loaded");
        }

        // ReSharper disable Unity.PerformanceAnalysis
        private static void OnBannerAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
            Debug.Log("Banner ad failed to load with error code: " + errorInfo.Code);
        }

        // ReSharper disable Unity.PerformanceAnalysis
        private static void OnBannerAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            Debug.Log("Banner ad clicked");
        }

        private void OnBannerAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Banner ad revenue paid. Use this callback to track user revenue.
            Debug.Log("Banner ad revenue paid");

            // Ad revenue
            double revenue = adInfo.Revenue;

            // Miscellaneous data
            var countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD"!
            var networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
            var adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
            var placement = adInfo.Placement; // The placement this ad's postbacks are tied to
            SendRevenueStatus(adInfo, revenue);
        }

        #endregion

        #region MREC Ad Methods

        // ReSharper disable Unity.PerformanceAnalysis
        private void InitializeMRecAds()
        {

            var mrecBannerPosition = RemoteConfigManager.Instance.GetInt(RCInt.MRECBannerPosition) switch
            {
                0 => MaxSdkBase.AdViewPosition.BottomLeft,
                1 => MaxSdkBase.AdViewPosition.BottomCenter,
                2 => MaxSdkBase.AdViewPosition.BottomRight,
                3 => MaxSdkBase.AdViewPosition.CenterLeft,
                4 => MaxSdkBase.AdViewPosition.Centered,
                5 => MaxSdkBase.AdViewPosition.CenterRight,
                6 => MaxSdkBase.AdViewPosition.TopLeft,
                7 => MaxSdkBase.AdViewPosition.TopCenter,
                8 => MaxSdkBase.AdViewPosition.TopRight,
                _ => MaxSdkBase.AdViewPosition.BottomLeft
            };
            MaxSdk.CreateMRec(MRecAdUnitId, mrecBannerPosition);
            MaxSdkCallbacks.MRec.OnAdLoadedEvent += OnMRecAdLoadedEvent;
            MaxSdkCallbacks.MRec.OnAdLoadFailedEvent += OnMRecAdLoadFailedEvent;
            MaxSdkCallbacks.MRec.OnAdClickedEvent += OnMRecAdClickedEvent;
            MaxSdkCallbacks.MRec.OnAdRevenuePaidEvent += OnMRecAdRevenuePaidEvent;

            // MRECs are automatically sized to 300x250.

        }


        public void ShowMRecBanner()
        {
#if MangoMango_IAP
            if (isRemoveAdsPurchased)
            {
                Debug.Log("Remove Ads Purchased, MRec ad will not be shown.");
                return;
            } 
#endif

            if (!RemoteConfigManager.Instance.GetBool(RCBool.EnableAds)) return;
            if (!RemoteConfigManager.Instance.GetBool(RCBool.MREC)) return;

            //        MaxSdk.SetBannerWidth(MRecAdUnitId, 850);
            MaxSdk.ShowMRec(MRecAdUnitId);
        }

        public void HideMRecBanner()
        {
            MaxSdk.HideMRec(MRecAdUnitId);
        }

        private void OnMRecAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            if (RemoteConfigManager.Instance.GetBool(RCBool.MREC))
            {
                // MRec ad is ready to be shown.
                // If you have already called MaxSdk.ShowMRec(MRecAdUnitId) it will automatically be shown on the next MRec refresh.
                Debug.Log("MRec ad loaded");
            }
            // showMRecButton.interactable = true;
        }

        private void OnMRecAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
            if (RemoteConfigManager.Instance.GetBool(RCBool.MREC))
            {
                // MRec ad failed to load. MAX will automatically try loading a new ad internally.
                Debug.Log("ad failed to load with error code: " + errorInfo.Code);
            }
        }

        private void OnMRecAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            Debug.Log("MRec ad clicked");
        }

        private void OnMRecAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {

            // MRec ad revenue paid. Use this callback to track user revenue.
            Debug.Log("MRec ad revenue paid");

            // Ad revenue
            double revenue = adInfo.Revenue;

            // Miscellaneous data
            string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD"!
            string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
            string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
            string placement = adInfo.Placement; // The placement this ad's postbacks are tied to

            SendRevenueStatus(adInfo, revenue);

        }

        #endregion

        #region AppOpen
        public void OnAppOpenDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            MaxSdk.LoadAppOpenAd(AppOpenAdUnitId);
            ShowBanner();
        }

        private void OnApplicationPause(bool pauseStatus)
        {
            if (!pauseStatus && isMaxSDKInitialized)
            {
                if (SceneManager.GetActiveScene().name != "Splash")
                    ShowAppOpenIfReady();
            }
        }
        public void ShowAppOpenIfReady()
        {
#if MangoMango_IAP
            if (isRemoveAdsPurchased)
            {
                Debug.Log("Remove Ads Purchased, App Open ad will not be shown.");
                return;
            } 
#endif
            if (MaxSdk.IsAppOpenAdReady(AppOpenAdUnitId) && !isAppPausedByAd)
            {
                MaxSdk.ShowAppOpenAd(AppOpenAdUnitId);
                HideBanner();
            }
            else
            {
                MaxSdk.LoadAppOpenAd(AppOpenAdUnitId);
            }
        }
        #endregion

        #region Other Methods
        private void SendRevenueStatus(MaxSdkBase.AdInfo adInfo, double revenue)
        {
            /*var val = (double)AdDivisionValue;
            var impressionParameters = new[] {
            new Parameter("ad_platform", "AppLovin"),
            new Parameter("ad_source", adInfo.NetworkName),
            new Parameter("ad_unit_name", adInfo.AdUnitIdentifier),
            new Parameter("ad_format", adInfo.AdFormat),
            new Parameter("value", revenue/val),
            new Parameter("currency", "USD"), // All AppLovin revenue is sent in USD
        };
            FirebaseAnalytics.LogEvent("ad_impression", impressionParameters);*/
        }

        public void FetchRemoteValues()
        {
            InterstitialAdUnitId = RemoteConfigManager.Instance.GetString(RCString.InterstitialAdID, "test");
            TopRightFixedBanner = RemoteConfigManager.Instance.GetString(RCString.TopRightFixedBannerAdUnitId, "test");
            ControllableBannerAdUnitId = RemoteConfigManager.Instance.GetString(RCString.ControllableBannerAdUnitId, "test");
            RewardedAdUnitId = RemoteConfigManager.Instance.GetString(RCString.RewardedAdID, "test");
            MRecAdUnitId = RemoteConfigManager.Instance.GetString(RCString.MRecAdID, "test");
            AppOpenAdUnitId = RemoteConfigManager.Instance.GetString(RCString.AppOpenAdUnitId, "test");

            AdDivisionValue = RemoteConfigManager.Instance.GetInt(RCInt.AdDivisionValue);
        }

        private void OnGUI()
        {
            if (!RemoteConfigManager.Instance.GetBool(RCBool.TestAds)) return;
            if (GUI.Button(new Rect(10, 10, 150, 100), "TEST APPLOVIN"))
            {
                MaxSdk.ShowMediationDebugger();
            }
        }
        #endregion
    }
}