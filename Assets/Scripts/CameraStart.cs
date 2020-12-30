using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraStart : MonoBehaviour
{
    public GameObject StartHoukiButton;
    public GameObject HoukiInstruct;
    public GameObject Time;
    public GameObject HoukiCamera;
    public RawImage rawImage;

    WebCamTexture webCamTexture;

    // Start is called before the first frame update
    void Start()
    {
        Time.SetActive(false);
        HoukiCamera.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PushStartHoukiCamera()
    {
        StartHoukiButton.SetActive(false);
        HoukiInstruct.SetActive(false);
        Time.SetActive(true);
        HoukiCamera.SetActive(true);
        webCamTexture = new WebCamTexture();
        rawImage.texture = webCamTexture;
        webCamTexture.Play();
    }
}
