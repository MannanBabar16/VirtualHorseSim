using UnityEngine;
using System.Collections;
using System;

#if MangoMango_IAP
using MangoMango.IAP;
#endif

namespace MangoMango.Advertisement
{
    public class TimeBasedAd : MonoBehaviour
    {
        public static TimeBasedAd Instance { get; private set; }

        #region Variables
        private bool isAdEnabled { get => RemoteConfigManager.Instance.GetBool(RCBool.TimeBasedAdBool, false); }
        private float adInterval { get => RemoteConfigManager.Instance.GetInt(RCInt.TimeBasedAdInt, 60); }
        private Coroutine adCoroutine;
#if MangoMango_IAP
        private bool isRemoveAdsPurchased { get => IAPManager.Instance.IsPurchased(ProductName.RemoveAds) || IAPManager.Instance.IsPurchased(ProductName.BestBundle); }
        private bool shouldShowIap { get => RemoteConfigManager.Instance.GetBool(RCBool.ShowIAPAfterAd, false); }
        private int showRemoveAdsAfter { get => RemoteConfigManager.Instance.GetInt(RCInt.ShowIAPAfter, 3); }
        private int adsShownCount = 0;
        public GameObject removeAdsPanel;
#endif
        #endregion

        #region Unity Lifecycle
        private void Awake()
        {
            if (Instance == null)
            {
                transform.SetParent(null);
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Destroy(gameObject);
            }
        }

        private void OnEnable()
        {
#if MangoMango_IAP
            IAPManager.Instance.onPurchaseSuccess += OnPurchaseSuccess; 
#endif
        }


        private void OnDisable()
        {
#if MangoMango_IAP
            IAPManager.Instance.onPurchaseSuccess -= OnPurchaseSuccess; 
#endif
        }
        #endregion


        #region Ad Management
        public void StartAdTimer()
        {
#if MangoMango_IAP
            if (IAPManager.Instance.IsPurchased(ProductName.RemoveAds) || IAPManager.Instance.IsPurchased(ProductName.BestBundle))
            {
                return;
            }
#endif
            if (adCoroutine == null)
            {
                adCoroutine = StartCoroutine(TimeBasedAdCoroutine());
                Debug.Log("<b><size=15><color=green>Time Based Ad Timer Started</color></size></b>");
            }
            else
            {
                Debug.Log("<b><size=15><color=yellow>Time Based Ad Timer Already Running</color></size></b>");
            }
        }

        private IEnumerator TimeBasedAdCoroutine()
        {
            while (isAdEnabled)
            {
                yield return new WaitForSeconds(adInterval);
                ShowTimeBasedAd();
                adCoroutine = null;
                yield return new WaitForSeconds(1);
            }
        }

        private void ShowTimeBasedAd()
        {
            ApplovinAdManager.Instance.ShowInterstitial(RCBool.TimeBasedAdBool);
#if MangoMango_IAP
            adsShownCount++;
            if (adsShownCount >= showRemoveAdsAfter && removeAdsPanel != null && !removeAdsPanel.activeSelf)
            {

                if (!isRemoveAdsPurchased && shouldShowIap)
                {
                    removeAdsPanel.SetActive(true);
                    adsShownCount = 0;
                }
            }
#endif
        }

#if MangoMango_IAP
        private void OnPurchaseSuccess(ProductName name)
        {
            if (name == ProductName.BestBundle || name == ProductName.RemoveAds)
            {
                StopAdTimer();
            }
        }
#endif

        public void StopAdTimer()
        {
            if (adCoroutine != null)
            {
                StopCoroutine(adCoroutine);
                adCoroutine = null;
            }

#if MangoMango_IAP
            removeAdsPanel.SetActive(false);
#endif
        }
        #endregion
    }
}
