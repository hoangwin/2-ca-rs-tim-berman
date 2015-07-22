using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Raking : MonoBehaviour {
    public Text text1;
    public Text text2;
    public Text text3;
    public Text text4;
    public Text text5;
    public static Raking instance;
	void Start () {
		instance = this;
		
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void setText()
    {
        text1.text = "1.             " +ScoreControl.score[0].NUM.ToString();
        text2.text = "2.             " + ScoreControl.score[1].NUM.ToString();
        text3.text = "3.             " + ScoreControl.score[2].NUM.ToString();
        text4.text = "4.             " + ScoreControl.score[3].NUM.ToString();
        text5.text = "5.             " + ScoreControl.score[4].NUM.ToString();

    }
	

}
