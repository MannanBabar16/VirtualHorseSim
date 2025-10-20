using Firebase;
using Firebase.Analytics;
using Firebase.Extensions;

using UnityEngine;

public class FirebaseInit : MonoBehaviour
{
    private void Start()
    {
      FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(continuation: task =>
          {
              FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
              Debug.Log("Firebase Initialized");
          });
    }


}
