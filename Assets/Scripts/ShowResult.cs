using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowResult : MonoBehaviour
{
    int minute;
    int seconds;
    public Text timerText;

    // Start is called before the first frame update
    void Start()
    {
        minute = TimerScript.GetHun();
        seconds = TimerScript.GetByo();
        timerText.text = minute.ToString("00") + ":" + seconds.ToString("00");
    }

    // Update is called once per frame
    void Update()
    {
        timerText.text = minute.ToString("00") + ":" + seconds.ToString("00");
    }
}
