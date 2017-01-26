/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXAccessQueueTimer, NSDictionary, NSArray, AXNotificationHandler, NSMutableArray, AXCameraTorchManagerBackgroundAdapter;

@interface AXVisualAlertManager : NSObject {

	unsigned long long _alertTypes;
	AXAccessQueueTimer* _timer;
	AXAccessQueueTimer* _torchForceShutdownTimer;
	NSDictionary* _patterns;
	NSDictionary* _activePattern;
	unsigned long long _activePatternCursor;
	BOOL _shouldRepeatPattern;
	NSDictionary* _patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
	NSArray* _notificationHandlers;
	AXNotificationHandler* _deviceLockStateChangedNotificationHandler;
	AXNotificationHandler* _torchInControlCenterWasEnabledNotificationHandler;
	BOOL _torchDeviceOpen;
	BOOL _torchDeviceOn;
	BOOL _isDeviceLocked;
	BOOL _isQuietModeEnabled;
	BOOL _isTorchEnabledInControlCenter;
	BOOL _captureSessionRunning;
	BOOL _videoConferenceCallRinging;
	BOOL _skipAutomaticStopOnUserInteraction;
	NSMutableArray* _bulletins;
	unsigned long long _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
	AXCameraTorchManagerBackgroundAdapter* _asyncManagerAdapter;

}

@property (nonatomic,retain,readonly) NSDictionary * _patterns; 
@property (setter=_setActivePattern:,nonatomic,retain) NSDictionary * _activePattern;                                                                                                    //@synthesize activePattern=_activePattern - In the implementation block
@property (assign,setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:,nonatomic) unsigned long long _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;              //@synthesize typeToUseForVisualAlertAfterCaptureSessionStopsRunning=_typeToUseForVisualAlertAfterCaptureSessionStopsRunning - In the implementation block
@property (getter=_isTorchDeviceOpen,nonatomic,readonly) BOOL _torchDeviceOpen;                                                                                                          //@synthesize torchDeviceOpen=_torchDeviceOpen - In the implementation block
@property (getter=_isTorchDeviceOn,nonatomic,readonly) BOOL _torchDeviceOn;                                                                                                              //@synthesize torchDeviceOn=_torchDeviceOn - In the implementation block
@property (nonatomic,readonly) AXCameraTorchManagerBackgroundAdapter * _asyncManagerAdapter;                                                                                             //@synthesize asyncManagerAdapter=_asyncManagerAdapter - In the implementation block
+(void)initialize;
+(id)sharedVisualAlertManager;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)stop;
-(void)_stop;
-(void)startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2 ;
-(void)removeBulletin:(id)arg1 ;
-(void)addBulletin:(id)arg1 ;
-(void)_handleEndVisualAlertForAlarm;
-(id)existingBulletinForBulletin:(id)arg1 ;
-(void)_handleVisualAlertForIncomingMessage;
-(void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)arg1 ;
-(void)_handleVisualAlertForRegularNotification;
-(void)_insertCustomLogicForSystemWideServer;
-(void)_handleBeginVisualAlertForIncomingCall;
-(void)_handleBeginVisualAlertForIncomingVideoConferenceCall;
-(void)_handleEndVisualAlertForIncomingCall;
-(void)_handleEndVisualAlertForIncomingVideoConferenceCall;
-(void)_handleVisualAlertForExternalApplication;
-(void)_handleLockButtonPressed;
-(void)_handleVolumeChanged;
-(void)_handleDeviceWasLocked;
-(void)_handleDeviceWasUnlocked;
-(void)_handleQuietModeWasEnabled;
-(void)_handleQuietModeWasDisabled;
-(void)_handleTorchInControlCenterWasEnabled;
-(void)_handleTorchInControlCenterWasDisabled;
-(void)_handleCaptureSessionDidStartRunning;
-(void)_handleCaptureSessionDidStopRunning;
-(void)_handleSecondaryVisualAlertManagerDidStart;
-(BOOL)_hasVideoConferenceCameraTorchManager;
-(void)_handleVideoConferenceCallRinging;
-(void)_endVisualAlert;
-(void)_startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2 ;
-(void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(BOOL)arg2 skipAutomaticStopOnUserInteraction:(BOOL)arg3 ;
-(void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned long long)arg1 ;
-(NSDictionary *)_patterns;
-(BOOL)_isTorchDeviceOpen;
-(BOOL)_isTorchDeviceOn;
-(id)_normalizedStrobePatternForOriginalPattern:(id)arg1 ;
-(void)_setActivePattern:(id)arg1 ;
-(void)_setTorchDeviceOpen:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_processNextVisualAlertComponent;
-(void)_setTorchDeviceOn:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSDictionary *)_activePattern;
-(void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(BOOL)arg2 ;
-(BOOL)_shouldHandleVisualAlertsForVideoConferenceCallsInConferenceFramework;
-(unsigned long long)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
-(BOOL)_supportsVisualAlertsForVideoConferenceCalls;
-(BOOL)_isTorchEnabledInControlCenter;
-(AXCameraTorchManagerBackgroundAdapter *)_asyncManagerAdapter;
@end

