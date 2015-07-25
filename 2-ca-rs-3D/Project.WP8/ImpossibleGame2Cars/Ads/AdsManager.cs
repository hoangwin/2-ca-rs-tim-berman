using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
//using MillennialMedia.WP7.SDK;
namespace BanTrungKhungLong
{
    class AdsManager
    {
        public static DrawingSurfaceBackgroundGrid DrawingSurfaceBackground;
        //publish ID
        public static string STR_PUBLISH_ID_INMOBI = "dd6f9f1ad4654d5a942adc05ae4fa254";//mobilepuzzle&gmail
        public static string STR_PUBLISH_ID_MOBFOX = "87a931cf05017531dd87b5cc1d8a7b03";//HOANG.NGUYENMAU@HOTMAIL        
        

        //public static string STR_PUBLISH_ID_MILLENIAL_MEDIA = "140736";//HOANG.NGUYENMAU@HOTMAIL
        public static string STR_PUBLISH_ID_INNER_ACTIVE = "LavaGame_BanTrungKhungLong_WP";//HOANG.NGUYENMAU@HOTMAIL

        public const int INDEX_INMOBI = 0;
        public const int INDEX_MOBFOX = 1;
        public const int INDEX_INNER_ACTIVE = 2;        
        //public const int INDEX_MILLENIAL_MEDIA = 2;
        
        
        public static int mcurrentIndexShow = -1;

        
        public static void showAds(DrawingSurfaceBackgroundGrid _DrawingSurfaceBackground,int index)
        {
            DrawingSurfaceBackground = _DrawingSurfaceBackground;            
            switch (index)
            {
                case INDEX_INMOBI:
                    Ads.AdsInmobi.ShowInmobi(_DrawingSurfaceBackground);
                    break;
                case INDEX_MOBFOX:
                    Ads.AdsMobfox.ShowMobfoxAds(_DrawingSurfaceBackground);
                    break;
                
                case INDEX_INNER_ACTIVE:
                    Ads.AdsInnerActive.ShowInnerActive(_DrawingSurfaceBackground);
                    break;
              //  case INDEX_MILLENIAL_MEDIA:
               //     Ads.AdsMillenialMedia.ShowMillenialMedia(_DrawingSurfaceBackground);
               //     break;
            }
        }
      

        public static void ChooseDisplayAds()
        {
          if(Ads.AdsInmobi.isAdsLoadOK)
           {
                  Ads.AdsMobfox.enableDisplayAds(false);
                 // Ads.AdsMillenialMedia.enableDisplayAds(false);
                  Ads.AdsInmobi.enableDisplayAds(true);
                  Ads.AdsInnerActive.enableDisplayAds(false);
           }
          else if(Ads.AdsMobfox.isAdsLoadOK)
           {
                  Ads.AdsMobfox.enableDisplayAds(true);
               //   Ads.AdsMillenialMedia.enableDisplayAds(false);
                  Ads.AdsInmobi.enableDisplayAds(false);
                  Ads.AdsInnerActive.enableDisplayAds(false);
           }
           else if(Ads.AdsInnerActive.isAdsLoadOK)
           {
                  Ads.AdsMobfox.enableDisplayAds(false);
                //  Ads.AdsMillenialMedia.enableDisplayAds(false);
                  Ads.AdsInmobi.enableDisplayAds(false);
                  Ads.AdsInnerActive.enableDisplayAds(true);
           }
         /*
         else if (Ads.AdsMillenialMedia.isAdsLoadOK)
         {
             Ads.AdsMobfox.enableDisplayAds(false);
             Ads.AdsMillenialMedia.enableDisplayAds(true);
             Ads.AdsInmobi.enableDisplayAds(false);
             Ads.AdsInnerActive.enableDisplayAds(false);
         }*/
        }

      /*  public static void init(MMBannerAdView _mmAdView)
        {
            Ads.AdsMillenialMedia.mmAdView = _mmAdView;


        }*/
    }
}
