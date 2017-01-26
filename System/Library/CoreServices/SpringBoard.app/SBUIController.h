/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <UIKit/UIWindowDelegate.h>

@class SBHomeScreenWindow, SBIconContentView, UIView, UIStatusBar, SBDismissOnlyAlertItem, SBAppSwitcherSettings, SBScrunchSystemGestureRecognizer, SBScrunchAppsSystemGestureWorkspaceTransaction, SBSwitcherSlideUpSystemGestureRecognizer, SBSwitcherForcePressSystemGestureRecognizer, SBSwitchAppSystemGestureWorkspaceTransaction, SBSwitchAppSystemGestureRecognizer, SBSwitchAppList, NSCountedSet, NSString;

@interface SBUIController : NSObject <SBWallpaperObserver, _UISettingsKeyObserver, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, UIWindowDelegate> {

	SBHomeScreenWindow* _window;
	SBIconContentView* _iconsView;
	UIView* _contentView;
	UIStatusBar* _fakeSpringBoardStatusBar;
	unsigned _ignoringEvents : 1;
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isOnAC : 1;
	unsigned _isConnectedToExternalChargingAccessory : 1;
	unsigned _isConnectedToUnsupportedChargingAccessory : 1;
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
	id _volumeHandler;
	float _batteryCapacity;
	BOOL _supportsDetailedBatteryCapacity;
	int _batteryLoggingStartCapacity;
	SBDismissOnlyAlertItem* _unsupportedChargerAlert;
	SBAppSwitcherSettings* _switcherSettings;
	SBScrunchSystemGestureRecognizer* _scrunchSystemGestureRecognizer;
	SBScrunchAppsSystemGestureWorkspaceTransaction* _scrunchAppsTransaction;
	SBSwitcherSlideUpSystemGestureRecognizer* _switcherSlideUpGestureRecognizer;
	SBSwitcherForcePressSystemGestureRecognizer* _switcherForcePressRecognizer;
	SBSwitchAppSystemGestureWorkspaceTransaction* _switchAppTransaction;
	SBSwitchAppSystemGestureRecognizer* _switchAppSystemGestureRecognizer;
	SBSwitchAppList* _switchAppList;
	long long _ignoreSwitchAppListClearRequests;
	BOOL _handlingHomePress;
	NSCountedSet* _contentRequiringReasons;
	BOOL _wasTornDownWhenBeganRequiring;

}

