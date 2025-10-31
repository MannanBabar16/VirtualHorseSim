using MangoMango.Advertisement;
using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class RewardAdButton : MonoBehaviour
{
    [SerializeField] UnityEvent OnReward;
    Button button;

    private void Start()
    {
        button = GetComponent<Button>();
        if (button != null)
        {
            button.onClick.AddListener(OnButtonClick);
        }
    }

    private void OnButtonClick()
    {
        ApplovinAdManager.Instance.ShowRewardedAd(() =>
        {
            OnReward?.Invoke();
        });
    }
}

