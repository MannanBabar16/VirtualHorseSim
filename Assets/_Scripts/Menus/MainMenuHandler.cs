using System;
using MalbersAnimations;
using System.Collections;
using System.Collections.Generic;
using System.Net.NetworkInformation;
using MangoMango.Advertisement;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuHandler : MonoBehaviour
{
    [Header("---------- Sound Names Only ----------")]
    [Space(10)]
    public string[] buttonSoundsName;

    [Header("---------- Panels ----------")]
    [Space(10)]
    [SerializeField] GameObject SettingPanel;
    [SerializeField] GameObject ExitPanel;
    [SerializeField] GameObject PrivacyPolicyPanel;
    [SerializeField] GameObject RateUsPanel;
    [SerializeField] GameObject MoreGamesPanel;
    [SerializeField] GameObject LoadingPanel;
    [SerializeField] GameObject rewardButton;

    [Header("---------- URLS ----------")]
    [Space(10)]
    [SerializeField] string MoreGamesUrl;
    [SerializeField] string PrivacyPolicyUrl;

    [Header("---------- URLS ----------")]
    [Space(10)]
    [SerializeField] GameObject soundOn;
    [SerializeField] GameObject soundOff;

    [Space(10)]
    bool isSettingOpen = false;
    bool soundCheck = false;
    bool isRewardVideo = false;
    [SerializeField] Text coinText;

    private void Start()
    {
        Time.timeScale = 1;

        if (!PlayerPrefs.HasKey("FirstTimeCheck"))
        {
            GData.Instance.SavaGameData();
            PlayerPrefs.SetInt("FirstTimeCheck", 1);
        }
        GData.Instance.LoadGameData();
        SoundCheck();

        if (GData.Instance)
        {
            
            coinText.text = GData.Instance.Coins.ToString();
        }

        if (AudioManager.instance)
        {
            AudioManager.instance.Play("Background");
            AudioManager.instance.StopPlaying("Gameplay");
        }

        if (ApplovinAdManager.Instance)
        {
            ApplovinAdManager.Instance.ShowBanner();

            if (ApplovinAdManager.Instance != null)
            {
                rewardButton.SetActive(true);
            }
            else
            {
                rewardButton.SetActive(false);
            }
        }
        
        
            
        
    }
    public void Play_Game()
    {
        Button_Click_Sound();
        LoadingPanel.SetActive(true);
        if (ApplovinAdManager.Instance)
        {
            ApplovinAdManager.Instance.ShowInterstitial(RCBool.InterstitialCheckAll);
        }
    }

    public void MoreGamesYes()
    {
        Button_Click_Sound();
        MoreGamesPanel.SetActive(false);
        Application.OpenURL(MoreGamesUrl);
    }

    public void PrivacyPolicyYes()
    {
        Button_Click_Sound();
        PrivacyPolicyPanel.SetActive(false);
        Application.OpenURL(PrivacyPolicyUrl);
    }

    public void ExitYes()
    {
        Button_Click_Sound();
        Application.Quit();
    }

    public void Setting ()
    {
        if(!isSettingOpen)
        {
            SettingPanel.SetActive(true);
            isSettingOpen = true;
            
            if (ApplovinAdManager.Instance)
            {
                ApplovinAdManager.Instance.ShowInterstitial(RCBool.InterstitialCheckAll);
            }
        }
        else if (isSettingOpen)
        {
            SettingPanel.SetActive(false);
            isSettingOpen = false;
        }

        Button_Click_Sound();
    }

    public void Sound()
    {
        if (!soundCheck)
        {
            soundCheck = true;
            GData.Instance.Sound = 0;
            SoundCheck();
        }
        else if(soundCheck)
        {
            soundCheck = false;
            GData.Instance.Sound = 1;
            SoundCheck();
        }

        GData.Instance.SavaGameData();
        Button_Click_Sound();
    }

    void SoundCheck()
    {
        if (GData.Instance.Sound == 0)
        {
            soundOff.SetActive(true);
            soundOn.SetActive(false);

            if (AudioManager.instance)
            {
                AudioManager.instance.MuteSounds(buttonSoundsName);
            }
        }
        else if (GData.Instance.Sound == 1)
        {
            soundOff.SetActive(false);
            soundOn.SetActive(true);

            if (AudioManager.instance)
            {
                AudioManager.instance.UnMuteSounds(buttonSoundsName);
            }
        }
    }

    public void Button_Click_Sound()
    {
        if (AudioManager.instance)
        {
            AudioManager.instance.Play("ButtonClick");
        }
    }

    public void WatchVideoReward()
    {
        GData.Instance.Coins += 200;
        GData.Instance.SavaGameData();
        coinText.text = GData.Instance.Coins.ToString();
    }

    public void RewardVideo()
    {
        ApplovinAdManager.Instance.ShowRewardedAd(() =>
        {
            WatchVideoReward();
        });
    }
}
