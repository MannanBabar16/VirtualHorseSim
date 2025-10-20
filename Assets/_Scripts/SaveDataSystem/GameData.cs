using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData 
{
    public int Total_Levels;
    public int Total_Guns;
    public int Career_Current_Level;
    public int Online_Current_Level;
    public int Free_Played_Level;
    public int Current_Gun = 0;
    public int Coins;
    public int Gems;
    public int Sound;
    public int Music;
    public int Current_Mode;
    public int Current_Player;
    public bool IsAllGunsPurchased = false;
    public bool IsAllLevelsPurchased = false;
    public bool IsEveryThingPurchased = false;
    public bool RemoveAds = false;
    public int[] Players = new int[5];
    public bool isTutRun = false;

    public GameData(GData Data)
    {
        Total_Levels = Data.Career_Played_Levels;
        Total_Guns = Data.Total_Players;
        Career_Current_Level = Data.Career_Current_Level;
        Online_Current_Level = Data.Free_Current_Level;
        Free_Played_Level = Data.Free_Played_Level;
        Current_Gun = Data.Current_Gun;
        IsAllGunsPurchased = Data.IsAllGunsPurchased;
        IsAllLevelsPurchased = Data.IsAllLevelsPurchased;
        IsEveryThingPurchased = Data.IsEveryThingPurchased;
        Coins = Data.Coins;
        Gems = Data.Gems;
        Sound = Data.Sound;
        Current_Mode = Data.Current_Mode;
        Current_Player = Data.Current_Player;
        RemoveAds = Data.RemoveAds;
        isTutRun = Data.isTutRun;
        Music = Data.Music;
        for(int i = 0; i < Players.Length; i++) 
        {
            Players[i] = Data.Players[i];
        }
    }
    
}
