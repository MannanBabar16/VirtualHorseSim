using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadingScreen : MonoBehaviour
{
    [SerializeField] GameObject ObjectToLoad;
    [SerializeField] GameObject ObjectToUnload;
    public bool loadObjectInstead = false;
    public string sceneName;
    [SerializeField] Text loadingText;
    AsyncOperation async;
    // Start is called before the first frame update
    void Start()
    {
        if (SceneManager.GetActiveScene().name == "SplashScreen" && !loadObjectInstead)
        {
            async = SceneManager.LoadSceneAsync(sceneName);
            async.allowSceneActivation = false;
            
        }
    }

    private void OnEnable()
    {
        if (SceneManager.GetActiveScene().name != "SplashScreen" && !loadObjectInstead)
        {
            async = SceneManager.LoadSceneAsync(sceneName);
            async.allowSceneActivation = false;
            
        }
    }
    private void Update()
    {
        float animTime = gameObject.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).normalizedTime;
        if(animTime <= 1)
        {
            loadingText.text = Mathf.Round(animTime * 100) + " %";
        }
    }

    public void Loading()
    {
        if(!loadObjectInstead)
            async.allowSceneActivation = true;
        else if(loadObjectInstead)
        {
            ObjectToLoad.SetActive(true);
            ObjectToUnload.SetActive(false);
            gameObject.SetActive(false);
        }
            
    }

}
