/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Assistant/Assistant-Structs.h>
#import <SpringBoardUI/SBUIPluginController.h>
#import <libobjc.A.dylib/ACBulletinManagerDelegate.h>
#import <libobjc.A.dylib/ACHeaterDelegate.h>
#import <libobjc.A.dylib/AFUISiriLanguageDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewControllerDataSource.h>
#import <libobjc.A.dylib/AFUISiriViewControllerDelegate.h>
#import <libobjc.A.dylib/CMPocketStateDelegate.h>
#import <libobjc.A.dylib/VTPhraseSpotterControlRemoteDelegate.h>

@class AFConnection, AFRemoteRequestWatcher, AFUISiriViewController, AFUIApplicationStateHelper, AFUIDialogPhase, VTPhraseSpotterControlRemote, NSTimer, CMPocketStateManager, NSMutableArray, AFUISiriLanguage, ACBulletinManager, ACHeater, NSString, AFUIQueue, BluetoothDevice;

@interface ACSpringBoardPluginController : SBUIPluginController <ACBulletinManagerDelegate, ACHeaterDelegate, AFUISiriLanguageDelegate, AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate, CMPocketStateDelegate, VTPhraseSpotterControlRemoteDelegate> {

	/*^block*/id _buttonTrigger;
	AFConnection* _unownedConnection;
	AFRemoteRequestWatcher* _remoteRequestWatcher;
	AFUISiriViewController* _siriViewController;
	BOOL _delaySessionForTTS;
	long long _useDeviceSpeakerForTTSPreference;
	int _voiceTriggerEarlyDetectNotifyToken;
	BOOL _voiceTriggerNotifyTokenIsValid;
	int _voiceTriggerNotifyToken;
	int _powerSourceNotifyToken;
	AFUIApplicationStateHelper* _appStateHelper;
	unsigned long long _lockState;
	AFUIDialogPhase* _lastDialogPhase;
	BOOL _statusViewHidden;
	VTPhraseSpotterControlRemote* _phraseSpotterControlRemote;
	NSTimer* _phraseSpotterReenableTimer;
	CMPocketStateManager* _pocketStateManager;
	BOOL _pocketStateShouldPreventVoiceTrigger;
	BOOL _pocketStateShouldPreventHomeButtonActivation;
	unsigned long long _pendingVoiceTriggerRestrictionCount;
	BOOL _hasPendingVoiceTriggerActivation;
	unsigned long long _currentVoiceTriggerRestriction;
	BOOL _shouldLogAnalyticsEvents;
	NSMutableArray* _pendingAnalyticsEventQueue;
	int _waketimeMIB[12];
	unsigned long long _waketimeMIBSize;
	BOOL _accessibilityShortcutEnabled;
	BOOL _waitingForUserEvent;
	BOOL _springBoardIdleTimerDisabled;
	BOOL _buttonDownEventDidOccur;
	BOOL _startGuidedAccessOnDismissal;
	BOOL _waitingForTelephonyToStart;
	BOOL _wasLockedAtWantsActivation;
	BOOL _pairedToTrustedCar;
	int _ringerStateToken;
	AFUISiriLanguage* _language;
	ACBulletinManager* _bulletinManager;
	ACHeater* _heater;
	NSString* _presentationIdentifier;
	long long _lastSpeechEvent;
	AFUIQueue* _testInputQueue;
	BluetoothDevice* _bluetoothDevice;
	double _preparationTimestamp;
	double _buttonDownTimestamp;
	double _lastDismissalTimestamp;
	double _carSiriButtonTimeInterval;
	NSTimer* _carSiriButtonHoldToTalkTimer;

}

