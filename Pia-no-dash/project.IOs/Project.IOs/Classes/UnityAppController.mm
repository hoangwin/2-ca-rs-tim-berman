#import "UnityAppController.h"
#import "UnityAppController+ViewHandling.h"
#import "UnityAppController+Rendering.h"
#import "iPhone_Sensors.h"

#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/CADisplayLink.h>
#import <Availability.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

#include <mach/mach_time.h>

// MSAA_DEFAULT_SAMPLE_COUNT was moved to iPhone_GlesSupport.h
// ENABLE_INTERNAL_PROFILER and related defines were moved to iPhone_Profiler.h
// kFPS define for removed: you can use Application.targetFrameRate (30 fps by default)
// DisplayLink is the only run loop mode now - all others were removed

#include "CrashReporter.h"

#include "UI/OrientationSupport.h"
#include "UI/UnityView.h"
#include "UI/Keyboard.h"
#include "UI/SplashScreen.h"
#include "Unity/InternalProfiler.h"
#include "Unity/DisplayManager.h"
#include "Unity/EAGLContextHelper.h"
#include "Unity/GlesHelper.h"
#include "PluginBase/AppDelegateListener.h"
#import "GoogleMobileAds/GADBannerView.h"//here
#import "iAd/ADBannerView.h"

// ios version determination
bool	_ios42orNewer			= false;
bool	_ios43orNewer			= false;
bool	_ios50orNewer			= false;
bool	_ios60orNewer			= false;
bool	_ios70orNewer			= false;
bool	_ios80orNewer			= false;
bool	_ios81orNewer			= false;
bool	_ios82orNewer			= false;

// was unity rendering already inited: we should not touch rendering while this is false
bool	_renderingInited		= false;
// was unity inited: we should not touch unity api while this is false
bool	_unityAppReady			= false;
// should we skip present on next draw: used in corner cases (like rotation) to fill both draw-buffers with some content
bool	_skipPresent			= false;
// was app "resigned active": some operations do not make sense while app is in background
bool	_didResignActive		= false;

// was startUnity scheduled: used to make startup robust in case of locking device
static bool	_startUnityScheduled	= false;

bool	_supportsMSAA			= false;


@implementation UnityAppController
@synthesize bannerView_;//here
@synthesize bannerIsVisible ;
@synthesize interstitial_;
@synthesize iAdBannerView;
@synthesize isShowAdmob;

@synthesize unityView				= _unityView;
@synthesize unityDisplayLink		= _unityDisplayLink;

@synthesize rootView				= _rootView;
@synthesize rootViewController		= _rootController;
@synthesize mainDisplay				= _mainDisplay;
@synthesize renderDelegate			= _renderDelegate;

@synthesize interfaceOrientation	= _curOrientation;

- (id)init
{
	if( (self = [super init]) )
	{
		// due to clang issues with generating warning for overriding deprecated methods
		// we will simply assert if deprecated methods are present
		// NB: methods table is initied at load (before this call), so it is ok to check for override
		NSAssert(![self respondsToSelector:@selector(createUnityViewImpl)],
			@"createUnityViewImpl is deprecated and will not be called. Override createUnityView"
		);
		NSAssert(![self respondsToSelector:@selector(createViewHierarchyImpl)],
			@"createViewHierarchyImpl is deprecated and will not be called. Override willStartWithViewController"
		);
		NSAssert(![self respondsToSelector:@selector(createViewHierarchy)],
			@"createViewHierarchy is deprecated and will not be implemented. Use createUI"
		);
	}
	return self;
}


- (void)setWindow:(id)object		{}
- (UIWindow*)window					{ return _window; }


- (void)shouldAttachRenderDelegate	{}
- (void)preStartUnity				{}



//admob
- (void)adView:(GADBannerView *)bannerView didFailToReceiveAdWithError:(GADRequestError *)error {
   // NSLog("aA","aa");//(@”aa”);
    int i=0;
    i++;
}


//iad
- (void)bannerViewActionDidFinish:(ADBannerView *)banner{
    NSLog(@"bannerview was selected");
}

- (BOOL)bannerViewActionShouldBegin:(ADBannerView *)banner willLeaveApplication:(BOOL)willLeave
{
    return willLeave;
}

