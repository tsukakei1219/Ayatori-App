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
        // ボタン削除
        StartHoukiButton.SetActive(false);
        // ボタンのテキストを削除
        HoukiInstruct.SetActive(false);
        // タイマー表示
        Time.SetActive(true);
        // カメラ起動
        HoukiCamera.SetActive(true);
        webCamTexture = new WebCamTexture();
        rawImage.texture = webCamTexture;
        // 縦横のサイズを要求
        // webCamTexture.requestedWidth = 810;
        // webCamTexture.requestedHeight = 810;
        // カメラ表示
        webCamTexture.Play();
    }
}
