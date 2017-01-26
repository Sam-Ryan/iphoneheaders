/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:31 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDUnlockSessionManager.h>
#import <sharingd/SDUnlockIDSControllerDelegate.h>

@protocol OS_dispatch_source;
@class NSTimer, NSObject, SDUnlockSessionRecord, NSString;

@interface SDUnlockKeyManager : SDUnlockSessionManager <SDUnlockIDSControllerDelegate> {

	BOOL _useEscrowRecord;
	BOOL _remoteDeviceLocked;
	BOOL _ltkWaitingForUnlock;
	BOOL _outstandingStartLTK;
	long long _unlockingState;
	NSTimer* _stashTimer;
	NSObject*<OS_dispatch_source> _stateTimer;
	NSObject*<OS_dispatch_source> _longTermKeyTimer;
	SDUnlockSessionRecord* _sessionRecord;
	/*^block*/id _stashHandler;
	/*^block*/id _stateHandler;
	id _keybagAssertion;

}

@property (assign) BOOL useEscrowRecord;                                        //@synthesize useEscrowRecord=_useEscrowRecord - In the implementation block
@property (retain) NSTimer * stashTimer;                                        //@synthesize stashTimer=_stashTimer - In the implementation block
@property (assign) BOOL remoteDeviceLocked;                                     //@synthesize remoteDeviceLocked=_remoteDeviceLocked - In the implementation block
@property (assign) BOOL ltkWaitingForUnlock;                                    //@synthesize ltkWaitingForUnlock=_ltkWaitingForUnlock - In the implementation block
@property (assign) BOOL outstandingStartLTK;                                    //@synthesize outstandingStartLTK=_outstandingStartLTK - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> stateTimer;                    //@synthesize stateTimer=_stateTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> longTermKeyTimer;              //@synthesize longTermKeyTimer=_longTermKeyTimer - In the implementation block
@property (retain) SDUnlockSessionRecord * sessionRecord;                       //@synthesize sessionRecord=_sessionRecord - In the implementation block
@property (assign) long long unlockingState;                                    //@synthesize unlockingState=_unlockingState - In the implementation block
@property (copy) id stashHandler;                                               //@synthesize stashHandler=_stashHandler - In the implementation block
@property (copy) id stateHandler;                                               //@synthesize stateHandler=_stateHandler - In the implementation block
@property (retain) id keybagAssertion;                                          //@synthesize keybagAssertion=_keybagAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedKeyManager;
-(void)addObservers;
-(void)debugInfoRequested:(id)arg1 ;
-(void)devicesDidUnpair:(id)arg1 ;
-(void)newDeviceBecameActive:(id)arg1 ;
-(void)keyBagLockStateChange:(id)arg1 ;
-(id)generateDebugInfo;
-(void)disableUnlockPairing;
-(void)invalidateLongTermKeyTimer;
-(void)resetSetupState;
-(void)resetAndClearState;
-(void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3 ;
-(void)idsControllerNearbyStateChanged:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)longTermKeyTimer;
-(void)setLongTermKeyTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)devicesDidFailToPair:(id)arg1 ;
-(void)checkDevicePairingState;
-(void)handleConfigState;
-(void)handleUILockStateChange;
-(void)deviceDidEnterConfigurationState:(id)arg1 ;
-(BOOL)remoteDeviceLocked;
-(long long)unlockingState;
-(void)startLTKExchange;
-(void)takeMobileKeybagAssertion;
-(void)sendStartLTKTransfer;
-(void)initiateRemoteUnlock;
-(void)disableUnlockPairingForSecurityManager:(id)arg1 ;
-(void)releaseKeyBagAssertion;
-(void)handleActiveDeviceUpdated;
-(void)setRemoteDeviceLocked:(BOOL)arg1 ;
-(void)sendStateRequest;
-(void)notifyUnlockStateWithState:(id)arg1 error:(id)arg2 ;
-(void)invalidateStateTimer;
-(void)stashTimerFired:(id)arg1 ;
-(void)notifyStashStateWithError:(id)arg1 ;
-(BOOL)initiateStashBagCreation;
-(void)invalidateStashTimer;
-(void)setUnlockingState:(long long)arg1 ;
-(void)handleRemoteLockStateChanged:(id)arg1 ;
-(void)handleLongTermKeyRequest:(id)arg1 ;
-(void)handleSetupRequest:(id)arg1 ;
-(void)handleCreateEscrowSecret:(id)arg1 ;
-(void)handleSessionKeyExchangeResponse:(id)arg1 ;
-(void)handleUnlockConfirmation:(id)arg1 ;
-(void)handleStashKeyExchangeResponse:(id)arg1 ;
-(void)handleStashConfirmation:(id)arg1 ;
-(void)handleUnlockStateResponse:(id)arg1 ;
-(void)handleResetState:(id)arg1 ;
-(BOOL)updateLongTermKey:(id)arg1 ;
-(void)sendLongTermKeyResponse:(id)arg1 requestID:(id)arg2 ;
-(void)handleEscrowSessionRequest:(unsigned)arg1 withUpdatedLongTermKey:(BOOL)arg2 ;
-(void)sendSetupSessionCreatedWithLocalKey:(id)arg1 stepData:(id)arg2 sessionID:(unsigned)arg3 errorCode:(long long)arg4 ;
-(void)sendSetupCreateEscrowRecordWithSessionID:(unsigned)arg1 stepData:(id)arg2 errorCode:(long long)arg3 ;
-(void)sendSessionAuthenticationToken:(id)arg1 sessionID:(unsigned)arg2 ;
-(void)sendStashToken:(id)arg1 sessionID:(unsigned)arg2 ;
-(void)syncUnlockEnabled:(BOOL)arg1 ;
-(void)restartLongTermKeyTimer:(unsigned long long)arg1 ;
-(void)restartStashTimer;
-(void)restartStateTimer;
-(void)sendSessionKeyExchangeRequest:(id)arg1 usedEscrow:(BOOL)arg2 sessionID:(unsigned)arg3 ;
-(void)sendStashKeyRequest:(id)arg1 sessionID:(unsigned)arg2 ;
-(BOOL)useEscrowRecord;
-(void)setUseEscrowRecord:(BOOL)arg1 ;
-(NSTimer *)stashTimer;
-(void)setStashTimer:(NSTimer *)arg1 ;
-(BOOL)ltkWaitingForUnlock;
-(void)setLtkWaitingForUnlock:(BOOL)arg1 ;
-(BOOL)outstandingStartLTK;
-(void)setOutstandingStartLTK:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)stateTimer;
-(void)setStateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(SDUnlockSessionRecord *)sessionRecord;
-(void)setSessionRecord:(SDUnlockSessionRecord *)arg1 ;
-(id)stashHandler;
-(void)setStashHandler:(id)arg1 ;
-(id)stateHandler;
-(void)setStateHandler:(id)arg1 ;
-(id)keybagAssertion;
-(void)setKeybagAssertion:(id)arg1 ;
-(id)init;
-(id)stringForState:(long long)arg1 ;
-(void)resetState;
-(void)establishStashBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unlockStateForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)unlockEnabled;
@end

