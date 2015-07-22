using UnityEngine;
using System.Collections;

public class SoundEngine : MonoBehaviour
{
    public static bool isSound = true;
    // Use this for initialization
    public AudioClip[] clips;

    public AudioClip end;
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
    public static void play(int index)
    {
       // if (index > 27 )
       // index = 2;
       // if(index<2)
       //     index =2;
        index = index%(Music.music.Length-1);
        instance.audioSource.PlayOneShot(instance.clips[Music.music[index]]);
    }
    // Update is called once per frame
    void Update()
    {

    }
}
