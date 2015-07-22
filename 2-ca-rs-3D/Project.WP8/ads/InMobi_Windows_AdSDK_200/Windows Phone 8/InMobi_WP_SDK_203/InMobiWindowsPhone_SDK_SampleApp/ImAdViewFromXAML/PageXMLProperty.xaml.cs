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

namespace ImAdViewFromXAML
{
    public partial class PageXMLProperty : PhoneApplicationPage
    {
        public PageXMLProperty()
        {
            InitializeComponent();
        }
 
        //Invoked when an exception is raised from IMAdView
        private void AdView1_AdRequestFailed(object IMAdView, InMobi.WP.AdSDK.IMAdViewErrorEventArgs e)
        {
            System.Diagnostics.Debug.WriteLine(e.ErrorCode.ToString() + e.ErrorDescription.ToString());
        }

        //Invoked when Ad is loaded
        private void AdView1_AdRequestLoaded(object IMAdView, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Ad Request Loaded.");
        }

        //Invoked when full screen Ad displayed is closed
        private void AdView1_DismissFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Full screen closed");
        }

        //Invoked when the navigating away from current page as Click To Action on IMAdView 
        private void AdView1_LeaveApplication(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Moving out of application");
        }

        //Invoked when the full screen ad has been opened, but not yet fully loaded
        private void AdView1_ShowFullAdScreen(object sender, EventArgs e)
        {
            System.Diagnostics.Debug.WriteLine("Displaying full screen");
        }
    }
}