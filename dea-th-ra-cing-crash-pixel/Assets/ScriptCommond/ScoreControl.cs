using UnityEngine;
using System.Collections;

public class ScoreControl : MonoBehaviour {
    public static SuperInt[] score = new SuperInt[6];
	
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public static void init()
    {
        for(int i=0;i<score.Length;i++)
        {
            score[i] = new SuperInt(0, i.ToString());
            score[i].Load();
        }
        //init
    }
	public static void saveGame()
	{
        for (int i = 0; i < score.Length; i++)
        {
            score[i].Save();
        }
	}
	public static void loadGame()
	{
        for (int i = 0; i < score.Length; i++)
        {
            score[i].Load();
        }
	}

    public static void checkNewScore(int i)
    {

        score[5].NUM = i;
        sortSaveGame();
    }
    public static void sortSaveGame()
    {
        int temp;
        for (int i = 0; i < score.Length ; i++)
        {
            
            for (int j = i; j < score.Length; j++)
            {
                if (score[i].NUM < score[j].NUM)
                {

                    temp = score[i].NUM;
                    score[i].NUM = score[j].NUM;
                    score[j].NUM = temp;
                }

            }
        }
       // for (int j = 0; j < score.Length; j++)
       // Debug.Log(score[j].NUM);
    }
}