- (void)bannerViewDidLoadAd:(ADBannerView *)baner
{
    if (!self.bannerIsVisible)
    {
        NSLog(@"\nBanner Success");
        [UIView beginAnimations:@"animateAdBannerOn" context:NULL];
        // assumes the banner view is offset 50 pixels so that it is not visible.
        
        baner.frame = CGRectOffset(baner.frame,0,-94);
        [UIView commitAnimations];
        
        self.bannerIsVisible = YES;
    }
}

- (void)bannerView:(ADBannerView *)baner didFailToReceiveAdWithError:(NSError *)error
{
        if (!self.isShowAdmob)
        {
           isShowAdmob = true;
           [self showAdmob];//here
            
        }

    if (self.bannerIsVisible)
    {
        NSLog(@"\nBanner Failed");
        [UIView beginAnimations:@"animateAdBannerOff" context:NULL];
        
        baner.frame = CGRectOffset(baner.frame, 0, 94);
        [UIView commitAnimations];
        
        self.bannerIsVisible = NO;
    }
}
//- (void)bannerView:(ADBannerView *)baner interstitialDidReceiveAd:(NSError *)error
- (void)interstitialDidReceiveAd:(GADInterstitial *)interstitial
{
    [interstitial_ presentFromRootViewController:_rootController];
    
  //      self.bannerIsVisible = NO;
  
}
- (void)interstitial:(GADInterstitial *)interstitial didFailToReceiveAdWithError:(GADRequestError *)error{
    
}

//banner : ca-app-pub-7342700401302892/4468600167
// full : ca-app-pub-7342700401302892/2628816565
-(void) showAdmob
{    
    bannerView_ = [[GADBannerView alloc] initWithAdSize:kGADAdSizeBanner];//here
    bannerView_.adUnitID = @"xxxxxxxx";//admob caogiaqn
    // Let the runtime know which UIViewController to restore after taking
    // the user wherever the ad goes and add it to the view hierarchy.
    bannerView_.rootViewController = _rootController;
    [_rootView addSubview:bannerView_];
    [bannerView_ setFrame:CGRectMake(_rootView.bounds.size.width - bannerView_.bounds.size.width,  _rootView.bounds.size.height -  bannerView_.bounds.size.height,  bannerView_.bounds.size.width,bannerView_.bounds.size.height)];
    // Initiate a generic request to load it with an ad.
    [bannerView_ setDelegate:self];
    [bannerView_ loadRequest:[GADRequest request]];
}
-(void) showAdmobFullAds
{
    interstitial_ = [[GADInterstitial alloc] init];
    interstitial_.adUnitID = @"ca-app-pub-7342700401302892/1498001361";

    [interstitial_ setDelegate:self];
   // interstitial_.delegate = self;
    [interstitial_ loadRequest:[GADRequest request]];
}
- (void) showiAd
{
    // Specify the ad unit ID.
    iAdBannerView = [[ADBannerView alloc] initWithFrame:CGRectZero];
    [iAdBannerView setFrame:CGRectMake(_rootView.bounds.size.width - iAdBannerView.bounds.size.width,  _rootView.bounds.size.height -  iAdBannerView.bounds.size.height,  iAdBannerView.bounds.size.width,bannerView_.bounds.size.height)];
    [iAdBannerView setAutoresizingMask:UIViewAutoresizingFlexibleHeight];
    [iAdBannerView setDelegate:self];
    [self.unityView addSubview:iAdBannerView];
    //dich chuyen truoc
    [UIView beginAnimations:@"animateAdBannerOff" context:NULL];
    iAdBannerView.frame = CGRectOffset(iAdBannerView.frame, 0, 94);
    [UIView commitAnimations];
    bannerIsVisible = false;
    
    isShowAdmob = false;//here
}
extern "C" {//here
    
	void NaticeShowAdsBanner (const char* phoneNumber, const char* bodyText)// chua dung vi dung thang trong 
	{

        //[GetAppController() OpenSMS];
      //  [GetAppController() showAdmobFullAds];
		//NSLog(@"Your message here end");
	}
		void NaticeShowAds(const char* phoneNumber, const char* bodyText)
	{

        //[GetAppController() OpenSMS];
        [GetAppController() showAdmobFullAds];
		NSLog(@"Your message here end");
	}
    void NaticeStopAds (const char* phoneNumber, const char* bodyText)
	{
        
    }
    
}

