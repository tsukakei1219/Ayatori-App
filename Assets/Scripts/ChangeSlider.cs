using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;//SliderはUIなので追加
using UnityEngine.SceneManagement;

public class ChangeSlider : MonoBehaviour
{
    public Slider Slider;//Sliderの変更なのでスライダーを読み込む

    void Start()
    {
        Slider.value = 0;//Sliderのvalueを0に変更する
    }

    public void PushGageRaiseButton()
    {
        Slider.value += 10;//Sliderのvalueをに+10
        if(Slider.value == 100)
        {
            SceneManager.LoadScene("ResultScene");
        }
    }
    
    public void PushGageLoseButton()
    {
        Slider.value -= 10;//Sliderのvalueをに+10
    }

}