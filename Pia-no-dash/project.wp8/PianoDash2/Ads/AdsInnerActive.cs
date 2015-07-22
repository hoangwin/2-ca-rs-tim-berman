using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;
using System.Windows;
using Inneractive.Ad;
namespace BanTrungKhungLong.Ads
{
    class AdsInnerActive
    {
        public static InneractiveAd iaBanner = null;
        public static bool isAdsLoadOK = false;
        public static void ShowInnerActive(DrawingSurfaceBackgroundGrid DrawingSurfaceBackground)
        {
            string AppID =AdsManager.STR_PUBLISH_ID_INNER_ACTIVE;
            Dictionary<InneractiveAd.IaOptionalParams, string> optionalParams = new Dictionary<InneractiveAd.IaOptionalParams, string>();
            optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Ad_Alignment, InneractiveAd.IaAdAlignment.BOTTOM_CENTER.ToString());
            optionalParams.Add(InneractiveAd.IaOptionalParams.Key_OptionalAdWidth, "480");
            optionalParams.Add(InneractiveAd.IaOptionalParams.Key_OptionalAdHeight, "50");
            iaBanner = new InneractiveAd(AppID, InneractiveAd.IaAdType.IaAdType_Banner, 60, optionalParams);         
            iaBanner.AdReceived += new InneractiveAd.IaAdReceived(InneractiveAd_AdReceived);
            
            iaBanner.AdFailed += new InneractiveAd.IaAdFailed(InneractiveAd_AdFailed);
            iaBanner.DefaultAdReceived += new InneractiveAd.IaDefaultAdReceived(InneractiveAd_DefaultAdReceived);
            iaBanner.AdClicked += new InneractiveAd.IaAdClicked(InneractiveAd_AdClicked);
            DrawingSurfaceBackground.Children.Add(iaBanner);
        }
        public static  void InneractiveAd_AdReceived(object sender)
        {
            isAdsLoadOK = true;
            AdsManager.ChooseDisplayAds();
           System.Diagnostics.Debug.WriteLine("InneractiveAd: AdReceived");
        }


        public static void InneractiveAd_AdFailed(object sender)
        {
            isAdsLoadOK = false;
            
           // AdsManager.getRequestNextAds(AdsManager.INDEX_INNER_ACTIVE);
           //System.Diagnostics.Debug.WriteLine("InneractiveAd: AdFailed");
        }

        public static void InneractiveAd_DefaultAdReceived(object sender)
        {
            isAdsLoadOK = true;
            AdsManager.ChooseDisplayAds();
         //   System.Diagnostics.Debug.WriteLine("InneractiveAd: DefaultAdReceived");
        }
        public static void enableDisplayAds(bool isdisplay)
        {
            if (iaBanner == null)
                return;
            if (isdisplay)
            {
                iaBanner.Visibility = Visibility.Visible;
                iaBanner.IsEnabled = true;
            }
            else
            {
                iaBanner.Visibility = Visibility.Collapsed;
                iaBanner.IsEnabled = false;
            }
        }
        static void InneractiveAd_AdClicked (object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd: AdClicked");
        }        
    }
}
