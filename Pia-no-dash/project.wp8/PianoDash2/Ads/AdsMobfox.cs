using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;
using System.Windows;
using MobFox.Ads;
namespace BanTrungKhungLong.Ads
{
    class AdsMobfox
    {
       
       public static MobFox.Ads.AdControl adview;
       public static bool isAdsLoadOK = false;
       public static void ShowMobfoxAds(DrawingSurfaceBackgroundGrid DrawingSurfaceBackground)
       {
           if (adview == null)
           {
               adview = new MobFox.Ads.AdControl();
               // adview.Name = "mobFoxadControl";
               adview.NewAd += mobFoxadControl_NewAd;
               adview.NoAd += noAdsMobfox;
               adview.PublisherID = AdsManager.STR_PUBLISH_ID_MOBFOX;
               adview.VerticalAlignment = VerticalAlignment.Bottom;
               // adview.TestMode = true;           
               DrawingSurfaceBackground.Children.Add(adview);
           }
       }
        
       public static void noAdsMobfox(object sender, MobFox.Ads.NoAdEventArgs args)//khi khong ok. Listerner
       {
           isAdsLoadOK = false;
           AdsManager.showAds(AdsManager.DrawingSurfaceBackground, AdsManager.INDEX_INNER_ACTIVE);
           
       }
       
       public static  void mobFoxadControl_NewAd(object sender, MobFox.Ads.NewAdEventArgs args)
       {
           isAdsLoadOK = true;
           AdsManager.ChooseDisplayAds();
       }

       public static void enableDisplayAds(bool isdisplay)
       {
           if (adview == null)
               return;
           if (isdisplay)
           {
              adview.Visibility = Visibility.Visible;
              adview.IsEnabled = true;
           }
           else
           {
              adview.Visibility = Visibility.Collapsed;
              adview.IsEnabled = false;
           }
       }
    }
}
