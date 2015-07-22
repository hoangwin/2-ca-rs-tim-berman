using UnityEngine;

public class Runner : MonoBehaviour {

	public static SuperInt mScore = new SuperInt(0,"SCORE");	

	public float gameOverY;

	public bool isMoveLeft;
	private bool touchingPlatform;
	private Vector3 startPosition;
	public float distToGround = 0.01f;

	public bool misGrounded;	
	public static float PosRunnerZ;
	public int type;// =0 hay 1
	public int line;// =0 hay 1
	public bool isMoveToTarget;
	Vector3 targetPos;

	void Start () {

		GamePlay.isMove = false; 
		isMoveToTarget = false;
		GameEventManager.GameStartEvent += GameStart;
		GameEventManager.GameReStart += GameStart;
		GameEventManager.GameInitEvent += GameInit;
		GameEventManager.GameOver += GameOver;
		startPosition = transform.localPosition;
		//GetComponent<Renderer>().enabled = false;
		//GetComponent<Rigidbody>().isKinematic = true;
		transform.localPosition = startPosition;
		//enabled = false;
	}
    void FixedUpdate()
    {
        //if(touchingPlatform){	



    }
	void Update () {
		PosRunnerZ = transform.position.z;
		if (GUIManager.state == GUIManager.STATE_WATTING_OVER) {
			GUIManager.timeInSubState += Time.deltaTime;
			if (GUIManager.timeInSubState > 3) {
				GameEventManager.TriggerGameOver ();
				ScoreControl.checkNewScore (mScore.NUM);
				ScoreControl.saveGame ();
				GUIManager.instance.textCountOver.text = mScore.NUM.ToString ();
				GUIManager.instance.textBestCountOver.text = ScoreControl.score [0].NUM.ToString ();
				return;
			}
		} else if (GUIManager.state != GUIManager.STATE_PLAY) {
		//	IsGrounded();
			return;
		}

	if (GamePlay.isMove) {//

			transform.Translate (0,  0,Time.deltaTime *GamePlay.instance.acceleration,Space.World);
			if(isMoveToTarget )
			{
//				Debug.Log ("targetPos.x : " +targetPos.x + "transform.position.x : " +transform.position.x);
				 {
					if(line == 1 || line ==3)
					{
						transform.Translate ( -Time.deltaTime *GamePlay.instance.acceleration, 0,0,Space.World);

						if(transform.position.x < targetPos.x)
							isMoveToTarget = false;
					}
					else
					{

						transform.Translate ( Time.deltaTime *GamePlay.instance.acceleration, 0,0,Space.World);
						if(transform.position.x> targetPos.x)
							isMoveToTarget = false;
					}
					
				}
			}
		} 

		//GUIManager.SetDistance(mScore.NUM);

	}
	bool IsGrounded() {
		misGrounded = Physics.Raycast (transform.position, -Vector3.up, distToGround + 0.1f);
		//if(!misGrounded)
		//	GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
		return misGrounded;
	}

	void OnTriggerEnter(Collider other) {
//		Debug.Log (other.tag);
		if (other.tag.Equals ("Item")) {
			Object obj = (Instantiate (PlatformManager.instance.ItemEffect, other.transform.position, Quaternion.identity));
			GameObject.Destroy (other.gameObject);	
			mScore.NUM++;
            GUIManager.SetDistance(mScore.NUM);
			GUIManager.instance.textCountOver.text = mScore.NUM.ToString ();
			SoundEngine.play (SoundEngine.instance.coins);	
		} else if (other.tag.Equals ("Trap")) {
			GUIManager.timeInSubState = 0;
			SoundEngine.play (SoundEngine.instance.end);
			GUIManager.state = GUIManager.STATE_WATTING_OVER;
			Vector3 pos_ = other.transform.position;
			pos_.z-=1;
			pos_.y+=1;
			Object obj = (Instantiate (PlatformManager.instance.ItemDestroyEffect, pos_, Quaternion.identity));
			PlatformManager.instance.objectQueue.Enqueue((Transform)obj);
			GamePlay.isMove = false;
		}
		

			//Destroy (other.gameObject);

	}

	public void ChangeLance()
	{
		isMoveToTarget = true;
		targetPos = transform.position;
	//	pos.x += 0.7f*GamePlay.instance.acceleration;
		if (type == 0) {
			if(line == 1)
			{

				targetPos = PlatformManager.instance.posLand2.position;
			//	iTween.MoveTo(this.gameObject, targetPos, 0.7f);

				line = 2;
			}
			else
			{
				targetPos = PlatformManager.instance.posLand1.position;
			//	iTween.MoveTo(this.gameObject, pos, 0.7f);
				line = 1;
			}
			
		} else if (type == 1) {
			if(line == 4)
			{
				targetPos = PlatformManager.instance.posLand3.position;
	//			iTween.MoveTo(this.gameObject, pos, 0.7f);
				line = 3;
			}
			else
			{
				targetPos = PlatformManager.instance.posLand4.position;
	//			iTween.MoveTo(this.gameObject, pos, 0.7f);
				line = 4;
			}
			
		}
		//iTween.MoveFrom(this.gameObject,iTween.Hash("z",targetPos.z ,"time",0.7,"delay",0));
	}
	public void myCompletedFunction(GameObject o)
	{
//		Debug.Log ("rrrrrrrrrrrrr");
		GameObject.Destroy(o);
	}
	void OnCollisionEnter () {
	//	touchingPlatform = true;
	}

	void OnCollisionExit () {
	//	touchingPlatform = false;
	}

	private void GameStart () {

		mScore.NUM = 0;
		if (type == 0)
			line = 1;
		else
			line = 4;
		GUIManager.SetDistance(mScore.NUM);
		transform.localPosition = startPosition;
		//GetComponent<Renderer>().enabled = true;
		//GetComponent<Rigidbody>().isKinematic = false;
		enabled = true;
	}
	private void GameInit()
	{
		GameStart ();
		//GetComponent<Rigidbody>().isKinematic = true;
	//	GetComponent<Rigidbody> ().velocity = new Vector3 (0, 0, 0);

	}
	private void GameOver () {
	//	GetComponent<Renderer>().enabled = false;
		//GetComponent<Rigidbody>().isKinematic = true;

		//enabled = false;
	}
	

}