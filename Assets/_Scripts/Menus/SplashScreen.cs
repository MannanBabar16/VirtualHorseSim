using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SplashScreen : MonoBehaviour
{
    [SerializeField]
    GameObject loadingScreen;

    [SerializeField]
    GameObject privacyScreen;

    [SerializeField]
    string privacyURL;
    private void Start()
    {
        if (!PlayerPrefs.HasKey("PrivacyCheck"))
        {
            PlayerPrefs.SetInt("PrivacyCheck", 0);
        }
        
        CheckPrivacy();
    }

    void CheckPrivacy()
    {
        if (PlayerPrefs.GetInt("PrivacyCheck") == 0)
        {
            privacyScreen.SetActive(true);
            loadingScreen.SetActive(false);
        }
        else if (PlayerPrefs.GetInt("PrivacyCheck") == 1)
        {
            privacyScreen.SetActive(false);
            loadingScreen.SetActive(true);
        }
    }

    public void VisitPolicy()
    {
        Application.OpenURL(privacyURL);
    }

    public void Accept()
    {
        PlayerPrefs.SetInt("PrivacyCheck", 1);
        CheckPrivacy();
    }
}
