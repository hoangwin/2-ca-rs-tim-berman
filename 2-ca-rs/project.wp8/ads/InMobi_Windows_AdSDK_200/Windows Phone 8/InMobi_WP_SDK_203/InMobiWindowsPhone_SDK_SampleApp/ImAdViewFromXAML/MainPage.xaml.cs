using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using Microsoft.Phone.Controls;
using InMobi.WP.AdSDK;

namespace ImAdViewFromXAML
{
    public partial class MainPage : PhoneApplicationPage
    {
        // Constructor
        public MainPage()
        {
            InitializeComponent();
            
            //Set  the Loglevel to Debug, to get the maximum debug information. 
            //Before submitting live either dont use any loglevel or set it to LogLevels.IMLogLevelNone
            SDKUtility.LogLevel = LogLevels.IMLogLevelDebug;

            IMAdRequest adRequest = new IMAdRequest();
            
             AdView.RefreshInterval = -1; 
            AdView.AnimationType = IMAdAnimationType.FLIP_FROM_LEFT;
            //Set the IMAdRequest 
            AdView.IMAdRequest = adRequest;
        }

        //Invoked when an exception is raised from IMAdView
        private void AdView_AdRequestFailed(object IMAdView, IMAdViewErrorEventArgs e)
        {
            System.Diagnostics.Debug.WriteLine(e.ErrorCode.ToString() + e.ErrorDescription.ToString());
        }

        //Invoked when Ad is loaded
        private void AdView_AdRequestLoaded(object IMAdView, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Ad Request Loaded");
        }

        //Invoked when AD view loaded
        private void AdView_Loaded(object sender, RoutedEventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("AD view loaded");
        }

        //Invoked when the  move away from page containing IMAdView
        private void AdView_Unloaded(object sender, RoutedEventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("AD view Unloaded");
        }

        //Invoked when full screen Ad displayed is closed
        private void AdView_DismissFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Full screen closed");
        }

        //Invoked when navigating out of application as Click To Action on IMAdView 
        private void AdView_LeaveApplication(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Moving out of application");
        }

        //Invoked when the full screen Ad has been opened
        private void AdView_ShowFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Displaying full screen");
        }

        //Move to page where IMAdView is configured in XAML
        private void btnxaml_Click(object sender, RoutedEventArgs e)
        {
            NavigationService.Navigate(new Uri("/PageXMLProperty.xaml", UriKind.Relative));
        }

        private void btnLoadAd_Click_1(object sender, RoutedEventArgs e)
        {
            AdView.LoadNewAd();
        }

        private void btnIntAd_Click(object sender, RoutedEventArgs e)
        {
            NavigationService.Navigate(new Uri("/InterstitialAd.xaml", UriKind.Relative));
        }
    }
}