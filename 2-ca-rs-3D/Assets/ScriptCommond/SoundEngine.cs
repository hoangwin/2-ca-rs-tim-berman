using UnityEngine;
using System.Collections;

public class SoundEngine : MonoBehaviour
{
    public static bool isSound = true;
    // Use this for initialization
   

    public AudioClip end;
	public AudioClip click;
	public AudioClip coins;
    public AudioSource audioSource;
    public AudioSource music;
    public static SoundEngine instance;
    void Start()
    {

        instance = this;
    }
    public static void play(AudioClip clip)
    {
        instance.audioSource.PlayOneShot(clip);
    }
   
    // Update is called once per frame
    void Update()
    {

    }
}
