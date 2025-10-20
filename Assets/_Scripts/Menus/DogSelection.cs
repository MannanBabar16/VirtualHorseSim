using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DogSelection : MonoBehaviour
{
    [Space(10)]
    [Header("========== Dog Selection ==========")]
    [Space(10)]

    [SerializeField] Text coins;

    [SerializeField] GameObject Dog;
    [SerializeField] GameObject buyButton;
    [SerializeField] GameObject nextButton;
    [SerializeField] GameObject panelBroke;
    [SerializeField] GameObject congratulationPanel;

    [SerializeField] Texture[] horseTexture;
    [SerializeField] Material horseMaterial;

    [SerializeField] int[] horsePrices;
    [SerializeField] Text horsePriceText;
    [SerializeField] GameObject loadingScreen;

    [Space(10)]
    [Header("========== SPECIFICATION ==========")]
    [Space(10)]

    [SerializeField] Image[] specsFillBar;
    int dogNum = 0;

    private void Start()
    {
        GData.Instance.LoadGameData();
        coins.text = GData.Instance.Coins.ToString();
        CheckDogs();
        DogSpecification();
    }



    public void DogSpecification()
    {
        for (int i = 0; i < 3; i++)
        {
            specsFillBar[i].fillAmount = Random.Range(0.5f, 0.95f);
        }
    }

    public void NextDog()
    {
        ButtonClickSound();
        Dog.SetActive(false);
        dogNum++;
        if (dogNum == 5)
            dogNum = 0;
        horseMaterial.mainTexture = horseTexture[dogNum];

        Dog.SetActive(true);
        CheckDogs();
        DogSpecification();
    }

    public void PreviousDog()
    {
        ButtonClickSound();
        Dog.SetActive(false);
        dogNum--;
        if (dogNum == -1)
            dogNum = 4;
        horseMaterial.mainTexture = horseTexture[dogNum];
        
        Dog.SetActive(true);
        CheckDogs();
        DogSpecification();
    }

    public void BuyDog()
    {
        ButtonClickSound();
        if (GData.Instance.Coins >= horsePrices[dogNum])
        {
            Debug.Log("Bought car successfully");
            GData.Instance.Players[dogNum] = 1;
            GData.Instance.Coins = GData.Instance.Coins - horsePrices[dogNum];
            GData.Instance.SavaGameData();
            coins.text = GData.Instance.Coins.ToString();
            CheckDogs();
            congratulationPanel.SetActive(true);
        }
        else
        {
            panelBroke.SetActive(true);
        }
    }

    void CheckDogs()
    {
        if (GData.Instance.Players[dogNum] == 1)
        {
            buyButton.gameObject.SetActive(false);
            nextButton.gameObject.SetActive(true);
            horsePriceText.transform.parent.gameObject.SetActive(false);
        }
        else
        {
            buyButton.gameObject.SetActive(true);
            nextButton.gameObject.SetActive(false);
            horsePriceText.transform.parent.gameObject.SetActive(true);
            horsePriceText.text = horsePrices[dogNum].ToString() + "$";
        }
    }
    public void SelectHorse()
    {
        ButtonClickSound();
        if (GData.Instance.Players[dogNum] == 1)
        {
            GData.Instance.Current_Player = dogNum;
            GData.Instance.SavaGameData();
        }

        SceneManager.LoadScene("ModeLevelSelection");
        //loadingScreen.SetActive(true);
    }

    public void Back()
    {
        ButtonClickSound();
        SceneManager.LoadScene("MainMenu");
    }

    public void ButtonClickSound()
    {
        if (AudioManager.instance)
        {
            AudioManager.instance.Play("ButtonClick");
        }
    }
}
