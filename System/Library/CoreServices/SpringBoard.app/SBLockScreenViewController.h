/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenViewControllerBase.h>
#import <SpringBoard/SBLockScreenViewDelegate.h>
#import <SpringBoard/SBLockScreenTimerViewControllerDelegate.h>
#import <SpringBoard/SBLockScreenNotificationListDelegate.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate_Internal.h>
#import <SpringBoard/SBLockScreenBatteryChargingViewControllerDelegate.h>
#import <SpringBoard/SBLockScreenInfoOverlayDelegate.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBLockScreenPluginControllerDelegate.h>
#import <SpringBoard/SBLockScreenSlideUpToAppControllerDelegate.h>
#import <SpringBoard/SBLockScreenLogoutButtonViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperViewDelegate.h>

@class SBLockScreenDeviceBlockViewController, SBLockScreenDateViewController, SBLockScreenStatusTextViewController, SBLockScreenTimerViewController, SBLockScreenNotificationListController, SBLockScreenSlideUpToAppController, MPUSystemMediaControlsViewController, SBLockScreenLogoutButtonViewController, SBLockScreenDeviceInformationTextViewController, SBUserSessionController, SBLockScreenModalAlertViewController, SBLockScreenBatteryChargingViewController, SBLockScreenPluginController, SBLockScreenNowPlayingPluginController, SBLockScreenBuddyViewController, SBLockOverlayContext, NSMutableArray, SBLockScreenFullscreenBulletinViewController, SBLockScreenInfoOverlayViewController, SBLockScreenTemperatureWarningViewController, SBLockScreenResetRestoreViewController, SBLockScreenPasscodeOverlayViewController, SBLockScreenUserPictureViewController, SBLockScreenEmergencyCallViewController, SBLockScreenActionContext, SBLockScreenHintManager, SBDisableAppStatusBarUserInteractionChangesAssertion, SBAppStatusBarSettingsAssertion, SBIrisWallpaperSettings, NSMutableSet, NSString;

@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate_Internal, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperObserver, SBLockScreenPluginControllerDelegate, SBLockScreenSlideUpToAppControllerDelegate, SBLockScreenLogoutButtonViewControllerDelegate, UIGestureRecognizerDelegate, SBFIrisWallpaperViewDelegate> {

	BOOL _isInScreenOffMode;
	SBLockScreenDeviceBlockViewController* _blockedController;
	SBLockScreenDateViewController* _dateViewController;
	SBLockScreenStatusTextViewController* _statusTextViewController;
	SBLockScreenTimerViewController* _timerViewController;
	SBLockScreenNotificationListController* _notificationController;
	SBLockScreenSlideUpToAppController* _cameraController;
	SBLockScreenSlideUpToAppController* _bottomLeftAppController;
	MPUSystemMediaControlsViewController* _mediaControlsViewController;
	BOOL _ignoreFirstMediaToggle;
	SBLockScreenLogoutButtonViewController* _logoutController;
	SBLockScreenDeviceInformationTextViewController* _deviceInformationTextViewController;
	SBUserSessionController* _userSessionController;
	SBLockScreenModalAlertViewController* _modalAlertController;
	SBLockScreenBatteryChargingViewController* _chargingViewController;
	BOOL _attemptingPasscodeUnlock;
	BOOL _chargingViewControllerVisible;
	BOOL _wasAutoUnlocked;
	BOOL _forcePasscodeWhileInCall;
	BOOL _isHidingPasscodeWhileInCall;
	BOOL _nextUnlockShouldReturnToCall;
	SBLockScreenPluginController* _pluginController;
	SBLockScreenNowPlayingPluginController* _nowPlayingController;
	SBLockScreenBuddyViewController* _buddyController;
	SBLockOverlayContext* _buddyOverlayContext;
	NSMutableArray* _prioritizedOverlays;
	SBLockOverlayContext* _fullScreenOverlayContext;
	SBLockOverlayContext* _blockedOverlayContext;
	SBLockScreenFullscreenBulletinViewController* _fullscreenBulletinController;
	SBLockOverlayContext* _fullScreenBulletinOverlayContext;
	SBLockScreenInfoOverlayViewController* _infoOverlayController;
	SBLockOverlayContext* _infoOverlayContext;
	SBLockScreenTemperatureWarningViewController* _thermalWarningController;
	SBLockOverlayContext* _thermalWarningContext;
	SBLockScreenResetRestoreViewController* _resetRestoreViewController;
	SBLockOverlayContext* _resetRestoreOverlayContext;
	SBLockScreenPasscodeOverlayViewController* _passcodeOverlayViewController;
	SBLockOverlayContext* _passcodeOverlayContext;
	SBLockScreenUserPictureViewController* _userPictureOverlayController;
	SBLockOverlayContext* _userPictureOverlayContext;
	SBLockScreenEmergencyCallViewController* _emergencyCallController;
	BOOL _retryingEmergencyDialerCreationWhileBlocked;
	BOOL _suppressWallpaperAlphaChangeOnScroll;
	SBLockScreenActionContext* _bioLockScreenActionContext;
	BOOL _disabledMesaForPhoneCall;
	SBLockScreenActionContext* _slideUpControllerActionContext;
	SBLockScreenHintManager* _hintManager;
	SBDisableAppStatusBarUserInteractionChangesAssertion* _statusBarUserInteractionAssertion;
	SBAppStatusBarSettingsAssertion* _statusBarSettingsAssertion;
	BOOL _handlingMenuDoubleTap;
	SBIrisWallpaperSettings* _irisWallpaperSettings;
	BOOL _irisPlayerIsInteracting;
	BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
	NSMutableSet* _irisGestureDisabledReasons;
	BOOL _hasAuthenticatedForNotificationAction;

}

