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

namespace ImAdViewFromCode
{
    public partial class MainPage : PhoneApplicationPage
    {
        // Constructor
        public MainPage()
        {
            InitializeComponent();
            CreateAd();
            
        }
        //Create the Ad at runtime and add to the container
        private void CreateAd()
        {
            SDKUtility.LogLevel = LogLevels.IMLogLevelDebug;
            
            IMAdView AdView = new IMAdView();
            
            AdView.AdSize = IMAdView.INMOBI_AD_UNIT_320X50;
           
            //Subscribe for IMAdView events
            AdView.OnAdRequestFailed += AdView_AdRequestFailed;
            AdView.OnAdRequestLoaded += AdView_AdRequestLoaded;
            AdView.OnDismissAdScreen += new EventHandler(AdView_DismissFullAdScreen);
            AdView.OnLeaveApplication += new EventHandler(AdView_LeaveApplication);
            AdView.OnShowAdScreen += new EventHandler(AdView_ShowFullAdScreen);

            
            //Set the AppId. Provide you AppId
            AdView.AppId = "YOUR_APP_ID";
            AdView.RefreshInterval = 20;
            AdView.AnimationType = IMAdAnimationType.SLIDE_IN_LEFT;
            IMAdRequest imAdRequest = new IMAdRequest();
            
            
            
            AdView.LoadNewAd(imAdRequest);

            //Add IMAdView to Container
            stackContainer.Children.Add(AdView);
            
        }

        void AdView_AdRequestFailed(object sender, IMAdViewErrorEventArgs e)
        {
            System.Diagnostics.Debug.WriteLine(e.ErrorCode.ToString() + e.ErrorDescription.ToString());
        }

        void AdView_AdRequestLoaded(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Ad request loaded.");
        }

        //Invoked when the full screen Ad has been opened
        void AdView_ShowFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Displaying full screen");
        }

        //Invoked when navigating out of application as Click To Action on IMAdView 
        void AdView_LeaveApplication(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Moving out of application");
        }

        //Invoked when full screen Ad displayed is closed
        void AdView_DismissFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Full screen closed");
        }



       


    }
}