- (void)Open_SMS:(NSString *)phoneNumber second:(NSString *)bodyText
{
   
}
- (void)startUnity:(UIApplication*)application
{
	NSAssert(_unityAppReady == NO, @"[UnityAppController startUnity:] called after Unity has been initialized");

	UnityInitApplicationGraphics();

	// we make sure that first level gets correct display list and orientation
	[[DisplayManager Instance] updateDisplayListInUnity];

	UnityLoadApplication();
	Profiler_InitProfiler();

	[self showGameUI];
//rem here for banner	[self showiAd];//here
//	[self showAdmob];//here
	[self createDisplayLink];

	UnitySetPlayerFocus(1);
}

- (NSUInteger)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window
{
	// UIInterfaceOrientationMaskAll
	// it is the safest way of doing it:
	// - GameCenter and some other services might have portrait-only variant
	//     and will throw exception if portrait is not supported here
	// - When you change allowed orientations if you end up forbidding current one
	//     exception will be thrown
	// Anyway this is intersected with values provided from UIViewController, so we are good
	return   (1 << UIInterfaceOrientationPortrait) | (1 << UIInterfaceOrientationPortraitUpsideDown)
		   | (1 << UIInterfaceOrientationLandscapeRight) | (1 << UIInterfaceOrientationLandscapeLeft);
}

- (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification
{
	AppController_SendNotificationWithArg(kUnityDidReceiveLocalNotification, notification);
	UnitySendLocalNotification(notification);
}

- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
	AppController_SendNotificationWithArg(kUnityDidReceiveRemoteNotification, userInfo);
	UnitySendRemoteNotification(userInfo);
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
	AppController_SendNotificationWithArg(kUnityDidRegisterForRemoteNotificationsWithDeviceToken, deviceToken);
	UnitySendDeviceToken(deviceToken);
}

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
	AppController_SendNotificationWithArg(kUnityDidFailToRegisterForRemoteNotificationsWithError, error);
	UnitySendRemoteNotificationError(error);
}

- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation
{
	NSMutableArray* keys	= [NSMutableArray arrayWithCapacity:3];
	NSMutableArray* values	= [NSMutableArray arrayWithCapacity:3];

	#define ADD_ITEM(item)	do{ if(item) {[keys addObject:@#item]; [values addObject:item];} }while(0)

	ADD_ITEM(url);
	ADD_ITEM(sourceApplication);
	ADD_ITEM(annotation);

	#undef ADD_ITEM

	NSDictionary* notifData = [NSDictionary dictionaryWithObjects:values forKeys:keys];
	AppController_SendNotificationWithArg(kUnityOnOpenURL, notifData);
	return YES;
}

