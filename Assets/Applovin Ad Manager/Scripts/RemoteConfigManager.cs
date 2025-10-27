using System;
using Unity.Services.RemoteConfig;
using UnityEngine;
using Unity.Services.Authentication;
using Unity.Services.Core;
using System.Threading.Tasks;

namespace MangoMango.Advertisement
{
    public struct UserAttributes { }
    public struct AppAttributes { }

    #region Enums
    public enum RCInt
    {
        ControllableBannerPosition,
        MRECBannerPosition,
        InterstitialSkipLevel,
        InterstitialSkipLevelComplete,
        AdDivisionValue,
        TimeBasedAdInt,
        ShowIAPAfter,
    }
    public enum RCString
    {
        InterstitialAdID,
        TopRightFixedBannerAdUnitId,
        ControllableBannerAdUnitId,
        RewardedAdID,
        MRecAdID,
        AppOpenAdUnitId
    }
    public enum RCBool
    {
        EnableAds,
        TestAds,
        TopRightFixedBanner,
        ControllableBanner,
        ShowRewarded,
        MREC,
        BannerCheckAll,
        RewardCheckAll,
        InterstitialCheckAll,
        EnableAppOpenAD,
        AlternateLevelFail,
        AlternateLevelComplete,
        AdToLoadInGame,
        CharacterCarPurchaseRVRewardAds,
        ShopItem,
        ReviveAds,
        Pause,
        Failed,
        LevelComplete,
        PlaneSelectionToGP,
        ModeSelection,
        InGameInventory,
        GetCoins,
        GetPowerUpRewardAd,
        TimeBasedAdBool,
        ShowIAPAfterAd
    }
    public enum RCFloat
    {

    }
    #endregion

    public class RemoteConfigManager : MonoBehaviour
    {
        #region Variables
        // Singleton instance
        public static RemoteConfigManager Instance;

        public Action onInitializationComplete;
        public Action onInitializationFail;
        #endregion

        #region Initialization
        // Retrieve and apply the current key-value pairs from the service on Awake:
        private async void Awake()
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            // initialize Unity's authentication and core services, however check for internet connection
            // in order to fail gracefully without throwing exception if connection does not exist
            if (Utilities.CheckForInternetConnection())
            {
                await InitializeRemoteConfigAsync();
            }

            // Add a listener to apply settings when successfully retrieved:
            RemoteConfigService.Instance.FetchCompleted += OnInitializationComplete;

            // Fetch configuration settings from the remote service:
            RemoteConfigService.Instance.FetchConfigs(new UserAttributes(), new AppAttributes());
        }

        async Task InitializeRemoteConfigAsync()
        {
            // initialize handlers for unity game services
            await UnityServices.InitializeAsync();

            // remote config requires authentication for managing environment information
            if (!AuthenticationService.Instance.IsSignedIn)
            {
                await AuthenticationService.Instance.SignInAnonymouslyAsync();
            }
        }

        private void OnInitializationComplete(ConfigResponse response)
        {
            Debug.Log("<b><size=15><color=green>Remote Config Initialized</color></size></b>");
            Debug.Log(GetBool(RCBool.EnableAds)
                ? "<b><size=15><color=green>Ads are enabled</color></size></b>"
                : "<b><size=15><color=red>Ads are disabled</color></size></b>");
            onInitializationComplete?.Invoke();
        }
        #endregion

        #region Value Returning
        public int GetInt(RCInt key, int defaultValue = 0)
        {
            string keyString = Enum.GetName(typeof(RCInt), key);
            return RemoteConfigService.Instance.appConfig.GetInt(keyString, defaultValue);
        }
        public string GetString(RCString key, string defaultValue = "")
        {
            string keyString = Enum.GetName(typeof(RCString), key);
            return RemoteConfigService.Instance.appConfig.GetString(keyString, defaultValue);
        }
        public bool GetBool(RCBool key, bool defaultValue = false)
        {
            string keyString = Enum.GetName(typeof(RCBool), key);
            return RemoteConfigService.Instance.appConfig.GetBool(keyString, defaultValue);
        }
        public float GetFloat(RCFloat key, float defaultValue = 0)
        {
            string keyString = Enum.GetName(typeof(RCFloat), key);
            return RemoteConfigService.Instance.appConfig.GetFloat(keyString, defaultValue);
        }
        #endregion
    }
}