using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderManager : MonoBehaviour
{
    // Start is called before the first frame update

    Slider Slider;
    public int loadval=0;
    void Start()
    {
        Slider = GetComponent<Slider>();
        Slider.maxValue = 200f;
        Slider.value = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SliderVal(int val)
    {
        Debug.Log(val*50);
        if(Slider.value + 50 == val*50){
           Slider.value = Slider.value + 50; 
        }
    }

    public int HandoffVal(){

        return (int)Slider.value/50;
    }
}