-(BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
	return YES;
}

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
	::printf("-> applicationDidFinishLaunching()\n");

	// send notfications
	if(UILocalNotification* notification = [launchOptions objectForKey:UIApplicationLaunchOptionsLocalNotificationKey])
		UnitySendLocalNotification(notification);

	if(NSDictionary* notification = [launchOptions objectForKey:UIApplicationLaunchOptionsRemoteNotificationKey])
		UnitySendRemoteNotification(notification);

	if ([UIDevice currentDevice].generatesDeviceOrientationNotifications == NO)
		[[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];

	UnityInitApplicationNoGraphics([[[NSBundle mainBundle] bundlePath] UTF8String]);

	[self selectRenderingAPI];
	[UnityRenderingView InitializeForAPI:self.renderingAPI];

	_window			= [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
	_unityView		= [self createUnityView];

	[DisplayManager Initialize];
	_mainDisplay	= [DisplayManager Instance].mainDisplay;
	[_mainDisplay createWithWindow:_window andView:_unityView];

	[self createUI];
	[self preStartUnity];

	// if you wont use keyboard you may comment it out at save some memory
	[KeyboardDelegate Initialize];

	return YES;
}

- (void)applicationDidEnterBackground:(UIApplication*)application
{
	::printf("-> applicationDidEnterBackground()\n");
}

- (void)applicationWillEnterForeground:(UIApplication*)application
{
	::printf("-> applicationWillEnterForeground()\n");

	// applicationWillEnterForeground: might sometimes arrive *before* actually initing unity (e.g. locking on startup)
	if(_unityAppReady)
	{
		// if we were showing video before going to background - the view size may be changed while we are in background
		[GetAppController().unityView recreateGLESSurfaceIfNeeded];
	}
}

- (void)applicationDidBecomeActive:(UIApplication*)application
{
	::printf("-> applicationDidBecomeActive()\n");

	if(_snapshotView)
	{
		[_snapshotView removeFromSuperview];
		_snapshotView = nil;
		[_window bringSubviewToFront:_rootView];
	}

	if(_unityAppReady)
	{
		if(UnityIsPaused())
		{
			UnityPause(0);
			UnityWillResume();
		}
		UnitySetPlayerFocus(1);
	}
	else if(!_startUnityScheduled)
	{
		_startUnityScheduled = true;
		[self performSelector:@selector(startUnity:) withObject:application afterDelay:0];
	}

	_didResignActive = false;
}

- (void)applicationWillResignActive:(UIApplication*)application
{
	::printf("-> applicationWillResignActive()\n");

	if(_unityAppReady)
	{
		UnityOnApplicationWillResignActive();
		UnitySetPlayerFocus(0);

		// do pause unity only if we dont need special background processing
		// otherwise batched player loop can be called to run user scripts
		int bgBehavior = UnityGetAppBackgroundBehavior();
		if(bgBehavior == appbgSuspend || bgBehavior == appbgExit)
		{
			// Force player to do one more frame, so scripts get a chance to render custom screen for minimized app in task manager.
			// NB: UnityWillPause will schedule OnApplicationPause message, which will be sent normally inside repaint (unity player loop)
			// NB: We will actually pause after the loop (when calling UnityPause).
			UnityWillPause();
			[self repaint];
			UnityPause(1);

			_snapshotView = [self createSnapshotView];
			if(_snapshotView)
			{
				[_window addSubview:_snapshotView];
				[_window bringSubviewToFront:_snapshotView];
			}
		}
	}

	_didResignActive = true;
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
	::printf("WARNING -> applicationDidReceiveMemoryWarning()\n");
}

- (void)applicationWillTerminate:(UIApplication*)application
{
	::printf("-> applicationWillTerminate()\n");

	Profiler_UninitProfiler();
	UnityCleanup();

	extern void SensorsCleanup();
	SensorsCleanup();
   bannerView_.delegate = nil;    
    // Don't release the bannerView_ if you are using ARC in your project
//    [bannerView_ release];
}

@end


void AppController_SendNotification(NSString* name)
{
	[[NSNotificationCenter defaultCenter] postNotificationName:name object:GetAppController()];
}
void AppController_SendNotificationWithArg(NSString* name, id arg)
{
	[[NSNotificationCenter defaultCenter] postNotificationName:name object:GetAppController() userInfo:arg];
}
void AppController_SendUnityViewControllerNotification(NSString* name)
{
	[[NSNotificationCenter defaultCenter] postNotificationName:name object:UnityGetGLViewController()];
}

extern "C" UIWindow*			UnityGetMainWindow()		{ return GetAppController().mainDisplay.window; }
extern "C" UIViewController*	UnityGetGLViewController()	{ return GetAppController().rootViewController; }
extern "C" UIView*				UnityGetGLView()			{ return GetAppController().unityView; }
extern "C" ScreenOrientation	UnityCurrentOrientation()	{ return GetAppController().unityView.contentOrientation; }



bool LogToNSLogHandler(LogType logType, const char* log, va_list list)
{
	NSLogv([NSString stringWithUTF8String:log], list);
	return true;
}

void UnityInitTrampoline()
{
#if ENABLE_CRASH_REPORT_SUBMISSION
	SubmitCrashReportsAsync();
#endif
	InitCrashHandling();

	NSString* version = [[UIDevice currentDevice] systemVersion];

	// keep native plugin developers happy and keep old bools around
	_ios42orNewer = true;
	_ios43orNewer = true;
	_ios50orNewer = true;
	_ios60orNewer = true;
	_ios70orNewer = [version compare: @"7.0" options: NSNumericSearch] != NSOrderedAscending;
	_ios80orNewer = [version compare: @"8.0" options: NSNumericSearch] != NSOrderedAscending;
	_ios81orNewer = [version compare: @"8.1" options: NSNumericSearch] != NSOrderedAscending;
	_ios82orNewer = [version compare: @"8.2" options: NSNumericSearch] != NSOrderedAscending;

	// Try writing to console and if it fails switch to NSLog logging
	::fprintf(stdout, "\n");
	if(::ftell(stdout) < 0)
		UnitySetLogEntryHandler(LogToNSLogHandler);

	UnityInitJoysticks();
}
