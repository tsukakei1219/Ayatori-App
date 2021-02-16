using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraImport : MonoBehaviour
{
    int width = 1056;
    int height = 594;
    int fps = 30;

    WebCamTexture webcamTexture;
    Texture2D texture;
    Texture2D resizetexture;
    int cameranum = 0;
    int testcount = 0;

    public Color32[] color32;
    GameObject gameobject;
    // Start is called before the first frame update
    void Start()
    {
        WebCamDevice[] devices = WebCamTexture.devices;
        webcamTexture = new WebCamTexture(devices[0].name, this.width, this.height, this.fps);
        webcamTexture.Play();
        Debug.Log(webcamTexture.width);
        Debug.Log(webcamTexture.height);
        texture = new Texture2D(webcamTexture.width, webcamTexture.height);
        GetComponent<RawImage>().texture = webcamTexture;

        resizetexture = new Texture2D(512, 512);
        gameobject = GameObject.Find("MNIST");
    }

    // Update is called once per frame
    void Update()
    {
        if (testcount == 60)
        {
            color32 = webcamTexture.GetPixels32();
            texture.SetPixels32(color32);
            Graphics.ConvertTexture(GetSquareCroppedTexture(texture), resizetexture);
            //GetComponent<RawImage>().texture = resizetexture;
            gameobject.GetComponent<MnistSample>().OnDrawTexture(resizetexture);
            testcount = 0;
        }
        else
        {
            testcount += 1;
        }
        
    }

    Texture2D GetSquareCroppedTexture(Texture2D textureOriginal)
    {
        int length = textureOriginal.height;
        int margin = (textureOriginal.width - length) / 2;
        Color[] c = textureOriginal.GetPixels(margin, 0, length, length);
        Texture2D textureCropped = new Texture2D(length, length);
        textureCropped.SetPixels(c);
        textureCropped.Apply();
        return textureCropped;
    }

    public void ChangeCamera(){
        WebCamDevice[] devices = WebCamTexture.devices;
        if(cameranum==0){
            cameranum=1;
        }else{
            cameranum=0;
        }
        webcamTexture = new WebCamTexture(devices[cameranum].name, this.width, this.height, this.fps);
        webcamTexture.Play();
    }

}
