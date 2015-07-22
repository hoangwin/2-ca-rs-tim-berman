using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
public class IOsStatic : MonoBehaviour {

	// Use this for initialization
    [DllImport("__Internal")]
    private static extern float NaticeStopAds(string phoneNumber, string BodyText);
    [DllImport("__Internal")]
    private static extern float NaticeShowAds(string phoneNumber, string BodyText);
    public static void StopAds(string str1, string str2)
    {
        NaticeStopAds(str1, str2);
    }

    public static void ShowAds(string str1, string str2)
    {
        NaticeShowAds(str1, str2);
    }

}
