using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class GData : MonoBehaviour
{
    public static GData Instance;
    public int Career_Played_Levels = 1;
    public int Total_Players = 12;
    public int Career_Current_Level = 0;
    public int Free_Current_Level = 0;
    public int Free_Played_Level = 1;
    public int Current_Mode = 1;
    public int Current_Gun;
    public int Coins = 100;
    public int Gems = 10;
    public int Sound = 1;
    public int Music = 1;
    public int Current_Player = 0;
    public int[] Players = new int[5]; 
    public bool ResetoldData;
    public bool isTutRun = false;
    public bool IsAllGunsPurchased = false;
    public bool IsAllLevelsPurchased = false;
    public bool IsEveryThingPurchased = false;
   // [HideInInspector]
    public bool RemoveAds = false;
    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }

        if (ResetoldData)
        {
            ResetData();
        }

    }
    public void SavaGameData()
    {
        SaveSystem.GameData(this);
        Debug.Log("Your Game data is saved");
        //LoadGameData();
    }

    public void LoadGameData()
    {
        GameData data = SaveSystem.LoadGameData();
        Career_Played_Levels = data.Total_Levels;
        IsAllGunsPurchased = data.IsAllGunsPurchased;
        IsAllLevelsPurchased = data.IsAllLevelsPurchased;
        IsEveryThingPurchased = data.IsEveryThingPurchased;
        RemoveAds = data.RemoveAds;
        Total_Players = data.Total_Guns;
        Current_Gun = data.Current_Gun;
        Career_Current_Level = data.Career_Current_Level;
        Free_Played_Level = data.Free_Played_Level;
        Free_Current_Level = data.Online_Current_Level;
        Coins = data.Coins;
        Gems = data.Gems;
        Sound = data.Sound;
        Music = data.Music;
        Current_Mode = data.Current_Mode;
        Current_Player = data.Current_Player;
        isTutRun = data.isTutRun;

        for (int i = 0; i < Players.Length; i++)
        {
            Players[i] = data.Players[i];
        }

        Debug.Log( "Your Game Level is" + Career_Current_Level + "Your Game Coins is" + Coins + "Your Game Gems is" + Gems + "Your Game Current Player is" + Current_Player);
    }

    public void ResetData()
    {
        Career_Current_Level = 0;
        Career_Played_Levels = 1;
        Free_Current_Level = 0;
        Free_Played_Level = 1;
        Coins = 100;
        Gems = 10;
        Current_Player = 0;
        Current_Mode = 1;
        Sound = 1;
        Music = 1;
        IsAllGunsPurchased = false;
        IsAllLevelsPurchased = false;
        IsEveryThingPurchased = false;
        RemoveAds = false;
        isTutRun = false;
        Current_Gun = 0;
        for(int i = 1; i < Players.Length; i++)
        {
            Players[i] = 0;
        }
        Players[0] = 1;
        SaveSystem.GameData(this);
    }
}
