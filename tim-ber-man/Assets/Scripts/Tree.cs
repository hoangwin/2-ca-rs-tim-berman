using UnityEngine;
using System.Collections;

public class Tree : MonoBehaviour {

	// Use this for initialization
    public TreePart[] treePart;
    public TreePart temp;
    public static Tree instance;
    float offsetMove = 0;
    Vector3 posFrom;
    public Renderer templeRenderer;
    float HEIGHT = 0;
    //int preIndex;
	void Start () {
        instance = this;
        posFrom = transform.position;        
        HEIGHT = templeRenderer.bounds.size.y;
        
           
	}
	public void init()
    {
        float x = treePart[0].transform.position.x;
        float y = treePart[0].transform.position.y;
        float z = treePart[0].transform.position.z;
        for (int i = 1; i < treePart.Length; i++)
        {
            treePart[i].transform.position = new Vector3(x, y + HEIGHT * i, z);

        }
        treePart[0].setIndex(1);
        treePart[1].setIndex(1);
        treePart[2].setIndex(2);
        treePart[3].setIndex(1);
        treePart[4].setIndex(0);
        treePart[5].setIndex(3);        
    }
	// Update is called once per frame
	void FixedUpdate () {

       

	}
    
    public void aattack(bool left)
    {

        //temp.setIndex(treePart[0].Index);
        temp.Index = treePart[0].Index;
        if((left && treePart[0].Index ==2 ) ||(!left && treePart[0].Index ==3 ))
        {
            GamePlay.instance.showGameOver();
        }
        else//
        {

            if(treePart[0].Index ==1)
                SoundEngine.play(SoundEngine.instance.chop1);
                
            else if (treePart[0].Index == 2)
                SoundEngine.play(SoundEngine.instance.chop2);
            else if (treePart[0].Index == 3)
                SoundEngine.play(SoundEngine.instance.chop3);

            if (left)

                temp.transform.localScale = new Vector3(-Mathf.Abs(temp.transform.localScale.x), temp.transform.localScale.y, temp.transform.localScale.z);
            else
                temp.transform.localScale = new Vector3(Mathf.Abs(temp.transform.localScale.x), temp.transform.localScale.y, temp.transform.localScale.z);


            temp.setDestroyAnim();


            TreePart temp1 = treePart[0];

            for (int i = 0; i < treePart.Length - 1; i++)
            {
                treePart[i] = treePart[i + 1];
            }


            treePart[5] = temp1;
            posFrom.y -= HEIGHT;
            treePart[5].transform.Translate(0, HEIGHT * 6, 0);
            if (treePart[4].Index == 2)
            {
                int i = Random.Range(1, 2);

                treePart[5].setIndex(i);
            }
            else if (treePart[4].Index == 3)
            {
                int i = Random.Range(1, 2);
                if (i == 2)
                    i = 3;
                treePart[5].setIndex(i);
            }
            else
                treePart[5].Init();

            iTween.MoveTo(gameObject, posFrom, 0.2f);
        }

        if (checkLose(left))
        {
            GamePlay.instance.showGameOver();
        }

    }
    public bool checkLose(bool left)
    {
        if(left)
        {
            if (treePart[0].Index == 2)
            {
                Debug.Log("tenten1");
                return true;
            }
        }
        else
        {
            if (treePart[0].Index == 3)
            {
                Debug.Log("tenten2");
                return true;
            }
        }
        return false;
    }
}
