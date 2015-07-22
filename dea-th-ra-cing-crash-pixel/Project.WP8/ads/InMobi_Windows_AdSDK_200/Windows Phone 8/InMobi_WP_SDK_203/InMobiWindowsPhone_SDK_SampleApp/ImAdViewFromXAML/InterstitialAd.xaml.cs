using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Navigation;
using Microsoft.Phone.Controls;
using Microsoft.Phone.Shell;
using InMobi.WP.AdSDK;

namespace ImAdViewFromXAML
{
    public partial class InterstitialAd : PhoneApplicationPage
    {
        IMAdInterstitial interstitial = new IMAdInterstitial("YOUR_APP_ID");
        IMAdRequest req = new IMAdRequest();

        public InterstitialAd()
        {
            InitializeComponent();
            interstitial.OnAdRequestLoaded += interstitial_AdRequestLoaded;
            interstitial.OnShowAdScreen += interstitial_ShowFullAdScreen;
            interstitial.OnDismissAdScreen += interstitial_DismissFullAdScreen;
            interstitial.OnLeaveApplication += interstitial_LeaveApplication;
            interstitial.OnAdRequestFailed += interstitial_AdRequestFailed;
        }

        private void interstitial_AdRequestFailed(object sender, IMAdInterstitialErrorEventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Ad Request Failed:" + e.ErrorDescription);
        }

        private void interstitial_DismissFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Dismiss Fullscreen");
        }

        private void interstitial_ShowFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Show Full Screen");
        }

        private void interstitial_AdRequestLoaded(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Interstitial Ad Loaded");
            (sender as IMAdInterstitial).ShowAd();
        }

        private void btnLoadIntAd_Click_1(object sender, RoutedEventArgs e)
        {
            SDKUtility.LogLevel = LogLevels.IMLogLevelDebug;

             interstitial.LoadNewAd(req);

        }

        void interstitial_LeaveApplication(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Leave Application");

        }

        private void btnBack_Click(object sender, RoutedEventArgs e)
        {
            NavigationService.GoBack();
        }
    }
}