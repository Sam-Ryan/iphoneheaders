/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <useractivityd/SFActivityScannerDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class UAUserActivityClientProcessesController, NSXPCListener, NSDate, NSMutableDictionary, SFActivityAdvertiser, SFActivityScanner, NSMutableSet, NSUserDefaults, NSObject, NSString, UAAdvertisableItem, NSData, CornerActionBTLEItem, BluetoothManager, UAUserActivityInfo, NSMutableArray, UAPingResults, NSTimer, NSSet;

@interface UACornerActionManager : NSObject <NSXPCListenerDelegate, SFActivityScannerDelegate> {

	BOOL _suspended;
	UAUserActivityClientProcessesController* _userActivityClientsController;
	NSXPCListener* _bestAppsListener;
	NSDate* _creationTime;
	NSMutableDictionary* _advertiseableItemsByUUID;
	SFActivityAdvertiser* _advertiser;
	NSMutableDictionary* _cornerActionItemsByUUID;
	SFActivityScanner* _scanner;
	NSMutableDictionary* _otherMachineTimeDeltasToOurs;
	NSMutableSet* _activeDevicesIdentifiers;
	NSMutableSet* _bestAppChangeNotificationsSet;
	NSUserDefaults* _userDefaults;
	int _managedSettingsChangedNotificationToken;
	NSObject*<OS_dispatch_group> _helpersDispatchGroup;
	int _systemIdleActivityNotificationToken;
	double _systemIdlePreviousTimeSinceLastUserActivity;
	BOOL _isBluetoothEnabled;
	BOOL _backlightOn;
	BOOL _batterySaverModeEnabled;
	BOOL _idleActivityNotificationHasBeenSuspended;
	BOOL _systemHasSuspendedAdvertisements;
	BOOL _screenSaverActive;
	BOOL _deviceUILocked;
	BOOL _screenDimmed;
	BOOL _systemIsIdle;
	BOOL _pingMode;
	int _backlightLevelToken;
	int _batterySaverModeToken;
	unsigned _holdPowerAssertion;
	int _systemPreferenceChangedToken;
	int _uiLockStatusToken;
	NSString* _managerIdentifier;
	UAAdvertisableItem* nextItemToBeAdvertised;
	UAAdvertisableItem* currentAdvertisedItem;
	NSMutableDictionary* currentAdvertisedItemOtherAdvertisedBytes;
	NSDate* _screenSaverDeferredTime;
	NSDate* _lastAdvertismentTime;
	double _lastAdvertismentUserIdleTime;
	NSData* _lastAdvertisementBytes;
	NSDate* _lastTimePayloadWasRequestedForAdvertisedItem;
	CornerActionBTLEItem* _lastReceivedAdvertisementItem;
	NSMutableDictionary* _devicesAndActivityTimes;
	unsigned long long _pickAdvertisementThreadSpinCount;
	unsigned long long _changeAdvertisementThreadSpinCount;
	unsigned long long _updateSystemIdleThreadSpinCount;
	unsigned long long _checkForBestAppChangedThreadSpinCount;
	BluetoothManager* bluetoothManager;
	UAUserActivityInfo* _pinnedUserActivityInfo;
	NSObject*<OS_dispatch_queue> _mainDispatchQ;
	NSMutableArray* _advertisementTimes;
	NSObject*<OS_dispatch_source> _nextPickAdvertisementSource;
	NSDate* _nextPickAdvertisementTime;
	NSObject*<OS_dispatch_source> _nextUpdateAdvertisementSource;
	NSDate* _nextUpdateAdvertisementTime;
	NSObject*<OS_dispatch_source> _nextUserIdleDeterminationSource;
	NSDate* _nextDetermineUserIdleTime;
	NSObject*<OS_dispatch_source> _nextBestApplicationNotificationSource;
	NSDate* _nextBestApplicationNotificationTime;
	NSDate* _deviceLockedDeferredTime;
	NSDate* _screenDimDeferredTime;
	UAAdvertisableItem* _pinnedAdvertisableItem;
	NSDate* _holdPowerAssertionUntil;
	NSObject*<OS_dispatch_source> _holdPowerAssertionSourceTimer;
	NSDate* _dontAdvertiseAsCurrentUntil;
	double _currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow;
	double _avgPingTime;
	NSDate* _pingStart;
	NSObject*<OS_dispatch_semaphore> _pongSem;
	UAPingResults* _pongs;
	NSTimer* _pongTimer;

}

