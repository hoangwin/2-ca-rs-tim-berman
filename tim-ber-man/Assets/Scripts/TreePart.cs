using UnityEngine;
using System.Collections;

public class TreePart : MonoBehaviour {

	// Use this for initialization
    public Animator anim;
    public int Index;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void Init()
    {
        Index = Random.Range(1, 4);
        if (Index == 1)
        anim.Play("Anim_IDE1");
        else if (Index == 2)
            anim.Play("Anim_IDE2");
        else if (Index == 3)
            anim.Play("Anim_IDE3");

        
    }
    public void setIndex(int i)
    {
      //  Debug.Log(i);
        Index = i;
        if (Index == 1)
            anim.Play("Anim_IDE1");
        else if (Index == 2)
            anim.Play("Anim_IDE2");
        else if (Index == 3)
            anim.Play("Anim_IDE3");

    }
    public void setDestroyAnim()
    {
      //  setIndex(Index);
        //anim.Play("Anim_NONE");
       
        if(Index ==1)
            //anim.Play("Anim_Destroy");
            anim.Play("Anim_Destroy", -1, 0f);
        else
            anim.Play("Anim_Destroy1", -1, 0f);
            //anim.Play("Anim_Destroy1");
    }


}
