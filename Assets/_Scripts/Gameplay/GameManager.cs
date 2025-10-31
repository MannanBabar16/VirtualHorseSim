using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using MalbersAnimations.Controller;
using MangoMango.Advertisement;
/*using DG.Tweening;
using SWS;*/

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    bool isPaused = false;
    bool instructionBtn = false;

    Coroutine timerCoroutine = null;
    float timeRemainForReward = 0;

    public Material horseMaterial;
    public Texture[] horseTextures;

    public GameObject CareerLevels;
    public GameObject FreeMode;
    public LevelInfo currentLevel;
    public GameObject Horse;
    public float health = 100;
    public GameObject fightTrigger;
    public GameObject Rider;
    public GameObject horstOffscreenTarget;
    public int demoLevel;
    public bool isChecking;
    bool isFirstMount;
    public MAnimal mAnimal;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }
    private void Start()
    {
        mAnimal.useCameraInput.Value = true;
        Debug.Log("Value offffffffffffff camer ain put = " + mAnimal.useCameraInput.Value);
       

        if (!isChecking)
        {
            GData.Instance.LoadGameData();
            if (GData.Instance.Current_Mode == 1)
            {
                demoLevel = GData.Instance.Career_Current_Level;
            }
            else if (GData.Instance.Current_Mode == 2)
            {
                demoLevel = GData.Instance.Free_Current_Level;
            }
        }
       

        if (AudioManager.instance)
        {
            AudioManager.instance.Play("Gameplay");
            AudioManager.instance.StopPlaying("Background");
        }

        SethorseTextures();
        GetLevelInfo(demoLevel);

        //if career mode Then timer
        Start_Timer(true, 5);
        //Time.timeScale = 0;
    }

    void SethorseTextures()
    {
        horseMaterial.mainTexture = horseTextures[GData.Instance.Current_Player];
    }

    void GetLevelInfo(int level)
    {
        CareerLevels.transform.GetChild(level).gameObject.SetActive(true);
        currentLevel = CareerLevels.transform.GetChild(level).GetComponent<LevelInfo>();

        SetLevels();
    }

    void SetLevels()
    {
        Rider.transform.SetPositionAndRotation(currentLevel.SpawnPosition[0].transform.position, currentLevel.SpawnPosition[0].transform.rotation);
        Horse.transform.SetPositionAndRotation(currentLevel.SpawnPosition[1].transform.position, currentLevel.SpawnPosition[1].transform.rotation);

        ObjectivePanel(currentLevel.ObjectiveText);
    }

    public void HorseAttack()
    {
        Horse.GetComponent<Animator>().SetTrigger("IsFight");
        fightTrigger.SetActive(true);
        Invoke("EndHorseAttack", 1.8f);

        if (AudioManager.instance)
        {
            AudioManager.instance.Play("Horse");
        }

        UIManager.Instance.attackButton.interactable = false;
    }

    public void EndHorseAttack()
    {
        UIManager.Instance.attackButton.interactable = true;
        fightTrigger.SetActive(false);
    }

    public void HealthCheck(float val)
    {
        if (health > 0)
        {
            health -= val;
            UIManager.Instance.healthBar.fillAmount = health / 100;
        }
        else
        {
            GameFailed();
        }
    }

    public void HorsrMountFirst()
    {
        if (!isFirstMount)
        {

            horstOffscreenTarget.SetActive(false);
            currentLevel.Checkpoint.transform.GetChild(0).gameObject.SetActive(true);
            currentLevel.Checkpoint.transform.GetChild(0).transform.GetComponent<Target>().enabled = true;
            isFirstMount = true;

        }
    }


    #region INSTRUCTION AND OBJECTIVE
    public void Intruction_Button()
    {
        if (!instructionBtn)
        {
            UIManager.Instance.instructionButton.transform.GetChild(0).gameObject.SetActive(true);
            instructionBtn = true;
        }
        else if (instructionBtn)
        {
            UIManager.Instance.instructionButton.transform.GetChild(0).gameObject.SetActive(false);
            instructionBtn = false;
        }
    }

    public void Instruction_Auto(string str)
    {
        StartCoroutine(Ins(str));
    }

    IEnumerator Ins(string str)
    {
        yield return new WaitForSeconds(0);
        UIManager.Instance.instructionButton.transform.GetChild(0).gameObject.SetActive(true);
        UIManager.Instance.instructionText.text = str; ;
        yield return new WaitForSeconds(2f);
        UIManager.Instance.instructionButton.transform.GetChild(0).gameObject.SetActive(false);
    }

    public void ObjectivePanel(string panelText)
    {
        UIManager.Instance.objectiveText.text = panelText;
        UIManager.Instance.ObjectivePanel.SetActive(true);
        Time.timeScale = 0;
    }

    public void ObjectivePanelYes()
    {
        UIManager.Instance.ObjectivePanel.SetActive(false);
        Time.timeScale = 1;
    }

    #endregion

    #region TIMER
    public void Start_Timer(bool check, float time)
    {
        float xTime = time * 60;

        if (check)
        {
            timerCoroutine = StartCoroutine(TimerLogic(xTime));
        }
        else if (!check)
        {
            StopCoroutine(timerCoroutine);
        }

    }

    IEnumerator TimerLogic(float time)
    {

        while (time > 0)
        {
            if (time > 0)
            {
                time -= Time.deltaTime;
                timeRemainForReward = time;

                DisplayTime(time);

                if (time < 1)
                {
                    GameFailed();
                    yield break;
                }
            }
            else
                time = 0;

            yield return null;
        }

    }

    void DisplayTime(float timeToDisplay)
    {
        timeToDisplay += 1;
        float minutes = Mathf.FloorToInt(timeToDisplay / 60);
        float seconds = Mathf.FloorToInt(timeToDisplay % 60);
        UIManager.Instance.timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }
    #endregion

    #region GAME STATES
    public void Pause()
    {
        if (!isPaused)
        {
            UIManager.Instance.PausedPanel.SetActive(true);
            if (ApplovinAdManager.Instance)
            {
                ApplovinAdManager.Instance.ShowInterstitial(RCBool.InterstitialCheckAll);
            }
            
            Time.timeScale = 0f;
            isPaused = true;
        }
        else if (isPaused)
        {
            UIManager.Instance.PausedPanel.SetActive(false);
            Time.timeScale = 1f;
            isPaused = false;
        }
        Button_Click_Sound();
    }

    public void GameComplete(int val)
    {
        StartCoroutine(GameCompleteLogic(val));
    }

    IEnumerator GameCompleteLogic(int val)
    {
        yield return new WaitForSeconds(val);

        if (GData.Instance.Career_Current_Level == 9)
        {
            UIManager.Instance.nextButton.SetActive(false);
        }

        UIManager.Instance.LevelCompletePanel.SetActive(true);
        if (AudioManager.instance)
        {
            AudioManager.instance.Play("Complete");
        }

        if (GData.Instance)
        {
            GData.Instance.Coins += 1000;
            GData.Instance.SavaGameData();
        }
        Time.timeScale = 0;
    }

    public void GameFailed()
    {
        StartCoroutine(GameFailedLogic());
    }

    IEnumerator GameFailedLogic()
    {
        yield return null;
        UIManager.Instance.LevelFailedPanel.SetActive(true);
        if (AudioManager.instance)
        {
            AudioManager.instance.Play("Failed");
        }
        if (ApplovinAdManager.Instance)
        {
            ApplovinAdManager.Instance.ShowInterstitial(RCBool.InterstitialCheckAll);
        }
        Time.timeScale = 0;
    }
    #endregion

    #region GENERAL FUNCTION

    public void Home()
    {
        Time.timeScale = 1;
        //SceneManager.LoadScene("MainMenu");
        UIManager.Instance.loadingPanel.GetComponent<LoadingScreen>().sceneName = "MainMenu";
        UIManager.Instance.loadingPanel.GetComponent<LoadingScreen>().loadObjectInstead = false;
        UIManager.Instance.loadingPanel.SetActive(true);
        Button_Click_Sound();
    }

    public void Restart()
    {
        //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        UIManager.Instance.loadingPanel.GetComponent<LoadingScreen>().sceneName = SceneManager.GetActiveScene().name;
        UIManager.Instance.loadingPanel.GetComponent<LoadingScreen>().loadObjectInstead = false;
        UIManager.Instance.loadingPanel.SetActive(true);
        Button_Click_Sound();
        Time.timeScale = 1;
    }

    public void Next()
    {
        Button_Click_Sound();
        Time.timeScale = 1;
        if (GData.Instance.Current_Mode == 1)
        {
            GData.Instance.Career_Current_Level++;

            if (GData.Instance.Career_Current_Level == GData.Instance.Career_Played_Levels)
            {
                GData.Instance.Career_Played_Levels++;
            }
        }
        else if (GData.Instance.Current_Mode == 2)
        {
            GData.Instance.Free_Current_Level++;

            if (GData.Instance.Free_Current_Level == GData.Instance.Free_Played_Level)
            {
                GData.Instance.Free_Played_Level++;
            }
        }
        GData.Instance.SavaGameData();
        //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        UIManager.Instance.loadingPanel.GetComponent<LoadingScreen>().sceneName = SceneManager.GetActiveScene().name;
        UIManager.Instance.loadingPanel.GetComponent<LoadingScreen>().loadObjectInstead = false;
        UIManager.Instance.loadingPanel.SetActive(true);
         if (ApplovinAdManager.Instance)
            {
                ApplovinAdManager.Instance.ShowInterstitial(RCBool.InterstitialCheckAll);
            }
    }

    public void Button_Click_Sound()
    {
        if (AudioManager.instance)
        {
            AudioManager.instance.Play("ButtonClick");
        }
    }

    #endregion
}
