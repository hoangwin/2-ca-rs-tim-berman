using UnityEngine;
using System.Collections.Generic;
using System.Collections;
public class PlatformManager : MonoBehaviour {

	public Transform prefab;
	public Transform cubeBegin;
	//public Transform BigCube;

	public Transform ItemEffect;
	public Transform ItemMissEffect;
	public Transform ItemDestroyEffect;
	public int numberOfObjects;
	public Vector3 posStar;
	public Vector3 posLastCube;
	
	public Transform posLand1;
	public Transform posLand2;
	public Transform posLand3;
	public Transform posLand4;

    public Transform treePosLeft;
    public Transform treePosRight;
    public Transform[] tree;


	public Transform startPosition;

	public Material[] materials;
	public PhysicMaterial[] physicMaterials;

	public Queue<Transform> objectQueue;
	public static PlatformManager instance;

	void Start () {

		instance = this;
		posStar = cubeBegin.transform.position;
		posLastCube = cubeBegin.transform.position;
		GameEventManager.GameStartEvent += GameStartInitPlatform;
		GameEventManager.GameOver += GameOver;
		GameEventManager.GameReStart += restart;
		GameEventManager.GameInitEvent += restart;
		objectQueue = new Queue<Transform>(numberOfObjects);

		//Transform obj = (Transform)(Instantiate (BigCube, BigCube.transform.position, Quaternion.identity));
	//	obj.transform.Rotate (0, 45, 0);
	//	obj.gameObject.SetActive (true);
	//	BigCube.gameObject.SetActive (false);
	//	objectQueue.Enqueue (obj);

		for (int i = 0; i < numberOfObjects; i++) {
			AddNewBlock();//Recycle();
		}


		//enabled = false;
	}

	void FixedUpdate () {
//		Debug.Log (objectQueue.Count);
		if (GUIManager.state == GUIManager.STATE_PLAY && GamePlay.isMove) {
			if (objectQueue.Count > 0) {
				if (objectQueue.Peek () != null) {

					if (objectQueue.Peek ().position.z < Camera.main.transform.position.z + CameraFllow.instance.offsetDestroy) {
						//Debug.Log (objectQueue.Count);
						PlatformManager.instance.RemoveBlockEffect ();
						PlatformManager.instance.AddNewBlock ();
					}
				}
			}
		}
	}
	public void AddNewBlock () 
	{
		Object obj = (Instantiate (prefab, posLastCube, Quaternion.identity));
		Transform tran = (Transform)obj;
		tran.Rotate (0, 90, 0);
		posLastCube.z += 4.2f;
		tran.position = posLastCube;
        for (int n = 0; n < 2; n++)
        {
            int i = Random.Range(0, 2);
            i = 0;
            if (i == 0)
            {
                Transform treetemp = null;
                int j = Random.Range(0, 4);
                treetemp = (Transform)(Instantiate(tree[j], posLastCube, Quaternion.identity));

                if (j == 0)
                {
                    treetemp.Translate(0, -2.4f, 0, Space.World);
                    treetemp.Rotate(90, 90, 0);
                }
                else
                    treetemp.Rotate(270, 0, 0);

                if(n == 0)
                {
                    treetemp.Translate(treePosLeft.position.x, 0, 0,Space.World);
                }
                else
                    treetemp.Translate(-treePosLeft.position.x, 0, 0, Space.World);
                treetemp.parent = tran;
                //		Debug.Log (Mathf.Sin (45));
            }
        }
		objectQueue.Enqueue (tran);
		//iTween.MoveFrom(tran.gameObject,iTween.Hash("y",tran.position.y + 4 ,"time",0.1,"delay",0));
	}
	public void RemoveBlock () 
	{
		Transform o = objectQueue.Dequeue();
		if(o != null && o.gameObject != null)
		GameObject.Destroy (o.gameObject);

	}
	public void RemoveBlockEffect() 
	{
		Transform o = objectQueue.Dequeue();
		if(o != null && o.gameObject != null)
			myCompletedFunction (o.gameObject);
		//iTween.MoveTo(o.gameObject,iTween.Hash("y",o.position.y - 6 ,"time",3,"delay",0.1,"oncomplete","myCompletedFunction","oncompletetarget",this.gameObject,"oncompleteparams",o.gameObject));
		
	}

	public void myCompletedFunction(GameObject o)
	{
//		Debug.Log ("rrrrrrrrrrrrr");
		GameObject.Destroy(o);
	}

	
	private void GameStartInitPlatform() {
		for(int i = 0; i < numberOfObjects; i++){
		//	RemoveBlock();
		//	AddNewBlock();//Recycle();
		}
		//enabled = true;
	}
	private void restart()
	{


		//Debug.Log (GUIManager.state);
		for(int i = 0; i < objectQueue.Count; i++){
				RemoveBlock();
			i--;
		}
		posStar = cubeBegin.transform.position;
		posLastCube = cubeBegin.transform.position;

		for (int i = 0; i < numberOfObjects; i++) {
			AddNewBlock();
		}
	}

	private void GameOver () {
		//enabled = false;
	}
}