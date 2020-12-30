using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ChangeCount : MonoBehaviour
{
    private int count;
    public Text CounterText;

    // Use this for initialization
    void Start()
    {
        count = 1;
        CounterText.text = count.ToString();
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void PushCountRaiseButton()
    {
        count += 1;//＋１点のスクリプトは＋１
        if (count == 5)
        {
            SceneManager.LoadScene("ResultScene");
        }
        CounterText.text = count.ToString();
    }

    public void PushCountLoseButton()
    {
        count -= 1;//＋１点のスクリプトは＋１
        CounterText.text = count.ToString();
    }
}