@property (copy,readonly) NSString * managerIdentifier;                                                           //@synthesize managerIdentifier=_managerIdentifier - In the implementation block
@property (retain) SFActivityScanner * scanner;                                                                   //@synthesize scanner=_scanner - In the implementation block
@property (retain) UAAdvertisableItem * currentAdvertisedItem; 
@property (retain) UAUserActivityInfo * pinnedUserActivityInfo;                                                   //@synthesize pinnedUserActivityInfo=_pinnedUserActivityInfo - In the implementation block
@property (readonly) NSSet * activeDevicesIdentifiers; 
@property (retain,readonly) UAUserActivityClientProcessesController * userActivityClientsController;              //@synthesize userActivityClientsController=_userActivityClientsController - In the implementation block
@property (copy) NSDate * lastTimePayloadWasRequestedForAdvertisedItem;                                           //@synthesize lastTimePayloadWasRequestedForAdvertisedItem=_lastTimePayloadWasRequestedForAdvertisedItem - In the implementation block
@property (retain,readonly) NSUserDefaults * userDefaults;                                                        //@synthesize userDefaults=_userDefaults - In the implementation block
@property (getter=isBatterySaverModeEnabled,readonly) BOOL batterySaverModeEnabled;                               //@synthesize batterySaverModeEnabled=_batterySaverModeEnabled - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mainDispatchQ;                                                    //@synthesize mainDispatchQ=_mainDispatchQ - In the implementation block
@property (copy,readonly) NSMutableSet * bestAppChangeNotificationsSet; 
@property (retain) UAAdvertisableItem * nextItemToBeAdvertised; 
@property (retain) SFActivityAdvertiser * advertiser;                                                             //@synthesize advertiser=_advertiser - In the implementation block
@property (retain) NSDate * lastAdvertismentTime;                                                                 //@synthesize lastAdvertismentTime=_lastAdvertismentTime - In the implementation block
@property (retain) NSMutableArray * advertisementTimes;                                                           //@synthesize advertisementTimes=_advertisementTimes - In the implementation block
@property (assign) double lastAdvertismentUserIdleTime;                                                           //@synthesize lastAdvertismentUserIdleTime=_lastAdvertismentUserIdleTime - In the implementation block
@property (retain) NSData * lastAdvertisementBytes;                                                               //@synthesize lastAdvertisementBytes=_lastAdvertisementBytes - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> nextPickAdvertisementSource;                                     //@synthesize nextPickAdvertisementSource=_nextPickAdvertisementSource - In the implementation block
@property (retain) NSDate * nextPickAdvertisementTime;                                                            //@synthesize nextPickAdvertisementTime=_nextPickAdvertisementTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> nextUpdateAdvertisementSource;                                   //@synthesize nextUpdateAdvertisementSource=_nextUpdateAdvertisementSource - In the implementation block
@property (retain) NSDate * nextUpdateAdvertisementTime;                                                          //@synthesize nextUpdateAdvertisementTime=_nextUpdateAdvertisementTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> nextUserIdleDeterminationSource;                                 //@synthesize nextUserIdleDeterminationSource=_nextUserIdleDeterminationSource - In the implementation block
@property (retain) NSDate * nextDetermineUserIdleTime;                                                            //@synthesize nextDetermineUserIdleTime=_nextDetermineUserIdleTime - In the implementation block
@property (assign) BOOL idleActivityNotificationHasBeenSuspended;                                                 //@synthesize idleActivityNotificationHasBeenSuspended=_idleActivityNotificationHasBeenSuspended - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> nextBestApplicationNotificationSource;                           //@synthesize nextBestApplicationNotificationSource=_nextBestApplicationNotificationSource - In the implementation block
@property (retain) NSDate * nextBestApplicationNotificationTime;                                                  //@synthesize nextBestApplicationNotificationTime=_nextBestApplicationNotificationTime - In the implementation block
@property (assign) BOOL systemHasSuspendedAdvertisements;                                                         //@synthesize systemHasSuspendedAdvertisements=_systemHasSuspendedAdvertisements - In the implementation block
@property (assign) BOOL screenSaverActive;                                                                        //@synthesize screenSaverActive=_screenSaverActive - In the implementation block
@property (retain) NSDate * screenSaverDeferredTime;                                                              //@synthesize screenSaverDeferredTime=_screenSaverDeferredTime - In the implementation block
@property (retain) NSDate * deviceLockedDeferredTime;                                                             //@synthesize deviceLockedDeferredTime=_deviceLockedDeferredTime - In the implementation block
@property (assign) BOOL deviceUILocked;                                                                           //@synthesize deviceUILocked=_deviceUILocked - In the implementation block
@property (retain) NSDate * screenDimDeferredTime;                                                                //@synthesize screenDimDeferredTime=_screenDimDeferredTime - In the implementation block
@property (assign) BOOL screenDimmed;                                                                             //@synthesize screenDimmed=_screenDimmed - In the implementation block
@property (retain) UAAdvertisableItem * pinnedAdvertisableItem;                                                   //@synthesize pinnedAdvertisableItem=_pinnedAdvertisableItem - In the implementation block
@property (getter=isBacklightOn) BOOL backlightOn;                                                                //@synthesize backlightOn=_backlightOn - In the implementation block
@property (assign) int backlightLevelToken;                                                                       //@synthesize backlightLevelToken=_backlightLevelToken - In the implementation block
@property (assign) int batterySaverModeToken;                                                                     //@synthesize batterySaverModeToken=_batterySaverModeToken - In the implementation block
@property (retain) NSDate * holdPowerAssertionUntil;                                                              //@synthesize holdPowerAssertionUntil=_holdPowerAssertionUntil - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> holdPowerAssertionSourceTimer;                                   //@synthesize holdPowerAssertionSourceTimer=_holdPowerAssertionSourceTimer - In the implementation block
@property (assign) unsigned holdPowerAssertion;                                                                   //@synthesize holdPowerAssertion=_holdPowerAssertion - In the implementation block
@property (assign) BOOL systemIsIdle;                                                                             //@synthesize systemIsIdle=_systemIsIdle - In the implementation block
@property (retain) BluetoothManager * bluetoothManager; 
@property (retain) NSDate * dontAdvertiseAsCurrentUntil;                                                          //@synthesize dontAdvertiseAsCurrentUntil=_dontAdvertiseAsCurrentUntil - In the implementation block
@property (assign) double currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow;                         //@synthesize currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow=_currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow - In the implementation block
@property (retain) NSMutableDictionary * currentAdvertisedItemOtherAdvertisedBytes; 
@property (assign) int systemPreferenceChangedToken;                                                              //@synthesize systemPreferenceChangedToken=_systemPreferenceChangedToken - In the implementation block
@property (assign) int uiLockStatusToken;                                                                         //@synthesize uiLockStatusToken=_uiLockStatusToken - In the implementation block
@property (retain) NSMutableDictionary * devicesAndActivityTimes;                                                 //@synthesize devicesAndActivityTimes=_devicesAndActivityTimes - In the implementation block
@property (assign) unsigned long long pickAdvertisementThreadSpinCount;                                           //@synthesize pickAdvertisementThreadSpinCount=_pickAdvertisementThreadSpinCount - In the implementation block
@property (assign) unsigned long long changeAdvertisementThreadSpinCount;                                         //@synthesize changeAdvertisementThreadSpinCount=_changeAdvertisementThreadSpinCount - In the implementation block
@property (assign) unsigned long long updateSystemIdleThreadSpinCount;                                            //@synthesize updateSystemIdleThreadSpinCount=_updateSystemIdleThreadSpinCount - In the implementation block
@property (assign) unsigned long long checkForBestAppChangedThreadSpinCount;                                      //@synthesize checkForBestAppChangedThreadSpinCount=_checkForBestAppChangedThreadSpinCount - In the implementation block
@property (retain) CornerActionBTLEItem * lastReceivedAdvertisementItem;                                          //@synthesize lastReceivedAdvertisementItem=_lastReceivedAdvertisementItem - In the implementation block
@property (assign) BOOL pingMode;                                                                                 //@synthesize pingMode=_pingMode - In the implementation block
@property (assign) double avgPingTime;                                                                            //@synthesize avgPingTime=_avgPingTime - In the implementation block
@property (retain) NSDate * pingStart;                                                                            //@synthesize pingStart=_pingStart - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> pongSem;                                                      //@synthesize pongSem=_pongSem - In the implementation block
@property (retain) UAPingResults * pongs;                                                                         //@synthesize pongs=_pongs - In the implementation block
@property (retain) NSTimer * pongTimer;                                                                           //@synthesize pongTimer=_pongTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cornerActionManager;
+(id)sharedActivityManagerServer;
-(id)cornerActionItemDefaults;
-(BOOL)activityAdvertisingAllowed;
-(double)userIdleInterval;
-(double)systemIdleDelayBeforeRemovingAdvertisements;
-(double)activePayloadUpdateInterval;
-(double)intervalToAskClientWithUnsynchronizedDocumentsToUpdate;
-(double)minimumIntervalBetweenAdvertisements;
-(double)maximumAdvertisementsTimeInterval;
-(long long)maximumAdvertisementsPerTimeInterval;
-(double)advertisedItemWhichIsWebBrowserIntervalToRememberEarlierActivities;
-(double)screenSaverDelayToRemovingAdvertisements;
-(long long)debugUserActivityTimeOffset;
-(BOOL)debugEnablePinging;
-(long long)maximumActivityPayloadSizeInBytes;
-(long long)debugValidateSampleResponseMinimumActivityPayloadSizeInBytes;
-(long long)debugValidateSampleResponseMaximumActivityPayloadSizeInBytes;
-(double)maximumTimeoutAfterAdvertisingEndsThatActivityCanBeResumed;
-(double)maximumTimeoutToWaitForClientProcessToUpdateActivityInformation;
-(BOOL)debugForceNewPayloadEncoder;
-(BOOL)debugForceOldPayloadEncoder;
-(BOOL)dontSendActivityTitle;
-(long long)activityPayloadWarningSizeInBytes;
-(BOOL)debugReadvertiseImmediately;
-(BOOL)activityReceivingAllowed;
-(double)cornerActionItemTimeout;
-(double)screenDimDelayBeforeRemovingAdvertisements;
-(BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2 ;
-(double)timeIntervalForKey:(id)arg1 default:(double)arg2 ;
-(long long)integerValueForKey:(id)arg1 default:(long long)arg2 ;
-(BOOL)activityContinuationAllowed;
-(double)deviceLockDelayBeforeRemovingAdvertisements;
-(double)cornerActionItemSupressionInterval;
-(double)cornerActionItemAdditionalTimeToLiveAfterValidIntervalExpires;
-(double)cornerActionItemMaximumTimeForBTLEItemToLive;
-(double)debugValidatePayloadFetchTimeInterval;
-(double)debugValidateRetryPayloadFetchFailureInterval;
-(NSObject*<OS_dispatch_queue>)mainDispatchQ;
-(void)foundDevice:(id)arg1 ;
-(void)lostDevice:(id)arg1 ;
-(id)cornerActionItemsForDeviceIdentifier:(id)arg1 ;
-(void)removeCornerActionItem:(id)arg1 ;
-(void)setMainDispatchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceUILocked:(BOOL)arg1 ;
-(void)setAdvertisementTimes:(NSMutableArray *)arg1 ;
-(UAAdvertisableItem *)currentAdvertisedItem;
-(UAAdvertisableItem *)nextItemToBeAdvertised;
-(void)userActivityItemsChanged;
-(UAAdvertisableItem *)pinnedAdvertisableItem;
-(void)setPinnedAdvertisableItem:(UAAdvertisableItem *)arg1 ;
-(id)cornerActionItemForUUID:(id)arg1 ;
-(NSData *)lastAdvertisementBytes;
-(void)triggerUpdateAdvertisement;
-(void)triggerPickingNewAdvertisedItem;
-(void)triggerPickingNewAdvertisedItem:(double)arg1 ;
-(NSObject*<OS_dispatch_source>)nextPickAdvertisementSource;
-(void)setNextPickAdvertisementSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setNextPickAdvertisementTime:(NSDate *)arg1 ;
-(void)_determineItemToAdvertiseForHandoffThread;
-(NSDate *)nextPickAdvertisementTime;
-(id)advertiseableItems;
-(UAUserActivityClientProcessesController *)userActivityClientsController;
-(id)uaAdvertisableItemsInOrder;
-(unsigned long long)pickAdvertisementThreadSpinCount;
-(void)setPickAdvertisementThreadSpinCount:(unsigned long long)arg1 ;
-(id)determineItemToAdvertiseForHandoff;
-(void)setNextItemToBeAdvertised:(UAAdvertisableItem *)arg1 ;
-(void)setCurrentAdvertisedItemOtherAdvertisedBytes:(NSMutableDictionary *)arg1 ;
-(BOOL)systemHasSuspendedAdvertisements;
-(void)triggerUserIdleDetermination;
-(void)removeAdvertisement;
-(unsigned char)calculateTimeOffsetForTime:(id)arg1 userIsPresent:(BOOL)arg2 ;
-(void)triggerUpdateAdvertisement:(double)arg1 ;
-(NSDate *)nextUpdateAdvertisementTime;
-(void)setNextUpdateAdvertisementTime:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)nextUpdateAdvertisementSource;
-(void)setNextUpdateAdvertisementSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_updateAdvertisment;
-(unsigned long long)changeAdvertisementThreadSpinCount;
-(void)setChangeAdvertisementThreadSpinCount:(unsigned long long)arg1 ;
-(double)determineNumberOfSecondsSystemHasBeenIdle;
-(void)setCurrentAdvertisedItem:(UAAdvertisableItem *)arg1 ;
-(NSDate *)dontAdvertiseAsCurrentUntil;
-(void)setDontAdvertiseAsCurrentUntil:(NSDate *)arg1 ;
-(NSDate *)lastTimePayloadWasRequestedForAdvertisedItem;
-(void)setLastTimePayloadWasRequestedForAdvertisedItem:(NSDate *)arg1 ;
-(void)setCurrentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow:(double)arg1 ;
-(void)triggerUserIdleDetermination:(double)arg1 ;
-(id)calculateBytesToAdvertise:(id)arg1 isCurrent:(BOOL)arg2 idleTime:(double)arg3 ;
-(NSDate *)lastAdvertismentTime;
-(double)lastAdvertismentUserIdleTime;
-(NSMutableArray *)advertisementTimes;
-(void)setLastAdvertismentTime:(NSDate *)arg1 ;
-(void)setLastAdvertismentUserIdleTime:(double)arg1 ;
-(void)setLastAdvertisementBytes:(NSData *)arg1 ;
-(NSMutableDictionary *)currentAdvertisedItemOtherAdvertisedBytes;
-(void)setScreenSaverActive:(BOOL)arg1 ;
-(void)setScreenSaverDeferredTime:(NSDate *)arg1 ;
-(void)triggerAll;
-(NSDate *)nextDetermineUserIdleTime;
-(void)setNextDetermineUserIdleTime:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)nextUserIdleDeterminationSource;
-(void)setNextUserIdleDeterminationSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_determineWhenSystemGoesIdleThread;
-(unsigned long long)updateSystemIdleThreadSpinCount;
-(void)setUpdateSystemIdleThreadSpinCount:(unsigned long long)arg1 ;
-(double)currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow;
-(BOOL)systemIsIdle;
-(BOOL)deviceUILocked;
-(BOOL)haveAdvertiseableItem;
-(void)setDeviceLockedDeferredTime:(NSDate *)arg1 ;
-(NSDate *)deviceLockedDeferredTime;
-(void)preventSystemSleepFor:(double)arg1 ;
-(BOOL)screenSaverActive;
-(NSDate *)screenSaverDeferredTime;
-(BOOL)screenDimmed;
-(void)setScreenDimDeferredTime:(NSDate *)arg1 ;
-(NSDate *)screenDimDeferredTime;
-(BOOL)weHaveAtLeastOneItemToAdvertise;
-(void)setSystemHasSuspendedAdvertisements:(BOOL)arg1 ;
-(BOOL)idleActivityNotificationHasBeenSuspended;
-(void)setIdleActivityNotificationHasBeenSuspended:(BOOL)arg1 ;
-(NSTimer *)pongTimer;
-(void)stopPong:(id)arg1 ;
-(BOOL)peerDeviceCanAcceptNewerPayload:(id)arg1 ;
-(id)advertiseableItemForUUID:(id)arg1 ;
-(void)checkIfBestCornerItemChanged:(double)arg1 ;
-(void)respondToPing;
-(BOOL)pingMode;
-(NSDate *)pingStart;
-(void)gotPong:(id)arg1 ;
-(UAPingResults *)pongs;
-(NSSet *)activeDevicesIdentifiers;
-(void)setLastReceivedAdvertisementItem:(CornerActionBTLEItem *)arg1 ;
-(id)cornerBTLEActionItemForPayload:(id)arg1 forDevice:(id)arg2 ;
-(void)addCornerActionItem:(id)arg1 ;
-(NSMutableDictionary *)devicesAndActivityTimes;
-(id)cornerActionItems;
-(BOOL)haveBestAppChangeNotificationClients;
-(void)triggerBestApplicationNotification;
-(void)triggerBestApplicationNotification:(double)arg1 ;
-(NSDate *)nextBestApplicationNotificationTime;
-(void)setNextBestApplicationNotificationTime:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)nextBestApplicationNotificationSource;
-(void)setNextBestApplicationNotificationSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_checkIfBestApplicationChangedThread;
-(unsigned long long)checkForBestAppChangedThreadSpinCount;
-(void)setCheckForBestAppChangedThreadSpinCount:(unsigned long long)arg1 ;
-(id)bestCornerItem;
-(NSMutableSet *)bestAppChangeNotificationsSet;
-(void)notifyBestAppChanged:(id)arg1 atTime:(id)arg2 withClientConnections:(id)arg3 ;
-(void)updateForcedScanning;
-(void)setBluetoothManager:(BluetoothManager *)arg1 ;
-(void)bluetoothAvailabilityChange:(id)arg1 ;
-(int)systemPreferenceChangedToken;
-(int)uiLockStatusToken;
-(void)setUiLockStatusToken:(int)arg1 ;
-(void)suspendListeningForBluetooth;
-(NSDate *)holdPowerAssertionUntil;
-(void)setHoldPowerAssertionUntil:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)holdPowerAssertionSourceTimer;
-(void)setHoldPowerAssertionSourceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned)holdPowerAssertion;
-(void)setHoldPowerAssertion:(unsigned)arg1 ;
-(void)distributedNotificationHook:(id)arg1 ;
-(void)setScreenDimmed:(BOOL)arg1 ;
-(int)backlightLevelToken;
-(BOOL)isBacklightOn;
-(int)batterySaverModeToken;
-(void)setSystemIsIdle:(BOOL)arg1 ;
-(void)resumeListeningForBluetooth;
-(CornerActionBTLEItem *)lastReceivedAdvertisementItem;
-(id)activeAdvertiseableItemsUUIDs;
-(id)dictionaryForAdvertisableItem:(id)arg1 ;
-(id)dictionaryForCornerActionItem:(id)arg1 ;
-(UAUserActivityInfo *)pinnedUserActivityInfo;
-(void)setPongs:(UAPingResults *)arg1 ;
-(void)setPingMode:(BOOL)arg1 ;
-(id)pingData;
-(id)pongData;
-(void)setPongTimer:(NSTimer *)arg1 ;
-(void)setPingStart:(NSDate *)arg1 ;
-(void)addAdvertiseableItem:(id)arg1 ;
-(void)removeAdvertiseableItem:(id)arg1 ;
-(void)updateAdvertiseableItem:(id)arg1 ;
-(void)storeTimeDeltaForDeviceFromAdvertisementPayload:(id)arg1 forDevice:(id)arg2 ;
-(id)calculateTimeFromAdvertisementData:(id)arg1 forDevice:(id)arg2 currentUntil:(id*)arg3 validUntil:(id*)arg4 ;
-(void)updateCornerActionItem:(id)arg1 ;
-(void)removeConnector:(id)arg1 ;
-(void)registerForBestAppChangeNotification:(id)arg1 ;
-(void)unregisterForBestAppChangeNotification:(id)arg1 ;
-(id)dynamicUserActivitiesString;
-(void)broadcastPingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchCurrentPeersAndClear:(BOOL)arg1 ;
-(void)setScanner:(SFActivityScanner *)arg1 ;
-(void)setDevicesAndActivityTimes:(NSMutableDictionary *)arg1 ;
-(void)setBacklightOn:(BOOL)arg1 ;
-(void)setPinnedUserActivityInfo:(UAUserActivityInfo *)arg1 ;
-(void)setBacklightLevelToken:(int)arg1 ;
-(void)setBatterySaverModeToken:(int)arg1 ;
-(void)setSystemPreferenceChangedToken:(int)arg1 ;
-(double)avgPingTime;
-(void)setAvgPingTime:(double)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pongSem;
-(void)setPongSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)startAdvertisingPingWithTimeInterval:(double)arg1 ;
-(void)stopAdvertisingPing;
-(id)debuggingInfo;
-(NSString *)managerIdentifier;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(NSUserDefaults *)userDefaults;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)isBatterySaverModeEnabled;
-(id)statusString;
-(SFActivityScanner *)scanner;
-(BOOL)isBluetoothEnabled;
-(void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)activityAdvertiser:(id)arg1 didSendPayloadForActivityIdentifier:(id)arg2 toDevice:(id)arg3 error:(id)arg4 ;
-(void)activityScanner:(id)arg1 receivedAdvertisement:(id)arg2 ;
-(void)activityScanner:(id)arg1 foundDeviceWithDevice:(id)arg2 ;
-(void)activityScanner:(id)arg1 lostDeviceWithDevice:(id)arg2 ;
-(SFActivityAdvertiser *)advertiser;
-(void)setAdvertiser:(SFActivityAdvertiser *)arg1 ;
-(void)terminate;
-(BluetoothManager *)bluetoothManager;
@end

