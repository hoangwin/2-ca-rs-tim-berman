using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {
    public Animator Anim;
    public Animator AnimEffect;
    Vector3 scale;
    Vector3 postion;

	void Start () {
        scale = transform.localScale;
        postion = transform.position;

	}
	
	// Update is called once per frame
	void Update () {

		switch (GamePlay.currentState) {
		case GamePlay.STATE_WATTING:

			break;
		case GamePlay.STATE_PLAY:


			break;
		case GamePlay.STATE_DROP:

			break;
		}

	}
	void FixedUpdate()
	{
		
	}

    public void setAnimAttack(bool left)
    {
        if (left)
        {
            scale.x = Mathf.Abs(scale.x);
            postion.x = -Mathf.Abs(postion.x);
            gameObject.transform.localScale = scale;
            gameObject.transform.position = postion;
            Anim.Play("MainMC_Attack");
        }else
        {
            scale.x = -Mathf.Abs(scale.x);            
            postion.x = Mathf.Abs(postion.x);
            gameObject.transform.localScale = scale;
            gameObject.transform.position = postion;
            Anim.Play("MainMC_Attack");
        }

    }
    public void setAnimIDE(bool left)
    {
        if (left)
        {
            scale.x = Mathf.Abs(scale.x);
            postion.x = -Mathf.Abs(postion.x);
            gameObject.transform.localScale = scale;
            gameObject.transform.position = postion;
            Anim.Play("MainMC_IDE");
        }
        else
        {
            scale.x = -Mathf.Abs(scale.x);
            postion.x = Mathf.Abs(postion.x);
            gameObject.transform.localScale = scale;
            gameObject.transform.position = postion;
            Anim.Play("MainMC_IDE");
        }

    }

    void OnCollisionEnter2D(Collision2D collision)
    {


       
      //  SoundEngine.playSound("SoundFail");
    }
	
}
