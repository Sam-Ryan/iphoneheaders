/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSpringBoardServerInstanceDelegate;
@class AXIPCServer, AXIPCClient, NSMutableArray, _AXAssertionServer;

@interface _AXSpringBoardServerInstance : NSObject {

	AXIPCServer* _server;
	AXIPCClient* _client;
	id<AXSpringBoardServerInstanceDelegate> _delegate;
	NSMutableArray* _actionHandlers;
	NSMutableArray* _reachabilityHandlers;
	AXIPCClient* _currentSpeakerClient;
	BOOL _disableNotificationCenterAssertionHeld;
	BOOL _disableControlCenterAssertionHeld;
	_AXAssertionServer* _assertionServer;

}

@property (assign,nonatomic) id<AXSpringBoardServerInstanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _AXAssertionServer * assertionServer;                          //@synthesize assertionServer=_assertionServer - In the implementation block
@property (assign,nonatomic) BOOL disableNotificationCenterAssertionHeld;                   //@synthesize disableNotificationCenterAssertionHeld=_disableNotificationCenterAssertionHeld - In the implementation block
@property (assign,nonatomic) BOOL disableControlCenterAssertionHeld;                        //@synthesize disableControlCenterAssertionHeld=_disableControlCenterAssertionHeld - In the implementation block
+(id)springBoardServerInstance;
+(id)springBoardServerInstanceIfExists;
-(void)setDelegate:(id<AXSpringBoardServerInstanceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AXSpringBoardServerInstanceDelegate>)delegate;
-(BOOL)hasActiveCall;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(BOOL)hasActiveOrPendingCall;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(void)setSiriIsTalking:(BOOL)arg1 ;
-(id)_screenLocked:(id)arg1 ;
-(void)userChangedRouteNotification:(id)arg1 ;
-(BOOL)shouldSendReachabilityToggled;
-(void)reachabilityToggledWithPayload:(id)arg1 synchronizationPort:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performValidation;
-(void)springBoardActionOccurred:(long long)arg1 ;
-(void)springBoardActionOccurred:(long long)arg1 withPayload:(id)arg2 ;
-(BOOL)shouldBlockGestureActivation:(unsigned long long)arg1 ;
-(BOOL)shouldCancelSiriTouchActivationBlock;
-(BOOL)disableNotificationCenterAssertionHeld;
-(BOOL)disableControlCenterAssertionHeld;
-(BOOL)_setCallRoute:(int)arg1 ifCurrentlyRoutedTo:(id)arg2 ;
-(void)_setAVCallRoute:(id)arg1 ;
-(id)_initServer;
-(void)_registerServerAndNotifyClients;
-(void)_springBoardFinishedLaunching:(id)arg1 ;
-(id)_startHearingAidServer:(id)arg1 ;
-(void)_proximityDidChange:(id)arg1 ;
-(void)_initializeHandlers;
-(id)_getApplicationOrientation:(id)arg1 ;
-(id)_getPid:(id)arg1 ;
-(id)_showAlert:(id)arg1 ;
-(id)_hideAlert:(id)arg1 ;
-(id)_isMakingEmergencyCall:(id)arg1 ;
-(id)_hasActiveCall:(id)arg1 ;
-(id)_hasActiveOrPendingCall:(id)arg1 ;
-(id)_hasActiveOrPendingCallOrFaceTime:(id)arg1 ;
-(id)_topEventPidOverride:(id)arg1 ;
-(id)_takeScreenshot:(id)arg1 ;
-(id)_openAppSwitcher:(id)arg1 ;
-(id)_dismissAppSwitcher:(id)arg1 ;
-(id)_simulateEdgePressHaptics:(id)arg1 ;
-(id)_unlockDevice:(id)arg1 ;
-(id)_openSiri:(id)arg1 ;
-(id)_dismissSiri:(id)arg1 ;
-(id)_toggleNotificationCenter:(id)arg1 ;
-(id)_isNotificationCenterVisible:(id)arg1 ;
-(id)_openVoiceControl:(id)arg1 ;
-(id)_getActiveInterfaceOrientation:(id)arg1 ;
-(id)_actionHandling:(id)arg1 ;
-(id)_isVoiceControlRunning:(id)arg1 ;
-(id)_isSiriTalkingOrListening:(id)arg1 ;
-(id)_setSiriIsTalking:(id)arg1 ;
-(id)_isSystemSleeping:(id)arg1 ;
-(id)_volumeLevel:(id)arg1 ;
-(id)_isOrientationLocked:(id)arg1 ;
-(id)_setOrientationLocked:(id)arg1 ;
-(id)_isSideSwitchUsedForOrientation:(id)arg1 ;
-(id)_isRingerMuted:(id)arg1 ;
-(id)_openCustomGestureCreationForAST:(id)arg1 ;
-(id)_openCustomGestureCreationForSCAT:(id)arg1 ;
-(id)_cancelGestureActivation:(id)arg1 ;
-(id)_toggleHearingControl:(id)arg1 ;
-(id)_isPointInAXInspector:(id)arg1 ;
-(id)_isMediaPlaying:(id)arg1 ;
-(id)_pauseMedia:(id)arg1 ;
-(id)_resumeMedia:(id)arg1 ;
-(id)_resetDimTimer:(id)arg1 ;
-(id)_showControlCenter:(id)arg1 ;
-(id)_showNotificationCenter:(id)arg1 ;
-(id)_isControlCenterVisible:(id)arg1 ;
-(id)_copyStringToPasteboard:(id)arg1 ;
-(id)_isSiriVisible:(id)arg1 ;
-(id)_isAppSwitcherVisible:(id)arg1 ;
-(id)_isSideSwitcherVisible:(id)arg1 ;
-(id)_isSyncingRestoringResettingOrUpdating:(id)arg1 ;
-(id)_areSystemGesturesDisabledNatively:(id)arg1 ;
-(id)_areSystemGesturesDisabledByAccessibility:(id)arg1 ;
-(id)_handleSpringBoardInfoQuery:(id)arg1 ;
-(id)_handleInstalledApps:(id)arg1 ;
-(id)_handleIsInspectorMinimized:(id)arg1 ;
-(id)_handleCancelReachabilityTimer:(id)arg1 ;
-(id)_handleRevealSpotlight:(id)arg1 ;
-(id)_handleBackboardSnarfedMenuDown:(id)arg1 ;
-(id)_handleLoadGAXBundleForUnmanagedASAM:(id)arg1 ;
-(id)_setSpeechPlaybackControls:(id)arg1 ;
-(id)_isSpeakThisTemporarilyDisabled:(id)arg1 ;
-(id)_handleAcquireAssertion:(id)arg1 ;
-(id)_handleRelinquishAssertion:(id)arg1 ;
-(id)_handleIsSystemAppShowingAnAlert:(id)arg1 ;
-(id)_handleGetFocusedAppPID:(id)arg1 ;
-(id)_handleGetPurpleBuddyPID:(id)arg1 ;
-(id)_handleGetRunningAppPIDs:(id)arg1 ;
-(id)_handleGetFocusedApps:(id)arg1 ;
-(id)_handleIsSystemAppFrontmost:(id)arg1 ;
-(id)_handleIsPurpleBuddyAppFrontmost:(id)arg1 ;
-(id)_handleIsSettingsAppFrontmost:(id)arg1 ;
-(id)_handleIsMultitaskingActive:(id)arg1 ;
-(id)_reachabilityOffset:(id)arg1 ;
-(id)_reachabilityHandling:(id)arg1 ;
-(id)_reachabilityActive:(id)arg1 ;
-(id)_handleToggleIncomingCall:(id)arg1 ;
-(id)_allowedMedusaGestures:(id)arg1 ;
-(id)_performMedusaGesture:(id)arg1 ;
-(void)_setupAssertionServerIfNeeded;
-(_AXAssertionServer *)assertionServer;
-(void)setAssertionServer:(_AXAssertionServer *)arg1 ;
-(void)_setSystemGesturesEnabled:(BOOL)arg1 ;
-(void)setDisableNotificationCenterAssertionHeld:(BOOL)arg1 ;
-(void)setDisableControlCenterAssertionHeld:(BOOL)arg1 ;
-(BOOL)_hasActionHandlerForClientPort:(unsigned)arg1 ;
-(void)_removeActionHandler:(unsigned)arg1 ;
-(BOOL)_hasReachabilityHandlerForClientPort:(unsigned)arg1 ;
-(void)_removeReachabilityHandler:(unsigned)arg1 ;
-(void)registerHandlerForMessageKey:(int)arg1 target:(id)arg2 selector:(SEL)arg3 entitlements:(id)arg4 ;
@end

