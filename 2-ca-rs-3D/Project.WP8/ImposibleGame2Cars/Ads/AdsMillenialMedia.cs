/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MillennialMedia.WP7.SDK;
using System.Windows.Controls;
using System.Windows;
namespace DefaultPackageName.Ads
{
    class AdsMillenialMedia
    {        
        public static MMBannerAdView mmAdView = null;
        public static bool isFistLoaded = false;
        public static bool isAdsLoadOK = false;
        public static void ShowMillenialMedia(DrawingSurfaceBackgroundGrid DrawingSurfaceBackground)
        {
            isFistLoaded = true;
            //MMSDK.DEFAULT_APID;
            //<mmi:MMBannerAdView x:Name="mmAdView" Height="60" Width="480" VerticalAlignment ="Bottom" />   
            mmAdView.GetAd(AdsManager.STR_PUBLISH_ID_MILLENIAL_MEDIA);
            mmAdView.RefreshApid = AdsManager.STR_PUBLISH_ID_MILLENIAL_MEDIA;
            mmAdView.RefreshTimer = 40;
            MMSDK.MMAdEvents += mmSdkOnMmAdEvents;            
        }
     

        public static void mmSdkOnMmAdEvents(object sender, MMEventArgs e)
        {
            if (e.Type == MMEventType.OverlayOpened)
            {

            }
            else if (e.Type == MMEventType.OverlayClosed)
            {

            }
            else if (e.Type == MMEventType.TaskStarted)
            {
            }
            else if (e.Type == MMEventType.GetAdSuccess)
            {
                isAdsLoadOK = true;
                AdsManager.ChooseDisplayAds();
            }
            else if (e.Type == MMEventType.GetAdFailure)
            {
                isAdsLoadOK = false;
                
              //  AdsManager.getRequestNextAds(AdsManager.INDEX_INNER_ACTIVE);
                
            }
            else if (e.Type == MMEventType.DisplayStarted)
            {
            }
            else if (e.Type == MMEventType.FetchStartedCaching)
            {


            }
            else if (e.Type == MMEventType.FetchFinishedCaching)
            {

            }
        }
        public static void enableDisplayAds(bool isdisplay)
        {
            if (mmAdView == null)
                return;
            if (isdisplay)
            {
                mmAdView.Visibility = Visibility.Visible;
                mmAdView.IsEnabled = true;
            }
            else
            {
                mmAdView.Visibility = Visibility.Collapsed;
                mmAdView.IsEnabled = false;
            }
        }
    }
}
*/