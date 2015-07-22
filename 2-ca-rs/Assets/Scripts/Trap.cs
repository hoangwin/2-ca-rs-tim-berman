using UnityEngine;
using System.Collections;

public class Trap : MonoBehaviour {
	float speed  = 5.5f;
	// Use this for initialization
	Vector3 tranlate;
	public int type;// dc hay ko dc
	public Animator anim;
	void Start () {
		tranlate = new Vector3 (0, 0, 0);
	}
	
	// Update is called once per frame
	void Update () {
		if (GamePlay.currentState == GamePlay.STATE_PLAY) {
			tranlate.y = -speed * Time.deltaTime;
			this.gameObject.transform.Translate (tranlate);
		}
	}
	void FixedUpdate () {
		if (GamePlay.currentState == GamePlay.STATE_PLAY) {
			if (this.gameObject.transform.position.y < -5)
			{MamagerTrap.list.Remove(this.gameObject);
				GameObject.Destroy (this.gameObject);
			}
			if (this.gameObject.transform.position.y < -4 && type == 0)
			{
				if (this.gameObject.transform.position.x< 0)
				    anim.Play("Trap_Left_0_BLINK");
				else
					anim.Play("Trap_Right_0_BLINK");
				GamePlay.instance.showGameOver ();}
		}
	}
	void OnTriggerEnter2D(Collider2D  other) {
		Debug.Log(type);
		if (type == 1) {
			if (this.gameObject.transform.position.x< 0)
			
				anim.Play("Trap_Left_1_Destroy");
			else 
				anim.Play("Trap_Right_1_Destroy");
			GamePlay.instance.showGameOver();
		} else {
			SoundEngine.play(SoundEngine.instance.coins);
			MamagerTrap.list.Remove(this.gameObject);
			GameObject.Destroy(this.gameObject);
			GamePlay.instance.mCountTimber++;
			GamePlay.instance.textCounttimbet.text = GamePlay.instance.mCountTimber.ToString();
		}
			//DestroDebuy(other.gameObject);
	}
}
