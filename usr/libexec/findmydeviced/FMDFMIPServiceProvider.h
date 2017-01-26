/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <findmydeviced/FMDServiceProvider.h>
#import <findmydeviced/FMDLocationTrackerDelegate.h>

@protocol OS_dispatch_queue;
@class FMAlert, FMDLocationTracker, BKSApplicationStateMonitor, NSString, NSObject, NSTimer;

@interface FMDFMIPServiceProvider : FMDServiceProvider <FMDLocationTrackerDelegate> {

	BOOL _isMonitoringPendingDeviceIdentity;
	BOOL _waitingForBuddy;
	BOOL _identityV3Version;
	int _lockStateNotifyToken;
	FMAlert* _pendingSecureMessage;
	FMAlert* _pendingLocateAlert;
	FMDLocationTracker* _locationTracker;
	BKSApplicationStateMonitor* _pendingDeviceIdentityMonitor;
	NSString* _deviceIdentityPendingXpcTransactionName;
	NSObject*<OS_dispatch_queue> _identity_wait_queue;
	NSObject*<OS_dispatch_queue> _device_unlock_actions_queue;
	NSTimer* _buddyWaitTimer;

}

@property (nonatomic,retain) FMAlert * pendingSecureMessage;                                         //@synthesize pendingSecureMessage=_pendingSecureMessage - In the implementation block
@property (nonatomic,retain) FMAlert * pendingLocateAlert;                                           //@synthesize pendingLocateAlert=_pendingLocateAlert - In the implementation block
@property (nonatomic,retain) FMDLocationTracker * locationTracker;                                   //@synthesize locationTracker=_locationTracker - In the implementation block
@property (assign,nonatomic) BOOL isMonitoringPendingDeviceIdentity;                                 //@synthesize isMonitoringPendingDeviceIdentity=_isMonitoringPendingDeviceIdentity - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * pendingDeviceIdentityMonitor;              //@synthesize pendingDeviceIdentityMonitor=_pendingDeviceIdentityMonitor - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentityPendingXpcTransactionName;                     //@synthesize deviceIdentityPendingXpcTransactionName=_deviceIdentityPendingXpcTransactionName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> identity_wait_queue;                       //@synthesize identity_wait_queue=_identity_wait_queue - In the implementation block
@property (assign,nonatomic) int lockStateNotifyToken;                                               //@synthesize lockStateNotifyToken=_lockStateNotifyToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> device_unlock_actions_queue;               //@synthesize device_unlock_actions_queue=_device_unlock_actions_queue - In the implementation block
@property (nonatomic,retain) NSTimer * buddyWaitTimer;                                               //@synthesize buddyWaitTimer=_buddyWaitTimer - In the implementation block
@property (assign,nonatomic) BOOL waitingForBuddy;                                                   //@synthesize waitingForBuddy=_waitingForBuddy - In the implementation block
@property (assign,nonatomic) BOOL identityV3Version;                                                 //@synthesize identityV3Version=_identityV3Version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FMDLocationTracker *)locationTracker;
-(void)ackTrackCommand:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didReceiveAuthFailureForRequest:(id)arg1 ;
-(id)registerDeviceContext;
-(BOOL)setPasscodeLock:(id)arg1 statusCode:(long long*)arg2 ;
-(void)sendDeviceIdentity:(BOOL)arg1 ;
-(void)ackIdentityCommand:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)alertActionInfoForAction:(id)arg1 andURL:(id)arg2 ;
-(void)setPendingSecureMessage:(FMAlert *)arg1 ;
-(void)registerDeviceWithCause:(id)arg1 force:(BOOL)arg2 ;
-(void)ackLostCommand:(id)arg1 withStatus:(long long)arg2 andLocationServicesStateChanged:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setIdentity_wait_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDevice_unlock_actions_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLockStateNotifyToken:(int)arg1 ;
-(void)checkShutdownSoonRegistration;
-(void)_fmipStateChangeLocalNotification:(id)arg1 ;
-(void)syncFMIPStateToWatch;
-(void)_checkForBuddyCompletionAndReinitialize:(BOOL)arg1 ;
-(void)_showUnregisterDeviceErrorForResponseError:(long long)arg1 inContext:(unsigned long long)arg2 ;
-(void)setLocationTracker:(FMDLocationTracker *)arg1 ;
-(void)registerCommonNotifications;
-(void)deregisterCommonNotifications;
-(void)stopMonitoringPendingDeviceIdentity;
-(NSString *)deviceIdentityPendingXpcTransactionName;
-(void)setDeviceIdentityPendingXpcTransactionName:(NSString *)arg1 ;
-(void)lostModeDisabled:(id)arg1 ;
-(void)systemShutdownSoon:(id)arg1 ;
-(void)locationServiceAuthorizationChanged:(id)arg1 ;
-(id)reasonForStartupRegister;
-(void)_cleanupFMIPPreferences;
-(void)accountAdded;
-(void)unregisterDevice;
-(void)setIdentityV3Version:(BOOL)arg1 ;
-(BOOL)isMonitoringPendingDeviceIdentity;
-(void)sendDeviceIdentityIfEligible;
-(void)tryToFetchAuthToken;
-(BOOL)identityV3Version;
-(void)sendQueueCheckRequest:(id)arg1 ;
-(void)_showPairedDeviceDisableFMIPErrorForResponseError:(long long)arg1 ;
-(void)_showMarkAsMissingErrorForResponseError:(long long)arg1 ;
-(id)_constructNonVolatileFullDeviceInfo;
-(id)_constructVolatileFullDeviceInfo;
-(void)_updateToHomescreenAlerts;
-(NSObject*<OS_dispatch_queue>)device_unlock_actions_queue;
-(FMAlert *)pendingSecureMessage;
-(FMAlert *)pendingLocateAlert;
-(int)lockStateNotifyToken;
-(void)_showPendingHomescreenAlertNow;
-(void)setPendingLocateAlert:(FMAlert *)arg1 ;
-(void)recordLocation:(id)arg1 ofType:(unsigned char)arg2 ;
-(BOOL)waitingForBuddy;
-(void)setWaitingForBuddy:(BOOL)arg1 ;
-(void)buddyDidComplete:(id)arg1 ;
-(NSTimer *)buddyWaitTimer;
-(void)_buddyCompletionCheckTimerFired:(id)arg1 ;
-(void)setBuddyWaitTimer:(NSTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)identity_wait_queue;
-(void)_serialQueue_sendDeviceIdentityIfEligible;
-(void)_enqueueIdentityOperation:(/*^block*/id)arg1 ;
-(BOOL)_canSendDeviceIdentityNow;
-(void)_sendDeviceIdentityNow;
-(void)monitorAndSendDeviceIdentityLater;
-(void)setIsMonitoringPendingDeviceIdentity:(BOOL)arg1 ;
-(void)setPendingDeviceIdentityMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(BKSApplicationStateMonitor *)pendingDeviceIdentityMonitor;
-(void)checkAndSendPendingDeviceIdentity;
-(void)_serialQueue_checkAndSendPendingDeviceIdentity;
-(void)sendTrackedLocations:(id)arg1 withCurrentLocation:(id)arg2 ;
-(void)didAddNewTrackedLocation:(id)arg1 ;
-(id)newLocationManager;
-(BOOL)willMakeProviderActive;
-(void)didMakeProviderActive;
-(void)willMakeProviderInactive;
-(BOOL)isProviderEnabledForLocations;
-(id)commandHandlers;
-(id)machineId;
-(void)accountRemoveRequested;
-(void)performWipe;
-(void)registerDidSucceed;
-(void)disableFMIPForPairedDeviceWithUDID:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)markPairedDeviceWithUdid:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)sendLostModeExitAuthWithToken:(id)arg1 ;
-(id)serviceName;
-(id)init;
-(void)start;
-(id)accountStore;
-(unsigned long long)fmipState;
-(void)_deviceDidPair:(id)arg1 ;
-(void)_deviceDidUnpair:(id)arg1 ;
@end
