using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO.IsolatedStorage;
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
using Windows.Foundation;
using Windows.Devices.Geolocation;

using UnityApp = UnityPlayer.UnityApp;
using UnityBridge = WinRTBridge.WinRTBridge;
using vservWindowsPhone;
using Inneractive.Ad;
//
namespace SquishyBirds
{
	public partial class MainPage : PhoneApplicationPage
	{
		private bool _unityStartedLoading;
		private bool _useLocation;
        VservAdControl VMB = VservAdControl.Instance;
		// Constructor
		public MainPage()
		{
			var bridge = new UnityBridge();
			UnityApp.SetBridge(bridge);
			InitializeComponent();
			bridge.Control = DrawingSurfaceBackground;         
            //if (adGrid != null)
            //    adGrid.Visibility = Visibility.Visible;
            //VAB.RenderAd("20846", adGrid);
          //  Grid gird = new Grid();
          //  gird.Height = 100;
            VMB.RenderAd("e9b1dfc8", adGridVserv);
              VMB.VservAdClosed += new EventHandler(VACCallback_OnVservAdClosing);
            VMB.VservAdError += new EventHandler(VACCallback_OnVservAdNetworkError);
            VMB.VservAdNoFill += new EventHandler(VACCallback_OnVservAdNoFill);
       
           // VMB.DisplayAd("20846", DrawingSurfaceBackground); 
		}

		private void DrawingSurfaceBackground_Loaded(object sender, RoutedEventArgs e)
		{
			if (!_unityStartedLoading)
			{
				_unityStartedLoading = true;

				UnityApp.SetLoadedCallback(() => { Dispatcher.BeginInvoke(Unity_Loaded); });

				var content = Application.Current.Host.Content;
				var width = (int)Math.Floor(content.ActualWidth * content.ScaleFactor / 100.0 + 0.5);
				var height = (int)Math.Floor(content.ActualHeight * content.ScaleFactor / 100.0 + 0.5);

				UnityApp.SetNativeResolution(width, height);
				UnityApp.SetRenderResolution(width, height);
				UnityPlayer.UnityApp.SetOrientation((int)Orientation);

				DrawingSurfaceBackground.SetBackgroundContentProvider(UnityApp.GetBackgroundContentProvider());
				DrawingSurfaceBackground.SetBackgroundManipulationHandler(UnityApp.GetManipulationHandler());
			}           
		}

		private void Unity_Loaded()
		{
			SetupGeolocator();
		}

		private void PhoneApplicationPage_BackKeyPress(object sender, CancelEventArgs e)
		{
			e.Cancel = UnityApp.BackButtonPressed();
		}

		private void PhoneApplicationPage_OrientationChanged(object sender, OrientationChangedEventArgs e)
		{
			UnityApp.SetOrientation((int)e.Orientation);
		}

		protected override void OnNavigatedTo(System.Windows.Navigation.NavigationEventArgs e)
        {
            base.OnNavigatedTo(e);

            if (!UnityApp.IsLocationEnabled())
                return;
            if (IsolatedStorageSettings.ApplicationSettings.Contains("LocationConsent"))
                _useLocation = (bool)IsolatedStorageSettings.ApplicationSettings["LocationConsent"];
            else
            {
                MessageBoxResult result = MessageBox.Show("Can this application use your location?",
                    "Location Services", MessageBoxButton.OKCancel);
                _useLocation = result == MessageBoxResult.OK;
                IsolatedStorageSettings.ApplicationSettings["LocationConsent"] = _useLocation;
                IsolatedStorageSettings.ApplicationSettings.Save();
            }
        }

		private void SetupGeolocator()
        {
            if (!_useLocation)
                return;

            try
            {
				UnityApp.EnableLocationService(true);
                Geolocator geolocator = new Geolocator();
				geolocator.ReportInterval = 5000;
                IAsyncOperation<Geoposition> op = geolocator.GetGeopositionAsync();
                op.Completed += (asyncInfo, asyncStatus) =>
                    {
                        if (asyncStatus == AsyncStatus.Completed)
                        {
                            Geoposition geoposition = asyncInfo.GetResults();
                            UnityApp.SetupGeolocator(geolocator, geoposition);
                        }
                        else
                            UnityApp.SetupGeolocator(null, null);
                    };
            }
            catch (Exception)
            {
                UnityApp.SetupGeolocator(null, null);
            }
        }
       
        void VACCallback_OnVservAdClosing(object sender, EventArgs e)
        {
          //  MessageBox.Show("Ad Closed by user", "Interstitial Ad", MessageBoxButton.OKCancel);
           
            
        }
        void VACCallback_OnVservAdNetworkError(object sender, EventArgs e)
        {
          //  MessageBox.Show("Data connection not available", "No Data", MessageBoxButton.OKCancel);
        }
        Boolean isCallInnerActive = false;
        void VACCallback_OnVservAdNoFill(object sender, EventArgs e)
        {
          //  MessageBox.Show("No Ad Available", "No Fill", MessageBoxButton.OKCancel);
            if (!isCallInnerActive)
            {
                isCallInnerActive = true;
                Dictionary<InneractiveAd.IaOptionalParams, string> optionalParams;
                optionalParams = new Dictionary<InneractiveAd.IaOptionalParams, string>();
                try
                {
                    // optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Age, "25");
                    // optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Gender, "m");
                    adGridVserv.Visibility = Visibility.Collapsed;
                    optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Keywords, "test,inneractive");
                    optionalParams.Add(InneractiveAd.IaOptionalParams.Key_Ad_Alignment, InneractiveAd.IaAdAlignment.CENTER.ToString());
                    optionalParams.Add(InneractiveAd.IaOptionalParams.Key_OptionalAdWidth, "320");
                    optionalParams.Add(InneractiveAd.IaOptionalParams.Key_OptionalAdHeight, "53");
                    InneractiveAd.DisplayAd("LavaGame_SquishyBirds_WP", InneractiveAd.IaAdType.IaAdType_Banner, adGridInnerActive, 60, optionalParams);
                }
                catch
                {
                    System.Diagnostics.Debug.WriteLine("InneractiveAd: Dictionary error - Make sure there is only one value per key");
                }
            }
          //  if (adGrid != null)
           //     adGrid.Visibility = Visibility.Collapsed;
        }
	}
}