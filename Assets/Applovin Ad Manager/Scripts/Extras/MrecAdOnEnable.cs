using MangoMango.Advertisement;
using UnityEngine;

public class MrecAdOnEnable : MonoBehaviour
{
    private void OnEnable()
    {
        ApplovinAdManager.Instance?.ShowMRecBanner();
    }
    private void OnDisable()
    {
        ApplovinAdManager.Instance?.HideMRecBanner();
    }
}
