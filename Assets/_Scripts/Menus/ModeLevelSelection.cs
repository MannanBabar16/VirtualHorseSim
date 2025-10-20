using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ModeLevelSelection : MonoBehaviour
{
    [SerializeField] GameObject ModeSelection;
    [SerializeField] GameObject LevelSelection;
    [SerializeField] GameObject LoadingScreen;

    [SerializeField] GameObject freeMode;
    [SerializeField] GameObject careerMode;

    [SerializeField] GameObject levelParent;

    Tween teen;


    private void Start()
    {
        GData.Instance.LoadGameData();

        ModeSelection.SetActive(true);
        LevelSelection.SetActive(false);

        ModeCheck();
        LevelCheck();
    }

    #region ModeSelection
    void ModeCheck()
    {
        /*if (GData.Instance.Current_Mode == 1)
        {
            freeMode.gameObject.transform.GetChild(0).gameObject.SetActive(false);
            careerMode.gameObject.transform.GetChild(0).gameObject.SetActive(true);
        }
        else if (GData.Instance.Current_Mode == 2)
        {
            careerMode.gameObject.transform.GetChild(0).gameObject.SetActive(false);
            freeMode.gameObject.transform.GetChild(0).gameObject.SetActive(true);
        }*/

            freeMode.GetComponent<Button>().interactable = true;
        freeMode.gameObject.transform.GetChild(0).gameObject.SetActive(false);
    }

    public void ModeClick(int val)
    {
        GData.Instance.Current_Mode = val;
        GData.Instance.SavaGameData();

        ModeCheck();
        LevelCheck();
        if (GData.Instance.Current_Mode == 1)
        {
            LoadingScreen.GetComponent<LoadingScreen>().loadObjectInstead = true;
            LoadingScreen.SetActive(true);
        }
        else if (GData.Instance.Current_Mode == 2)
        {
            LoadingScreen.GetComponent<LoadingScreen>().loadObjectInstead = true;
            LoadingScreen.gameObject.SetActive(true);
        }
        Button_Click();
        if (AdsManager.instance)
        {
            AdsManager.instance.Show_AdMob_Interstitial();
        }
    }

    public void ModeNext()
    {
        /*if (GData.Instance.Current_Mode == 1)
        {
            LoadingScreen.GetComponent<LoadingScreen>().loadObjectInstead = true;
            LoadingScreen.SetActive(true);
        }
        else if (GData.Instance.Current_Mode == 2)
        {
            LoadingScreen.GetComponent<LoadingScreen>().loadObjectInstead = false;
            LoadingScreen.gameObject.SetActive(true);
        }
        Button_Click();*/
    }

    public void ModeBack()
    {
        SceneManager.LoadScene("HorseSelection");
        Button_Click();
    }

    #endregion

    #region LEVEL SELECTION

    public void LevelCheck()
    {
        if(GData.Instance.Current_Mode == 1)
        {
            for (int i = GData.Instance.Career_Played_Levels; i < levelParent.transform.childCount; i++)
            {
                levelParent.transform.GetChild(i).GetComponent<Button>().interactable = false;
                levelParent.transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false); // played level sprite
                levelParent.transform.GetChild(i).transform.GetChild(2).gameObject.SetActive(false); // select level sprite
                levelParent.transform.GetChild(i).transform.GetChild(3).gameObject.SetActive(false); // level number text
                levelParent.transform.GetChild(i).transform.GetChild(1).gameObject.SetActive(true); //locked level sprite

                teen.Kill();
                levelParent.transform.GetChild(i).transform.localScale = new Vector3(.9f, .9f, .9f);
            }

            for (int i = 0; i < GData.Instance.Career_Played_Levels; i++)
            {
                levelParent.transform.GetChild(i).GetComponent<Button>().interactable = true;
                levelParent.transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(true); // played level sprite
                levelParent.transform.GetChild(i).transform.GetChild(2).gameObject.SetActive(false); // select level sprite
                levelParent.transform.GetChild(i).transform.GetChild(3).gameObject.SetActive(true); // level number text
                levelParent.transform.GetChild(i).transform.GetChild(1).gameObject.SetActive(false); // locked level sprite
                                                                                                     //levelParent.transform.GetChild(i).transform.GetChild(3).GetComponent<Text>().text = "Level " + (i + 1).ToString();

                teen.Kill();
                levelParent.transform.GetChild(i).transform.localScale = new Vector3(.9f, .9f, .9f);
            }

            levelParent.transform.GetChild(GData.Instance.Career_Current_Level).transform.GetChild(2).gameObject.SetActive(true);
            teen = levelParent.transform.GetChild(GData.Instance.Career_Current_Level).transform.DOScale(new Vector3(.95f, .95f, .95f), 1);
        }
        else if (GData.Instance.Current_Mode == 2)
        {
            for (int i = GData.Instance.Free_Played_Level; i < levelParent.transform.childCount; i++)
            {
                levelParent.transform.GetChild(i).GetComponent<Button>().interactable = false;
                levelParent.transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false); // played level sprite
                levelParent.transform.GetChild(i).transform.GetChild(2).gameObject.SetActive(false); // select level sprite
                levelParent.transform.GetChild(i).transform.GetChild(3).gameObject.SetActive(false); // level number text
                levelParent.transform.GetChild(i).transform.GetChild(1).gameObject.SetActive(true); //locked level sprite

                teen.Kill();
                levelParent.transform.GetChild(i).transform.localScale = new Vector3(.9f, .9f, .9f);
            }

            for (int i = 0; i < GData.Instance.Free_Played_Level; i++)
            {
                levelParent.transform.GetChild(i).GetComponent<Button>().interactable = true;
                levelParent.transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(true); // played level sprite
                levelParent.transform.GetChild(i).transform.GetChild(2).gameObject.SetActive(false); // select level sprite
                levelParent.transform.GetChild(i).transform.GetChild(3).gameObject.SetActive(true); // level number text
                levelParent.transform.GetChild(i).transform.GetChild(1).gameObject.SetActive(false); // locked level sprite
                                                                                                     //levelParent.transform.GetChild(i).transform.GetChild(3).GetComponent<Text>().text = "Level " + (i + 1).ToString();

                teen.Kill();
                levelParent.transform.GetChild(i).transform.localScale = new Vector3(.9f, .9f, .9f);
            }

            levelParent.transform.GetChild(GData.Instance.Free_Current_Level).transform.GetChild(2).gameObject.SetActive(true);
            teen = levelParent.transform.GetChild(GData.Instance.Free_Current_Level).transform.DOScale(new Vector3(.95f, .95f, .95f), 1);
        }

    }

    public void OnLevelClick(int val)
    {
        if(GData.Instance.Current_Mode == 1)
        {
            GData.Instance.Career_Current_Level = val;
        }
        else if(GData.Instance.Current_Mode == 2)
        {
            GData.Instance.Free_Current_Level = val;
        }
        GData.Instance.SavaGameData();

        LevelCheck();
        Button_Click();

        LoadingScreen.GetComponent<LoadingScreen>().loadObjectInstead = false;

        if (GData.Instance.Current_Mode == 1)
            LoadingScreen.GetComponent<LoadingScreen>().sceneName = "JungleEnv";
        else if (GData.Instance.Current_Mode == 2)
            LoadingScreen.GetComponent<LoadingScreen>().sceneName = "Snow";
        LoadingScreen.SetActive(true);
    }

    public void LevelBack()
    {
        ModeSelection.SetActive(true);
        LevelSelection.SetActive(false);
        Button_Click();
    }

    public void LevelNext()
    {
        LoadingScreen.GetComponent<LoadingScreen>().loadObjectInstead = false;
        LoadingScreen.SetActive(true);
        Button_Click();
    }
    #endregion
    public void Button_Click()
    {
        if (AudioManager.instance)
        {
            AudioManager.instance.Play("ButtonClick");
        }
    }
}