using Firebase.Analytics;
using UnityEngine;

public class FirebaseEvents : MonoBehaviour
{
    int lvl = 0;
    public void PlayEvent()
    {
        FirebaseAnalytics.LogEvent("play_Btn", new Parameter("status", "Play_Button"));
    }
    public void LvlStartEvent()
    {
        lvl++;
        FirebaseAnalytics.LogEvent("lvlStart", new Parameter("status", lvl.ToString()));
    }

    public void LvlEndEvent()
    {
        FirebaseAnalytics.LogEvent("lvlEnd", new Parameter("status", lvl.ToString()));
    }

}
