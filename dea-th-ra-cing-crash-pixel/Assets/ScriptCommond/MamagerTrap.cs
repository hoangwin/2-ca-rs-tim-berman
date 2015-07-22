using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MamagerTrap : MonoBehaviour {

	// Use this for initialization
	public GameObject TrapTemplate;
	public GameObject ItemTemplate;
	public int prelineLeft;
	public int prelineRight;
	public Vector3 pos;
	public Queue<Transform> objectQueue;

	public static MamagerTrap instance;
	void Start () {
		instance = this;
		objectQueue = new Queue<Transform>(100);
		GameEventManager.GameReStart += restart;
        GameEventManager.GameInitEvent += restart;
		prelineLeft = 1;
		prelineRight = 4;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		createLeftTrap ();
	}
	public GameObject last1;
	public GameObject last2;
	Transform tempTransform;
	public void createLeftTrap()
	{
		//if (GUIManager.state != GUIManager.STATE_PLAY)
		//	return;
		if (last1 == null)
		{
			last1 = creaNewTrap(true);
			last2 = creaNewTrap(false);
		}
		else
		{ 
			//Debug.Log(last1.transform.position.y);
			if(last1.transform.position.z-Camera.main.transform.position.z < 90)
					last1 = creaNewTrap(true);
			if(last2.transform.position.z-Camera.main.transform.position.z <90)
					last2 = creaNewTrap(false);
		}
		if (objectQueue.Count > 0) {
			tempTransform = objectQueue.Peek ();
			if(tempTransform != null)
			{
				if (tempTransform.transform.position.z < Runner.PosRunnerZ - 7) {
						RemoveBlock ();
				}
			}else 
			{
				RemoveBlock ();
			}
		}
	}
	public GameObject creaNewTrap(bool left)
	{
		int i = Random.Range(0,2);
		GameObject obj = null;
		if(i==1)
			obj = (GameObject)Instantiate(TrapTemplate);
		else 
			obj = (GameObject)Instantiate(ItemTemplate);
		obj.SetActive (true);

		float offsetx = 0;
		float offsetz = 0;
		Trap trap = obj.GetComponent<Trap>();

//		Debug.Log (i);
		//trap.type = i;
		if (left) {
			if(last2 == null)
				
				offsetz= PlatformManager.instance.posLand1.position.z + 15;
			else 
				offsetz= last1.transform.position.z;

			if (prelineLeft == 1) {
				offsetx = PlatformManager.instance.posLand1.position.x;

				prelineLeft = 2;//line = 2
			} else {
				offsetx = PlatformManager.instance.posLand2.position.x;

				prelineLeft = 1;//line =1
			}

			if (trap.type == 0) {
//				trap.anim.Play ("Trap_Left_0_IDE");
			} else {
	//			trap.anim.Play ("Trap_Left_1_IDE");
			}

		} else {
			if(last2 == null)

				offsetz= PlatformManager.instance.posLand4.position.z + 15;
			else 
				offsetz= last2.transform.position.z;
			if (prelineRight == 1) {
				offsetx = PlatformManager.instance.posLand3.position.x;

				prelineRight = 2;//line = 2
			} else {
				offsetx = PlatformManager.instance.posLand4.position.x;

				prelineRight = 1;//line =1
			}
			
			if (trap.type == 0) {
		//		trap.anim.Play ("Trap_Right_0_IDE");
			} else {
		//		trap.anim.Play ("Trap_Right_1_IDE");
			}
		}
	//	trap.type = type;
		float f = Random.Range(-0.5f,0.5f);
		obj.transform.Translate (offsetx, 0, f + offsetz + 5.5f,Space.World);
		objectQueue.Enqueue (obj.transform);


		return obj;
	}
	private void restart()
	{		
		Debug.Log ("Dlete");
		for (int i = 0; i < objectQueue.Count; i++) {
			RemoveBlock ();
			i--;
		}
	}
	public void RemoveBlock () 
	{
		Transform o = objectQueue.Dequeue();
		if(o != null && o.gameObject != null)
			GameObject.Destroy (o.gameObject);
		
	}
	
}
