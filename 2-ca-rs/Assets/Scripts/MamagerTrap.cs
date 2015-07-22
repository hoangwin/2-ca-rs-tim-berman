using UnityEngine;
using System.Collections;

public class MamagerTrap : MonoBehaviour {

	// Use this for initialization
	public GameObject TrapTemplate;
	public int prelineLeft;
	public int prelineRight;
	public Vector3 pos;
	public static ArrayList list;

	void Start () {
		list = new ArrayList ();
		prelineLeft = 1;
		prelineRight = 4;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		createLeftTrap ();
	}
	public GameObject last1;
	public GameObject last2;

	public void createLeftTrap()
	{
		if (GamePlay.currentState != GamePlay.STATE_PLAY)
			return;
		if (last1 == null)
		{
			last1 = creaNewTrap(true);
			last2 = creaNewTrap(false);
		}
		else
		{ 
			//Debug.Log(last1.transform.position.y);
			if(last1.transform.position.y<3)
				last1 = creaNewTrap(true);
			if(last2.transform.position.y<3)
				last2 = creaNewTrap(false);
		}
	}
	public GameObject creaNewTrap(bool left)
	{
		GameObject obj = (GameObject)Instantiate(TrapTemplate);
		obj.SetActive (true);

		float offsetx = 0;
		float lSizeY = Camera.main.orthographicSize * 2.0f;
		float screenX_step = lSizeY * Camera.main.aspect/4;
		Trap trap = obj.GetComponent<Trap>();
		int i = Random.Range(0,2);
//		Debug.Log (i);
		trap.type = i;
		if (left) {
			if (prelineLeft == 1) {
				offsetx = - 3 * screenX_step / 2;
				prelineLeft = 2;//line = 2
			} else {
				offsetx = - screenX_step / 2;
				prelineLeft = 1;//line =1
			}

			if (trap.type == 0) {
				trap.anim.Play ("Trap_Left_0_IDE");
			} else {
				trap.anim.Play ("Trap_Left_1_IDE");
			}

		} else {
			if (prelineRight == 1) {
				offsetx =  3 * screenX_step / 2;
				prelineRight = 2;//line = 2
			} else {
				offsetx = screenX_step / 2;
				prelineRight = 1;//line =1
			}
			
			if (trap.type == 0) {
				trap.anim.Play ("Trap_Right_0_IDE");
			} else {
				trap.anim.Play ("Trap_Right_1_IDE");
			}
		}
	//	trap.type = type;
		float f = Random.Range(-0.5f,0.5f);
		obj.transform.Translate (offsetx, f, 0);

		list.Add (obj);

		return obj;
	}

	
}