@property (assign,nonatomic) BOOL wasTornDownWhenBeganRequiring;              //@synthesize wasTornDownWhenBeganRequiring=_wasTornDownWhenBeganRequiring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)zoomViewForApplication:(id)arg1 screen:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(BOOL)arg7 ;
+(id)zoomViewForContextHostView:(id)arg1 application:(id)arg2 sceneID:(id)arg3 statusBarDescriptor:(id)arg4 ;
+(id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(long long)arg3 statusBarDescriptor:(id)arg4 imageName:(id)arg5 decodeImage:(BOOL)arg6 ;
+(id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(long long)arg3 statusBarDescriptor:(id)arg4 decodeImage:(BOOL)arg5 ;
+(id)zoomViewWithIOSurfaceSnapshotOfApp:(id)arg1 sceneID:(id)arg2 screen:(id)arg3 statusBarDescriptor:(id)arg4 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(BOOL)arg4 ;
+(void)addStatusBarToView:(id)arg1 withSize:(CGSize)arg2 destinationFrame:(CGRect)arg3 interfaceOrientation:(long long)arg4 scaleFactor:(double)arg5 styleRequest:(id)arg6 statusBarDescriptor:(id)arg7 hidden:(BOOL)arg8 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 remainderFrame:(CGRect*)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(BOOL)arg5 ;
+(CGRect)_referenceBoundsForApp:(id)arg1 ;
+(id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 application:(id)arg2 ;
+(id)_splashboardLaunchImageForApplication:(id)arg1 sceneID:(id)arg2 display:(id)arg3 interfaceOrientation:(long long)arg4 referenceSize:(CGSize)arg5 ;
+(CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2 ;
+(CGAffineTransform)_transformAndFrame:(CGRect*)arg1 forLaunchImageContextHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(CGRect)arg4 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)isAppSwitcherShowing;
-(void)updateBatteryState:(id)arg1 ;
-(BOOL)handleMenuDoubleTap;
-(void)cancelVolumeEvent;
-(BOOL)clickedMenuButton;
-(void)handleVolumeEvent:(IOHIDEventRef)arg1 ;
-(BOOL)isOnAC;
-(void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2 ;
-(id)_legibilityPrototypeSettings;
-(void)noteStatusBarHeightChanged:(id)arg1 ;
-(void)_awayControllerActivated:(id)arg1 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)externalChargingAccessoriesChanged;
-(void)_addRemoveSwitcherGesture;
-(void)_handleScrunchGesture:(id)arg1 ;
-(void)_handleSwitcherSlideUpGesture:(id)arg1 ;
-(void)_handleSwitchAppGesture:(id)arg1 ;
-(void)_deviceLockStateChanged:(id)arg1 ;
-(void)_updateLegibility;
-(void)_handleSwitcherForcePressGesture:(id)arg1 ;
-(void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1 ;
-(void)removeFakeSpringBoardStatusBar;
-(BOOL)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1 ;
-(void)setFakeSpringBoardStatusBarVisible:(BOOL)arg1 ;
-(id)_fakeSpringBoardStatusBar;
-(id)alertItemForPreventingLaunchOfApp:(id)arg1 ;
-(void)stopRestoringIconList;
-(void)activateApplication:(id)arg1 ;
-(void)restoreContentUpdatingStatusBar:(BOOL)arg1 ;
-(void)setWasTornDownWhenBeganRequiring:(BOOL)arg1 ;
-(void)_closeOpenFolderIfNecessary;
-(void)updateStatusBarLegibility;
-(void)_switchToHomeScreenWallpaperAnimated:(BOOL)arg1 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)restoreContent;
-(BOOL)_isIconListAndBarTornDown;
-(BOOL)wasTornDownWhenBeganRequiring;
-(void)tearDownIconListAndBar;
-(int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
-(BOOL)_handleButtonEventToSuspendDisplays:(BOOL)arg1 displayWasSuspendedOut:(BOOL*)arg2 ;
-(void)_resumeEventsIfNecessary;
-(int)batteryCapacityAsPercentage;
-(void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg1 ;
-(void)ACPowerChanged;
-(void)_possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1 ;
-(void)forceIconInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)disableAnimationForNextIconRotation;
-(void)_scrunchGestureBegan;
-(BOOL)_ignoringEvents;
-(id)_switchAppList;
-(void)_switchAppGestureBegan:(double)arg1 ;
-(BOOL)_switchAppSystemGestureShouldBegin:(id)arg1 ;
-(BOOL)_isIgnoringSwitchAppListClearRequests;
-(void)_endIgnoringSwitchAppListClearRequests;
-(void)_beginIgnoringSwitchAppListClearRequests;
-(void)_programmaticSwitchAppToApp:(id)arg1 reverseAnimation:(BOOL)arg2 ;
-(BOOL)_scrunchSystemGestureShouldBegin:(id)arg1 ;
-(BOOL)_appSwitcherSystemGestureShouldBegin:(id)arg1 ;
-(BOOL)_appSwitcherForcePressSystemGestureShouldBegin:(id)arg1 ;
-(id)_currentFolderLegibilitySettings;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(BOOL)promptUnlockForAppActivation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1 ;
-(id)fakeStatusBarStyleRequestForStyle:(long long)arg1 ;
-(void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2 ;
-(void)launchIcon:(id)arg1 fromLocation:(int)arg2 context:(id)arg3 ;
-(void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(int)arg3 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 ;
-(void)beginRequiringContentForReason:(id)arg1 ;
-(void)endRequiringContentForReason:(id)arg1 ;
-(BOOL)isHandlingHomeButtonPress;
-(void)_accessibilityWillBeginAppSwitcherRevealAnimation;
-(BOOL)_allowSwitcherGesture;
-(void)_ignoreEvents;
-(void)requestApplicationEventsEnabledIfNecessary;
-(float)batteryCapacity;
-(BOOL)isBatteryCharging;
-(BOOL)isConnectedToExternalChargingSource;
-(BOOL)isConnectedToChargeIncapablePowerSource;
-(BOOL)isConnectedToUnsupportedChargingAccessory;
-(BOOL)supportsDetailedBatteryCapacity;
-(BOOL)isHeadsetDocked;
-(BOOL)isHeadsetBatteryCharging;
-(unsigned char)headsetBatteryCapacity;
-(void)clearSwitchAppList;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)dealloc;
-(id)window;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)contentView;
-(void)getRotationContentSettings:(SCD_Struct_SB6*)arg1 forWindow:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_setHidden:(BOOL)arg1 ;
-(id)_legibilitySettings;
-(void)_hideKeyboard;
-(void)transactionDidComplete:(id)arg1 ;
@end

