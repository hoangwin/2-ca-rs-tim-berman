using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;
using System.Windows;
using InMobi.WP.AdSDK;
namespace BanTrungKhungLong.Ads
{
    public class AdsInmobi
    {
        public static IMAdView AdView = null;
        public static bool isAdsLoadOK = false;
        public static void ShowInmobi(DrawingSurfaceBackgroundGrid DrawingSurfaceBackground)
        {
            //SDKUtility.LogLevel = LogLevels.IMLogLevelDebug;
           // SDKUtility.LogLevel = LogLevels.IMLogLevelDebug;
            if (AdView == null)
            {
                AdView = new IMAdView();           
                AdView.AdSize = IMAdView.INMOBI_AD_UNIT_468x60;
                //Subscribe for IMAdView events
                AdView.OnAdRequestFailed += AdView_AdRequestFailed;
                AdView.OnAdRequestLoaded += AdView_AdRequestLoaded;
                AdView.OnDismissAdScreen += new EventHandler(AdView_DismissFullAdScreen);
                AdView.OnLeaveApplication += new EventHandler(AdView_LeaveApplication);
                AdView.OnShowAdScreen += new EventHandler(AdView_ShowFullAdScreen);
                AdView.VerticalAlignment = VerticalAlignment.Bottom;
                //Set the AppId. Provide you AppId
                AdView.AppId = AdsManager.STR_PUBLISH_ID_INMOBI;
                AdView.RefreshInterval = 20;
                AdView.AnimationType = IMAdAnimationType.SLIDE_IN_LEFT;
                IMAdRequest imAdRequest = new IMAdRequest();
                AdView.LoadNewAd(imAdRequest);
                //Add IMAdView to Container
                DrawingSurfaceBackground.Children.Add(AdView);
            }

        }

        public static void AdView_AdRequestFailed(object sender, IMAdViewErrorEventArgs e)
        {
            isAdsLoadOK = false;
            AdsManager.showAds(AdsManager.DrawingSurfaceBackground, AdsManager.INDEX_MOBFOX);
            System.Diagnostics.Debug.WriteLine(e.ErrorCode.ToString() + e.ErrorDescription.ToString());
        }

        public static void AdView_AdRequestLoaded(object sender, EventArgs e)
        {
            isAdsLoadOK = true;
            AdsManager.ChooseDisplayAds();
        }

        public static void enableDisplayAds(bool isdisplay)
        {
            if (AdView == null)
                return;
            if (isdisplay)
            {
                AdView.Visibility = Visibility.Visible;
                AdView.IsEnabled = true;
            }
            else
            {
                AdView.Visibility = Visibility.Collapsed;
                AdView.IsEnabled = false;
            }
        }
        //Invoked when the full screen Ad has been opened
        public static void AdView_ShowFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Displaying full screen");
        }

        //Invoked when navigating out of application as Click To Action on IMAdView 
        public static void AdView_LeaveApplication(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Moving out of application");
        }

        //Invoked when full screen Ad displayed is closed
        public static void AdView_DismissFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Full screen closed");
        }
    }
}
