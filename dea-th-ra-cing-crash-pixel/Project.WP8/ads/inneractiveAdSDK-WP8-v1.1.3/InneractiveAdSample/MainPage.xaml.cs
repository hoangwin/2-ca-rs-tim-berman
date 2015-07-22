using System.Windows;
using Microsoft.Phone.Controls;
using System.Collections.Generic;
using Inneractive.Ad;
using InneractiveAdLocation;
using System.Windows.Controls;
using System;

namespace InneractiveAdSample
{
    class GridOccupance
    {
        public Grid Grid;
        public bool Occupied;

        public GridOccupance(Grid Grid)
        {
            this.Grid = Grid;
            this.Occupied = false;
        }
    }

    public partial class MainPage : PhoneApplicationPage
    {
        Dictionary<InneractiveAd.IaOptionalParams, string> optionalParams;
        GridOccupance[] grids = new GridOccupance[2];

        /// <summary>
        /// Constructor
        /// </summary>
        public MainPage()
        {
            InitializeComponent();

            // Watch location
            IaLocationClass iaLocation = new IaLocationClass();
            iaLocation.Done += new System.EventHandler<IaLocationEventArgs>(iaLocation_Done);
            iaLocation.StartWatchLocation();

            // Add grids
            grids[0] = new GridOccupance(Grid0);
            grids[1] = new GridOccupance(Grid1);

            //When using the xaml constructor you may choose to add event handlers
            //If you do not have an xaml constructor with 'InneractiveXamlAd' as its name parameter, be sure to comment the following lines
            //InneractiveAd xamlAd = (InneractiveAd)this.FindName("InneractiveXamlAd");
            //xamlAd.AdReceived += new InneractiveAd.IaAdReceived(InneractiveAd_AdReceived);
            //xamlAd.AdFailed += new InneractiveAd.IaAdFailed(InneractiveAd_AdFailed);
            //xamlAd.DefaultAdReceived += new InneractiveAd.IaDefaultAdReceived(InneractiveAd_DefaultAdReceived);
            //xamlAd.AdClicked += new InneractiveAd.IaAdClicked(InneractiveAd_AdClicked);

            /**
              * Optional parameters:
              * Age - User’s age
              * Gender - User’s gender (allowed values: M, m, F, f, Male, Female)
              * Keywords - Keywords relevant to this user’s specific session (comma separated)
              * Ad alignment - Alignment of the ad within the grid
              * Optional size - optional ad size
              * Required size - required ad size
              */
            optionalParams = new Dictionary<InneractiveAd.IaOptionalParams, string>();
            try
            {
                optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Age, "25");
                optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Gender, "m");
                optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Keywords, "test,inneractive");
                optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Ad_Alignment, InneractiveAd.IaAdAlignment.CENTER.ToString());
                optionalParams.Add(InneractiveAd.IaOptionalParams.Key_OptionalAdWidth, "320");
                optionalParams.Add(InneractiveAd.IaOptionalParams.Key_OptionalAdHeight, "53");
                //optionalParams.Add(InneractiveAd.IaOptionalParams.Key_RequiredAdWidth, "320");
                //optionalParams.Add(InneractiveAd.IaOptionalParams.Key_RequiredAdHeight, "53");

                // Location hard coded values, for example:
                // optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Gps_Coordinates, "53.5422,-2.2396");
                // optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Location, "US,NY,NY");
            }
            catch
            {
                System.Diagnostics.Debug.WriteLine("InneractiveAd: Dictionary error - Make sure there is only one value per key");
            }
        }

        void iaLocation_Done(object sender, IaLocationEventArgs e)
        {
            try
            {
                // Add location, if received
                if (e != null && e.location != null)
                    optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Gps_Coordinates, e.location);
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.WriteLine("InneractiveAd: Error: " + ex.ToString());
            }
        }

        void InneractiveAd_AdReceived(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd: AdReceived");
        }

        void InneractiveAd_DefaultAdReceived(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd: DefaultAdReceived");
        }

        void InneractiveAd_AdFailed(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd: AdFailed");
        }

        void InneractiveAd_AdClicked(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd: AdClicked");
        }

        private void Text_Click(object sender, RoutedEventArgs e)
        {
            // Display text ad in the TextAdGrid
            // In order to maximize your revenues, we recommend allowing the application usage only if the returned value is true:
            // PAY ATTENTION:   DisplayAd() checks for connectivity, first of all,
            //                  but GetIsNetworkAvailable() always returns true at the emulator
            //if (!InneractiveAd.DisplayAd("MyCompany_MyApp", InneractiveAd.IaAdType.IaAdType_Text, GetGrid(), 60, optionalParams))
            //{
            //   MessageBox.Show("This application is free but requires an internet connection. Please configure your connectivity settings and re-try.");
            //    //NavigationService.GoBack();
            //}

            // When using the DisplayAd method you may choose to send event handlers, so you may catch the ad's events
            IaAdEventHandlers eventHandlers = new MyIaAdEventHandlers();
            if (!InneractiveAd.DisplayAd("MyCompany_MyApp", InneractiveAd.IaAdType.IaAdType_Text, GetGrid(), 60, optionalParams, eventHandlers))
            {
                MessageBox.Show("This application is free but requires an internet connection. Please configure your connectivity settings and re-try.");
                //NavigationService.GoBack();
            }
        }

        private void Banner_Click(object sender, RoutedEventArgs e)
        {
            // Initialize banner ad and add it to the BannerAdGrid by yourself
            // In order to maximize your revenues, we recommend allowing the application usage only if the returned value is true:
            // PAY ATTENTION:   DisplayAd() checks for connectivity, first of all,
            //                  but GetIsNetworkAvailable() always returns true at the emulator
            InneractiveAd iaBanner = new InneractiveAd("MyCompany_MyApp", InneractiveAd.IaAdType.IaAdType_Banner, 60, optionalParams);

            // Add event listeners to the InneractiveAd
            iaBanner.AdReceived += new InneractiveAd.IaAdReceived(InneractiveAd_AdReceived);
            iaBanner.AdFailed += new InneractiveAd.IaAdFailed(InneractiveAd_AdFailed);
            iaBanner.DefaultAdReceived += new InneractiveAd.IaDefaultAdReceived(InneractiveAd_DefaultAdReceived);
            iaBanner.AdClicked += new InneractiveAd.IaAdClicked(InneractiveAd_AdClicked);

            // Add the banner to the grid
            (GetGrid()).Children.Add(iaBanner);
        }

        /// <summary>
        /// Interstitial_Click
        /// </summary>
        private void Interstitial_Click(object sender, RoutedEventArgs e)
        {
            // Display interstitial ad using the static DisplayAd method
            // In order to maximize your revenues, we recommend allowing the application usage only if the returned value is true:
            // PAY ATTENTION:   DisplayAd() checks for connectivity, first of all,
            //                  but GetIsNetworkAvailable() always returns true at the emulator
            if (!InneractiveAd.DisplayAd("MyCompany_MyApp", InneractiveAd.IaAdType.IaAdType_Interstitial, LayoutRoot, 0))
            {
                MessageBox.Show("This application is free but requires an internet connection. Please configure your connectivity settings and re-try.");
                //NavigationService.GoBack();
            }
        }

        private Grid GetGrid()
        {
            Grid returnGrid = null;
            foreach (GridOccupance grid in grids)
            {
                if (!grid.Occupied)
                {
                    returnGrid = grid.Grid;
                    grid.Occupied = true;
                    break;
                }
            }
            if (returnGrid == null)
            {
                foreach (GridOccupance grid in grids)
                {
                    grid.Occupied = false;
                }
                returnGrid = grids[0].Grid;
                grids[0].Occupied = true;
            }
            return returnGrid;
        }
    }

    class MyIaAdEventHandlers : IaAdEventHandlers
    {
        public override void AdFailedEventHandler(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd.DisplayAd: AdFailed");
        }

        public override void AdReceivedEventHandler(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd.DisplayAd: AdReceived");
        }

        public override void DefaultAdReceivedEventHandler(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd.DisplayAd: DefaultAdReceived");
        }

        public override void AdClickedEventHandler(object sender)
        {
            System.Diagnostics.Debug.WriteLine("InneractiveAd.DisplayAd: AdClicked");
        }

        public MyIaAdEventHandlers()
        {
        }
    }
}