@property (getter=_language,nonatomic,readonly) AFUISiriLanguage * language;                                                                                    //@synthesize language=_language - In the implementation block
@property (getter=_bulletinManager,nonatomic,readonly) ACBulletinManager * bulletinManager;                                                                     //@synthesize bulletinManager=_bulletinManager - In the implementation block
@property (getter=_heater,nonatomic,readonly) ACHeater * heater;                                                                                                //@synthesize heater=_heater - In the implementation block
@property (setter=_setPresentationIdentifier:,getter=_presentationIdentifier,nonatomic,retain) NSString * presentationIdentifier;                               //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
@property (assign,setter=_setLastSpeechEvent:,getter=_lastSpeechEvent,nonatomic) long long lastSpeechEvent;                                                     //@synthesize lastSpeechEvent=_lastSpeechEvent - In the implementation block
@property (getter=_testInputQueue,nonatomic,copy,readonly) AFUIQueue * testInputQueue;                                                                          //@synthesize testInputQueue=_testInputQueue - In the implementation block
@property (assign,getter=_isWaitingForUserEvent,nonatomic) BOOL waitingForUserEvent;                                                                            //@synthesize waitingForUserEvent=_waitingForUserEvent - In the implementation block
@property (assign,setter=_setSpringBoardIdleTimerDisabled:,getter=_isSpringBoardIdleTimerDisabled,nonatomic) BOOL springBoardIdleTimerDisabled;                 //@synthesize springBoardIdleTimerDisabled=_springBoardIdleTimerDisabled - In the implementation block
@property (setter=_setBluetoothDevice:,getter=_bluetoothDevice,nonatomic,retain) BluetoothDevice * bluetoothDevice;                                             //@synthesize bluetoothDevice=_bluetoothDevice - In the implementation block
@property (assign,setter=_setPreparationTimestamp:,getter=_preparationTimestamp,nonatomic) double preparationTimestamp;                                         //@synthesize preparationTimestamp=_preparationTimestamp - In the implementation block
@property (assign,setter=_setButtonDownTimestamp:,getter=_buttonDownTimestamp,nonatomic) double buttonDownTimestamp;                                            //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (assign,setter=_setButtonDownEventDidOccur:,getter=_buttonDownEventDidOccur,nonatomic) BOOL buttonDownEventDidOccur;                                  //@synthesize buttonDownEventDidOccur=_buttonDownEventDidOccur - In the implementation block
@property (assign,setter=_setLastDismissalTimestamp:,getter=_lastDismissalTimestamp,nonatomic) double lastDismissalTimestamp;                                   //@synthesize lastDismissalTimestamp=_lastDismissalTimestamp - In the implementation block
@property (assign,setter=_setStartGuidedAccessOnDismissal:,getter=_startGuidedAccessOnDismissal,nonatomic) BOOL startGuidedAccessOnDismissal;                   //@synthesize startGuidedAccessOnDismissal=_startGuidedAccessOnDismissal - In the implementation block
@property (assign,setter=_setWaitingForTelephonyToStart:,getter=_isWaitingForTelephonyToStart,nonatomic) BOOL waitingForTelephonyToStart;                       //@synthesize waitingForTelephonyToStart=_waitingForTelephonyToStart - In the implementation block
@property (assign,setter=_setWasLockedAtWantsActivation:,getter=_wasLockedAtWantsActivation,nonatomic) BOOL wasLockedAtWantsActivation;                         //@synthesize wasLockedAtWantsActivation=_wasLockedAtWantsActivation - In the implementation block
@property (assign,setter=_setCarSiriButtonTimeInterval:,getter=_carSiriButtonTimeInterval,nonatomic) double carSiriButtonTimeInterval;                          //@synthesize carSiriButtonTimeInterval=_carSiriButtonTimeInterval - In the implementation block
@property (setter=_setCarSiriButtonHoldToTalkTimer:,getter=_carSiriButtonHoldToTalkTimer,nonatomic,retain) NSTimer * carSiriButtonHoldToTalkTimer;              //@synthesize carSiriButtonHoldToTalkTimer=_carSiriButtonHoldToTalkTimer - In the implementation block
@property (assign,setter=_setPairedToTrustedCar:,getter=_isPairedToTrustedCar,nonatomic) BOOL pairedToTrustedCar;                                               //@synthesize pairedToTrustedCar=_pairedToTrustedCar - In the implementation block
@property (assign,setter=_setRingerStateToken:,getter=_ringerStateToken,nonatomic) int ringerStateToken;                                                        //@synthesize ringerStateToken=_ringerStateToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(BOOL)supportedAndEnabled;
-(BOOL)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
-(BOOL)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(BOOL)handledPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)handleBluetoothDismissal;
-(void)handlePreheatCommand;
-(BOOL)handledButtonDownEventFromSource:(int)arg1 ;
-(BOOL)handledButtonUpEventFromSource:(int)arg1 ;
-(BOOL)handledButtonTapFromSource:(int)arg1 ;
-(id)viewControllerForActivationContext:(id)arg1 ;
-(void)viewPartiallyRevealedWithPercentRevealed:(double)arg1 ;
-(void)_requestDismissal;
-(void)phraseSpotterControl:(id)arg1 didUpdateEnabled:(BOOL)arg2 ;
-(void)phraseSpotterControlDidReceiveEarlyDetect:(id)arg1 ;
-(void)phraseSpotterControlDidReceiveTrigger:(id)arg1 ;
-(void)phraseSpotterControlDidReceiveDismissal:(id)arg1 ;
-(void)_preferencesDidChange:(id)arg1 ;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(void)siriViewControllerDidChangeVisibility:(id)arg1 ;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2 ;
-(id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(unsigned long long)lockStateForSiriViewController:(id)arg1 ;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2 ;
-(void)startGuidedAccessForSiriViewController:(id)arg1 ;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOverSiri:(BOOL)arg4 replyHandler:(/*^block*/id)arg5 ;
-(void)notifyOnNextUserInteractionForSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2 ;
-(void)siriViewController:(id)arg1 didHideStatusView:(BOOL)arg2 ;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 ;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4 ;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2 ;
-(BOOL)siriViewControllerShouldEndSession:(id)arg1 ;
-(BOOL)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(id)bulletinsForSiriViewController:(id)arg1 ;
-(id)contextAppInfosForSiriViewController:(id)arg1 ;
-(void)siriViewControllerDidChangeListeningState:(id)arg1 ;
-(void)siriViewController:(id)arg1 didChangeDialogPhase:(id)arg2 ;
-(void)siriViewControllerSessionDidResetContext:(id)arg1 ;
-(void)handleViewFullyRevealed;
-(void)_proximityDidChange:(id)arg1 ;
-(void)heaterSuggestsDefrosting:(id)arg1 ;
-(void)heaterSuggestsPreheating:(id)arg1 ;
-(void)bulletinManagerDidChangeBulletins:(id)arg1 ;
-(void)_updateLanguageCode;
-(void)_handleSyntheticActivationEvent:(int)arg1 source:(int)arg2 context:(void*)arg3 ;
-(void)_updatePairedToTrustedCarState;
-(void)_updateAccessibilityState;
-(void)_lockStateDidChange:(id)arg1 ;
-(void)_externalDeviceScreenBecameUnavailable:(id)arg1 ;
-(void)_screenPairingCertificateDidChange:(id)arg1 ;
-(void)_pairedVehiclesDidChange:(id)arg1 ;
-(void)_testingStringsDidChange:(id)arg1 ;
-(void)_testingAudioInputPathsDidChange:(id)arg1 ;
-(void)_setRingerStateToken:(int)arg1 ;
-(void)_updateForCurrentMuteSettings;
-(void)_registerForVoiceTrigger;
-(void)_registerForChargerNotifications;
-(void)_prewarmFlamesViewShadersInBackgroundForScreen:(id)arg1 size:(CGSize)arg2 ;
-(void)_loadFrameworks;
-(void)_unregisterForVoiceTrigger;
-(void)_unregisterForChargerNotifications;
-(id)_language;
-(void)_setPairedToTrustedCar:(BOOL)arg1 ;
-(BOOL)_supportsActivationEvent:(int)arg1 ;
-(double)_intervalForActivationEvent:(int)arg1 ;
-(void)_setWasLockedAtWantsActivation:(BOOL)arg1 ;
-(void)_enqueueAnalyticsEvent:(id)arg1 ;
-(void)_setPreparationTimestamp:(double)arg1 ;
-(id)_heater;
-(id)_siriViewController;
-(void)_setPresentationIdentifier:(id)arg1 ;
-(id)_presentationIdentifier;
-(BOOL)_presentationIsEyesFree;
-(BOOL)_wasLockedAtWantsActivation;
-(BOOL)_isPairedToTrustedCar;
-(void)_flushPendingAnalyticsEventQueue;
-(BOOL)_buttonDownEventDidOccur;
-(void)_setButtonDownTimestamp:(double)arg1 ;
-(double)_buttonDownTimestamp;
-(double)_preparationTimestamp;
-(void)_setBluetoothDevice:(id)arg1 ;
-(void)_endDelayingSessionEndForTTS;
-(double)_lastDismissalTimestamp;
-(void)_updateLockState;
-(void)_startRequestWithOptions:(id)arg1 ;
-(void)_updateExpectsFaceContact;
-(void)_setLastDismissalTimestamp:(double)arg1 ;
-(BOOL)_isDelayingSessionEnd;
-(void)_clearSiriViewController;
-(void)_endBTVoiceSession;
-(BOOL)_startGuidedAccessOnDismissal;
-(void)_setStartGuidedAccessOnDismissal:(BOOL)arg1 ;
-(void)_wasDismissed;
-(id)_bluetoothDevice;
-(id)_currentConnection;
-(BOOL)_cancelPendingPhoneCall;
-(void)_setCarSiriButtonTimeInterval:(double)arg1 ;
-(void)_carSiriButtonHoldToTalkIntervalFired:(id)arg1 ;
-(void)_setCarSiriButtonHoldToTalkTimer:(id)arg1 ;
-(void)_setButtonDownEventDidOccur:(BOOL)arg1 ;
-(BOOL)_sourceIsHoldToTalkTrigger:(int)arg1 ;
-(BOOL)_releaseExistingTrigger;
-(double)_carSiriButtonTimeInterval;
-(BOOL)_isWaitingForTelephonyToStart;
-(void)_setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(void)_applicationURLDidOpen:(id)arg1 ;
-(void)_displayDidLaunch:(id)arg1 ;
-(void)_sendTelephonyHasStartedAfterDelay:(double)arg1 ;
-(void)_telephonyHasStarted;
-(void)_applicationDidLaunch;
-(void)_ttsQueueDidEmpty:(id)arg1 ;
-(id)_testInputQueue;
-(void)_dequeueAllTestInputs;
-(void)_enqueueTestInput:(id)arg1 ;
-(void)_deletePersistedConversation;
-(void)setWaitingForUserEvent:(BOOL)arg1 ;
-(unsigned long long)_currentLockState;
-(int)_ringerStateToken;
-(BOOL)_isWaitingForUserEvent;
-(void)_setSpringBoardIdleTimerDisabled:(BOOL)arg1 ;
-(id)_bulletinManager;
-(void)_beginDelayingSessionEndForTTS;
-(BOOL)_hasTestInput;
-(id)_dequeueTestInput;
-(void)_siriDidOpenURL:(id)arg1 ;
-(void)_sbUserEvent:(id)arg1 ;
-(void)_activateFromVoiceTrigger;
-(void)_startFetchingPocketStateUpdates;
-(void)_processPendingVoiceTriggerActivationsAfterDelay:(double)arg1 ;
-(void)_updateForPocketState:(long long)arg1 ;
-(void)_reenablePhraseSpotter;
-(void)_disablePhraseSpotter;
-(void)_handlePendingVoiceTriggerActivations;
-(long long)_lastSpeechEvent;
-(void)_setLastSpeechEvent:(long long)arg1 ;
-(BOOL)_isSpringBoardIdleTimerDisabled;
-(id)_carSiriButtonHoldToTalkTimer;
@end

