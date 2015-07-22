using UnityEngine;
using System.Collections;

public class Car : MonoBehaviour {
	public int type;
	public int line;
	Vector3 pos;
	// Use this for initialization
	public float screenX_step;
	void Start () {
		init ();
	}
	public void init()
	{
		float lSizeY = Camera.main.orthographicSize * 2.0f;
		screenX_step = lSizeY * Camera.main.aspect/4;
		if (type == 0) {
			line = 1;
			transform.position = new Vector3 (- 3 * screenX_step / 2, transform.position.y, transform.position.z);
		} else if (type == 1) {
			line = 4;
			transform.position = new Vector3 (3 * screenX_step / 2, transform.position.y, transform.position.z);
		}
		pos = transform.position;
	}
	public void ChangeLance()
	{

		if (type == 0) {
			if(line == 1)
			{
				pos.x = - 1 * screenX_step / 2;
					iTween.MoveTo(this.gameObject, pos, 0.7f);
				line =2;
			}
			else
			{
				pos.x = - 3 * screenX_step / 2;
				iTween.MoveTo(this.gameObject, pos, 0.7f);
				line = 1;
			}

		} else if (type == 1) {
			if(line == 4)
			{
				pos.x = 1 * screenX_step / 2;
				iTween.MoveTo(this.gameObject, pos, 0.7f);
				line =3;
			}
			else
			{
				pos.x = 3 * screenX_step / 2;
				iTween.MoveTo(this.gameObject, pos, 0.7f);
				line =4;
			}
			
		}
	}
	// Update is called once per frame
	void Update () {
	
	}

}
