using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
   public static UIManager Instance;

    [Header("          ---------- PANELS ----------")]
    [Space(10)]

    public GameObject LevelCompletePanel;
    public GameObject LevelFailedPanel;
    public GameObject PausedPanel;
    public GameObject ObjectivePanel;
    public GameObject loadingPanel;

    [Header("          ---------- TEXTS ----------")]
    [Space(10)]
    public Text timerText;
    public Text instructionText;
    public Text objectiveText;

    [Header("          ---------- BUTTONS ----------")]
    [Space(10)]
    public GameObject instructionButton;
    public GameObject nextButton;
    public GameObject gameplayBtn;
    public Button attackButton;

    [Header("          ---------- IAMGES ----------")]
    [Space(10)]
    public Image healthBar;
    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

  
}
