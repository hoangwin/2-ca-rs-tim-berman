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
		if (GUIManager.state == GUIManager.STATE_PLAY) {
		
		}
	}
	void FixedUpdate () {
		if (GUIManager.state == GUIManager.STATE_PLAY) {
			if (transform.position.z < Runner.PosRunnerZ -2  && type == 0)
			{

				SoundEngine.play (SoundEngine.instance.end);
				GUIManager.timeInSubState = 0;
				GUIManager.state = GUIManager.STATE_WATTING_OVER;
				Object obj = (Instantiate (PlatformManager.instance.ItemMissEffect, transform.position, Quaternion.identity));
				PlatformManager.instance.objectQueue.Enqueue((Transform)obj);
				GamePlay.isMove = false;
			}
		}
	}

}
