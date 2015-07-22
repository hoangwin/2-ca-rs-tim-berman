using UnityEngine;
using System.Collections;

public class CameraFllow : MonoBehaviour {
	public GameObject target;
    
    public float anggle = 0;	
	public float yOffset = 0;
	public float zOffset = 0;

    public float anggle3D = 0;
    
    public float yOffset3D = 0;
    public float zOffset3D = 0;

    public float anggle2D = 0;
    
    public float yOffset2D = 0;
    public float zOffset2D = 0;
	
    Vector3 velocity = Vector3.zero;
	Vector3 destination;
    public float offsetDestroy = 0;
    public float offsetDestroy3D = 0;
    public float offsetDestroy2D = 0;
    public bool is3D;
    public static CameraFllow instance;
	// Use this for initialization
	void Start () {
		destination = target.transform.position;
        instance = this;
	}
	
	// Update is called once per frame
	void q11Update () {
	
	}

	
	void Update() {
		//if (Runner.instance.misGrounded)
		{
			destination = new Vector3 (0,
		                                      target.transform.position.y + yOffset,
			                           target.transform.position.z + zOffset);
			transform.position = Vector3.SmoothDamp (transform.position, destination, ref velocity, 0.2f);
		}
	}
    public void setCameraDirection(bool _is3D)
    {
        is3D = _is3D;
        if(is3D)
        {
            anggle = anggle3D;
            yOffset = yOffset3D;
            zOffset = zOffset3D;
            offsetDestroy = offsetDestroy3D;
        }
        else
        {
            anggle = anggle2D;
            yOffset = yOffset2D;
            zOffset = zOffset2D;
            offsetDestroy = offsetDestroy2D;
        }
        transform.localEulerAngles = new Vector3(anggle, 0, 0);
    }



}
