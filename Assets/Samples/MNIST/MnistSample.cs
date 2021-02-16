using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TensorFlowLite;


public class MnistSample : MonoBehaviour
{
    [SerializeField, FilePopup("*.tflite")] string fileName = "houki_0213.tflite";
    [SerializeField] Text outputTextView = null;
    [SerializeField] ComputeShader compute = null;

    Interpreter interpreter;
    static int classes = 5;
    bool isProcessing = false;
    //サイズ、出力値の指定
    float[,,] inputs = new float[512,512,3];
    float[] outputs = new float[classes];
    ComputeBuffer inputBuffer;

    int Status =0;
    float ratio =0;
    float stock =0;
    float[] judge = new float[5]{0,0,0,0,0};
    int judgecount=0;

    GameObject Slider;

    System.Text.StringBuilder sb = new System.Text.StringBuilder();

    void Start()
    {
        var options = new InterpreterOptions()
        {
            threads = 4,
            useNNAPI = false,
        };
        interpreter = new Interpreter(FileUtil.LoadFile(fileName), options);
        interpreter.ResizeInputTensor(0, new int[] { 1, 512, 512, 3 });
        interpreter.AllocateTensors();

        inputBuffer = new ComputeBuffer(512 * 512 * 3, sizeof(float));

        Slider = GameObject.Find("Slider");
    }

    void OnDestroy()
    {
        interpreter?.Dispose();
        inputBuffer?.Dispose();
    }

    public void OnDrawTexture(Texture2D texture)
    {
        
        //描画されたら呼び出し
        if (!isProcessing)
        {
            Invoke(texture);
        }
    }

    void Invoke(Texture2D texture)
    {
        isProcessing = true;
        compute.SetTexture(0, "InputTexture", texture);
        compute.SetBuffer(0, "OutputTensor", inputBuffer);
        compute.Dispatch(0, 512/4, 512/4, 3);
        inputBuffer.GetData(inputs);
        float startTime = Time.realtimeSinceStartup;
        // 入力データをセット
        interpreter.SetInputTensorData(0, inputs);
    
        // 計算
        interpreter.Invoke();
        interpreter.GetOutputTensorData(0, outputs);
        float duration = Time.realtimeSinceStartup - startTime;


        sb.Clear();
        sb.AppendLine($"Process time: {duration: 0.00000} sec");
        sb.AppendLine("---");
        //結果出力用
        ratio=0;
        for (int i = 1; i < outputs.Length; i++)
        {
            if(ratio<outputs[i]){
                Status=i;
                ratio=outputs[i];
            }
            sb.AppendLine($"{i}: {outputs[i]: 0.0000}");
        }
        sb.AppendLine($"result : {Status}");

        //直近5回の推論結果を格納
        judge[judgecount]= outputs[Slider.GetComponent<SliderManager>().HandoffVal()+1];
        judgecount++;
        if(judgecount == judge.Length-1){
            judgecount=0;
        }

        stock=0;

        for (int i = 0; i < judge.Length; i++)
        {
            stock +=judge[i];
        }

        sb.AppendLine($"stock : {stock:0.0000}");
        outputTextView.text = sb.ToString();
        //直近5回の推論結果の合計値から工程クリアかを判別
        if(stock>=0.5){
            Slider.GetComponent<SliderManager>().SliderVal(Status);
               for (int i = 0; i < judge.Length; i++)
            {
                judge[i]=0;
            }
        }
        //Slider.GetComponent<SliderManager>().SliderVal(Status);

        isProcessing = false;
    }
}
