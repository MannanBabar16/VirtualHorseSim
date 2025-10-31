using UnityEngine;

public class InternetChecker : MonoBehaviour
{
    public static InternetChecker instance;
    public GameObject noInternetPanel;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            transform.parent = null;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    void Update()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            if (!noInternetPanel.activeSelf)
                noInternetPanel.SetActive(true);
        }
    }
    public void Retry()
    {
        if (Application.internetReachability != NetworkReachability.NotReachable)
        {
            noInternetPanel.SetActive(false);
        }
    }
}