@property (nonatomic,readonly) SBLockScreenPluginController * pluginController;                                                           //@synthesize pluginController=_pluginController - In the implementation block
@property (setter=_setBioLockScreenActionContext:,nonatomic,retain) SBLockScreenActionContext * _bioLockScreenActionContext;              //@synthesize bioLockScreenActionContext=_bioLockScreenActionContext - In the implementation block
@property (assign,nonatomic) BOOL hasAuthenticatedForNotificationAction;                                                                  //@synthesize hasAuthenticatedForNotificationAction=_hasAuthenticatedForNotificationAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(BOOL)isInScreenOffMode;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)_updateLegibility;
-(BOOL)isShowingMediaControls;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)_shouldDismissSwitcherOnActivation;
-(void)noteStartingPhoneCallWhileUILocked;
-(int)statusBarStyleOverridesToCancel;
-(BOOL)shouldPendAlertItemsWhileActive;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)isShowingOverheatUI;
-(id)lockScreenView;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)removeOverlay:(id)arg1 transitionIfNecessary:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)addOverlay:(id)arg1 transitionIfNecessary:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(void)displayDidDisappear;
-(void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)activateAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)currentAlertItem;
-(BOOL)hasSuperModalAlertItems;
-(BOOL)wantsToHandleAlert:(id)arg1 ;
-(id)dequeueAllPendingSuperModalAlertItems;
-(BOOL)hasAlertItem:(id)arg1 ;
-(void)deactivateAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)allPendingAlertItems;
-(BOOL)canHandleAlerts;
-(BOOL)_forcesPortraitOrientation;
-(void)timerControllerDidStopTimer:(id)arg1 ;
-(void)timerControllerDidStartTimer:(id)arg1 ;
-(void)authenticateForNotificationActionWithCompletion:(/*^block*/id)arg1 ;
-(void)launchEmergencyDialer;
-(void)chargingViewControllerFadedOutContent:(id)arg1 ;
-(void)_notificationCenterDidPresent:(id)arg1 ;
-(BOOL)shouldShowSlideToUnlockTextImmediately;
-(BOOL)lockScreenViewIsCurrentlyBeingDisplayed;
-(BOOL)wantsToShowStatusBarTime;
-(void)resetCoordinatedPresentingController:(id)arg1 ;
-(void)removeCoordinatedPresentingController:(id)arg1 ;
-(void)addCoordinatedPresentingController:(id)arg1 ;
-(BOOL)deviceInformationTextViewCanUseFullHeight;
-(void)lockScreenView:(id)arg1 didScrollToPage:(long long)arg2 ;
-(void)lockScreenView:(id)arg1 willScrollToPage:(long long)arg2 ;
-(BOOL)isAllowingWallpaperBlurUpdates;
-(void)lockScreenView:(id)arg1 didEndScrollingOnPage:(long long)arg2 ;
-(void)lockScreenViewDidBeginScrolling:(id)arg1 ;
-(BOOL)lockScreenViewPhonePluginIsActive;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(double)arg1 tracking:(BOOL)arg2 ;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(double)arg1 percentScrolledVelocity:(double)arg2 targetScrollPercentage:(double)arg3 ;
-(id)effectiveCustomSlideToUnlockText;
-(void)shakeSlideToUnlockTextWithCustomText:(id)arg1 ;
-(id)_notificationController;
-(BOOL)isAnotherSlideUpControllerBlockingController:(id)arg1 ;
-(BOOL)controllerShouldUseAdditionalTopPadding:(id)arg1 ;
-(BOOL)controllerShouldInvertVerticalPadding:(id)arg1 ;
-(void)addGrabberView:(id)arg1 toLockScreenView:(id)arg2 forController:(id)arg3 ;
-(id)grabberViewInLockScreenView:(id)arg1 forController:(id)arg2 ;
-(void)setUnlockActionContext:(id)arg1 ;
-(SBLockScreenPluginController *)pluginController;
-(id)viewControllerToUseAsParent;
-(void)passcodeViewDidBecomeActive:(BOOL)arg1 forController:(id)arg2 ;
-(void)adjustWallpaperForVerticalScrollPercentage:(double)arg1 ;
-(void)prepareForSlideUpAppLaunchAnimated:(BOOL)arg1 ;
-(BOOL)lockScreenIsActive;
-(long long)presentingControllerIdentifierForController:(id)arg1 ;
-(BOOL)hasNotifications;
-(void)adjustLockScreenContentByOffset:(double)arg1 forPluginController:(id)arg2 withAnimationDuration:(double)arg3 ;
-(id)currentLockScreenActionContext;
-(CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(long long)arg2 ;
-(BOOL)isLockScreenVisible;
-(BOOL)isSystemGesturePermittedForPresentingController:(id)arg1 ;
-(BOOL)allowSystemGestureAtLocation:(CGPoint)arg1 ;
-(void)biometricEventMonitorDidAuthenticate:(id)arg1 ;
-(void)attemptToUnlockUIFromNotification;
-(BOOL)hasAuthenticatedForNotificationAction;
-(void)noteModalBannerIsVisible:(BOOL)arg1 ;
-(void)_callCountChanged:(id)arg1 ;
-(void)_translateNotificationListView;
-(void)_setStationaryContentAlpha:(double)arg1 ;
-(BOOL)_didNotificationsPassTopGrabber;
-(BOOL)_isAnimatingNotificationListView;
-(void)_translateTopGrabber;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)lockScreenCameraController;
-(id)lockScreenBottomLeftAppController;
-(BOOL)isBounceEnabledForPresentingController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 auxiliaryActivationAnimationBlock:(/*^block*/id)arg3 ;
-(void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 auxiliaryDeactivationAnimationBlock:(/*^block*/id)arg3 ;
-(void)pluginController:(id)arg1 activePluginDidChange:(id)arg2 ;
-(BOOL)isHidingPasscodeViewDuringCall;
-(void)updateLegibility;
-(void)infoOverlayWantsDismissal;
-(void)presentFullscreenBulletinAlertWithItem:(id)arg1 ;
-(void)notificationListBecomingVisible:(BOOL)arg1 ;
-(void)modifyFullscreenBulletinAlertWithItem:(id)arg1 ;
-(void)dismissFullscreenBulletinAlertWithItem:(id)arg1 ;
-(id)lockScreenScrollView;
-(void)bannerEnablementChanged;
-(void)activateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)deactivateCardItem:(id)arg1 ;
-(void)updateCardItem:(id)arg1 ;
-(void)logoutButtonViewControllerButtonPressed:(id)arg1 ;
-(void)noteNextUnlockShouldReturnToCallIfPossible:(BOOL)arg1 ;
-(BOOL)wasAutoUnlocked;
-(BOOL)_disableIdleTimer:(BOOL)arg1 ;
-(BOOL)isPasscodeLockVisible;
-(BOOL)wantsLockScreenIdleTimer;
-(void)_handleBacklightFadeEnded;
-(void)_addDeviceInformationTextView;
-(void)_removeDeviceInformationTextView;
-(void)_updateBatteryChargingViewAnimated:(BOOL)arg1 ;
-(void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1 ;
-(void)_fadeViewsForChargingViewVisible:(BOOL)arg1 ;
-(void)_removeBatteryChargingView;
-(BOOL)canBeUIUnlocked;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(BOOL)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)prepareToEnterLostMode;
-(void)noteExitingLostMode;
-(void)noteDeviceBlockedStatusUpdated;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)_createCameraControllerIfNecessary;
-(void)_handleDisplayTurnedOnWhileUILocked:(id)arg1 ;
-(void)_handleDisplayWillUndim;
-(void)_handleBacklightLevelChanged:(id)arg1 ;
-(void)_handlePasscodeLockStateChanged;
-(void)_handlePasscodePolicyChanged;
-(void)_powerStatusChanged:(id)arg1 ;
-(void)_unsupportedChargingAccessoryStateChanged:(id)arg1 ;
-(void)_callInfoChanged:(id)arg1 ;
-(void)_mediaControlsDidHideOrShow:(id)arg1 ;
-(void)_buddyDidFinish:(id)arg1 ;
-(void)_handleSuggestedAppChanged:(id)arg1 ;
-(void)_evaluateLockUIForActiveCalls;
-(void)_clearAlphaStatusBarAssertion;
-(void)_prepareWallpaperForLockedMode;
-(void)_addRemoveOrChangePasscodeViewIfNecessary;
-(void)_addTimerViewIfNecessary;
-(void)_addDateView;
-(void)_addStatusTextView;
-(void)_addNotificationView;
-(void)_addCameraGrabberIfNecessary;
-(void)_addLogoutControllerIfNecessary;
-(void)_addBottomLeftGrabberIfNecessaryForAutoUnlock:(BOOL)arg1 ;
-(void)_addMediaControls;
-(void)_addOrRemoveBuddyBackgroundIfNecessary;
-(void)_addUserPictureOverlayIfNecessary;
-(void)_removeAllOverlays;
-(void)_setHintManagerEnabledIfPossible:(BOOL)arg1 removingLockScreenView:(BOOL)arg2 ;
-(void)_removeDateView;
-(void)_removeStatusTextView;
-(void)_removeTimerView;
-(void)_dismissFullscreenBulletinAlertAnimated:(BOOL)arg1 ;
-(void)_removeNotificationView;
-(void)_removeActivePluginView;
-(void)_setNowPlayingControllerEnabled:(BOOL)arg1 ;
-(void)_removeMediaControls;
-(void)_removeBuddyBackground;
-(void)_removeUserPictureOverlay;
-(void)_removeLogoutController;
-(void)_prepareWallpaperForUnlockedMode;
-(void)_addLogoutController;
-(void)_createLogoutControllerIfNecessary;
-(void)_updateDateTimerStatusBarAndLockSlider;
-(void)_destroyEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)_removeBlockedView:(BOOL)arg1 ;
-(void)_removeModalBannerOverlay:(BOOL)arg1 ;
-(void)_removeThermalTrapView:(BOOL)arg1 ;
-(id)_currentTextForResetOrRestoreState;
-(void)_removeRestoreView:(BOOL)arg1 ;
-(void)_addRemoveOrChangePasscodeViewIfNecessaryCanAdd:(BOOL)arg1 canRemove:(BOOL)arg2 ;
-(void)_togglePasscodeEmergencyCallButtonIfNecessary;
-(id)_effectiveLegibilitySettings;
-(void)_addTimerView;
-(void)_addUserPictureOverlay;
-(unsigned long long)hintEdgeForController:(id)arg1 ;
-(void)_postPasscodeLockNotification:(long long)arg1 ;
-(void)_adjustIdleTimerForEmergencyDialerActive:(BOOL)arg1 ;
-(void)_setHintManagerEnabledIfPossible:(BOOL)arg1 ;
-(void)_setIrisGestureDisabled:(BOOL)arg1 forRequester:(id)arg2 ;
-(BOOL)_isFadeInAnimationInProgress;
-(void)_adjustLockScreenWallpaperAlphaForPercentScrolled:(double)arg1 scrollViewTracking:(BOOL)arg2 ;
-(id)_effectiveCustomSlideToUnlockText;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 ;
-(void)_updateMediaControlsForScreenMode;
-(void)_updateGrabbersForScreenOffMode;
-(BOOL)_shouldShowChargingText;
-(void)_addBatteryChargingViewAndShowBattery:(BOOL)arg1 ;
-(double)_effectiveOpacityForVisibleDateView;
-(id)_effectiveLockScreenActionContext;
-(SBLockScreenActionContext *)_bioLockScreenActionContext;
-(void)cleanupAlertItemsForDeactivation;
-(void)_releaseLockScreenView;
-(void)prepareForUIUnlock;
-(void)_removeFullscreenBulletinViewAnimated:(BOOL)arg1 ;
-(void)_setMediaControlsVisible:(BOOL)arg1 ;
-(void)_startFadeInAnimationForBatteryView:(BOOL)arg1 ;
-(BOOL)_shouldShowDate;
-(double)_effectiveVisibleStatusBarAlpha;
-(void)_setBioLockScreenActionContext:(id)arg1 ;
-(void)_notificationCenterWillPresent:(id)arg1 ;
-(void)_setStatusBarUserInteractionEnabledForTopGrabber:(BOOL)arg1 ;
-(void)_addOrRemoveBlockedViewIfNecessary:(BOOL)arg1 ;
-(void)_addOrRemoveThermalTrapViewIfNecessary:(BOOL)arg1 ;
-(void)_addOrRemoveResetRestoreViewIfNecessary:(BOOL)arg1 ;
-(void)_resetActivePlugin;
-(id)_lockScreenViewCreatingIfNecessary;
-(void)_toggleMediaControls;
-(void)__transitionOverlayAnimated:(BOOL)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_removeInfoOverlayViewAnimated:(BOOL)arg1 ;
-(void)_addInfoOverlayViewWithTitle:(id)arg1 ;
-(void)_removePasscodeOverlayWithCompletion:(/*^block*/id)arg1 ;
-(void)_addOrRemoveModalBannerOverlay:(BOOL)arg1 ;
-(void)_handleDisplayTurnedOff;
-(void)_passcodeStateChanged;
-(void)setForcesPasscodeViewDuringCall:(BOOL)arg1 ;
-(BOOL)__shouldHidePasscodeForActiveCall;
-(void)_endTimedPasscodeHysteresis;
-(void)_beginTimedPasscodeHysteresis;
-(void)_setupAlphaStatusBarAssertion:(double)arg1 ;
-(void)_dismissNotificationCenterToRevealPasscode;
-(void)_addFullscreenBulletinViewWithItem:(id)arg1 ;
-(void)_addPasscodeOverlayWithCompletion:(/*^block*/id)arg1 ;
-(void)_addModalAlertView;
-(void)_removeModalAlertView;
-(void)_handlePassKitDisplayChange:(BOOL)arg1 ;
-(id)_overlayLegibilitySettings;
-(id)_notificationListLegibilitySettings;
-(id)_pluginLegibilitySettings;
-(id)_wallpaperLegibilitySettings;
-(void)_incrementIrisPlayCount;
-(void)_updateUIForPlaying:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)_actuallyUpdateUIForIrisNotPlaying;
-(void)_actuallyUpdateUIForIrisPlaying:(BOOL)arg1 ;
-(void)_fadeViewsForIrisPlaying:(BOOL)arg1 ;
-(void)overlay:(id)arg1 wantsStyleChange:(unsigned long long)arg2 ;
-(id)lockScreenHintManager;
-(double)hintDisplacementForController:(id)arg1 ;
-(void)prepareForExternalUIUnlock;
-(void)activateCameraAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowStatusBarOnDeactivation;
-(BOOL)lockScreenIsShowingBulletins;
-(void)prepareForMesaUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)noteResetRestoreStateUpdated;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 withUnlockSource:(int)arg3 andOptions:(id)arg4 ;
-(BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(void)_handlePassKitPresentation;
-(void)_handlePassKitDismissal;
-(BOOL)allowAnimatedDismissalForLockScreenPlugin;
-(void)setShowingMediaControls:(BOOL)arg1 ;
-(void)_updateGrabbersForIdentityManagerAuthentication;
-(void)_actuallyUpdateUIForIrisPlaying;
-(void)setHasAuthenticatedForNotificationAction:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)statusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)deactivate;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)activate;
-(id)legibilitySettings;
-(void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3 ;
-(void)irisWallpaperViewPlaybackStateDidChange:(id)arg1 ;
-(void)irisWallpaperViewIsInteractingDidChange:(id)arg1 ;
-(BOOL)isMakingEmergencyCall;
-(void)passcodeLockViewKeypadKeyDown:(id)arg1 ;
-(void)passcodeLockViewKeypadKeyUp:(id)arg1 ;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(BOOL)hasTranslucentBackground;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)removeOverlay;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(BOOL)handleLockButtonPressed;
-(BOOL)isPresentationEnabledForPresentingController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
@end

