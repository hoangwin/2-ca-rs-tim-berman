using UnityEngine;
using System.Collections;

public class GamePlay : MonoBehaviour
{
    public Transform carLeft;
    public Transform carRight;
    public static bool isMove;
    public float acceleration;
    // Use this for initialization
    Vector3 fingerPos;
    bool isTouch;
    public static GamePlay instance;

    void Start()
    {
        instance = this;
        GamePlay.isMove = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (GUIManager.state == GUIManager.STATE_PLAY)
        {
            if (Input.GetMouseButtonDown(0))
            {
                if (!GamePlay.isMove)
                {
                    GamePlay.isMove = true;
                    return;
                }
                SoundEngine.play(SoundEngine.instance.click);
                isTouch = true;
                fingerPos = Input.mousePosition;
                if (isTouch)
                {


                    if (fingerPos.x < (Screen.width / 2))
                    {
                        carLeft.gameObject.GetComponent<Runner>().ChangeLance();
                        //				    Debug.Log("1 :" + fingerPos);
                    }
                    else
                    {
                        carRight.gameObject.GetComponent<Runner>().ChangeLance();
                        //				Debug.Log("2 :" + fingerPos);
                    }

                    isTouch = false;

                }
            }
else
{
	for(int i =0;i<Input.touchCount;i++)
			{
				if( Input.GetTouch(i).phase == TouchPhase.Began) {
				if (!GamePlay.isMove)
				{
					GamePlay.isMove = true;
					return;
				}
				SoundEngine.play(SoundEngine.instance.click);
				isTouch = true;
					fingerPos = Input.GetTouch(i).position;
			}
            
                   
                    if (isTouch)
                    {
                        if (fingerPos.x < (Screen.width / 2))
                        {
                            carLeft.gameObject.GetComponent<Runner>().ChangeLance();
                            //				    Debug.Log("1 :" + fingerPos);
                        }
                        else
                        {
                            carRight.gameObject.GetComponent<Runner>().ChangeLance();
                            //				Debug.Log("2 :" + fingerPos);
                        }

                        isTouch = false;

                    }
                }
            }

        }
    }
	}

