/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDQueryServerDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDActiveWorkoutServerDelegate.h>
#import <libobjc.A.dylib/HDProcessStateObserver.h>
#import <libobjc.A.dylib/HDUnitPreferencesManagerObserver.h>
#import <libobjc.A.dylib/HDServer.h>

@protocol OS_dispatch_queue;
@class HDIdentifierTable, NSMutableDictionary, NSMutableSet, NSString, HDDaemon, HDClient, HDDataCollectionManager, HDDatabase, HDHealthServiceManager, HDDataManager, HDAuthorizationServer, NSObject;

@interface HDServer : NSObject <HDQueryServerDelegate, HDDiagnosticObject, HDActiveWorkoutServerDelegate, HDProcessStateObserver, HDUnitPreferencesManagerObserver, HDServer> {

	HDIdentifierTable* _healthServiceDiscoveryServerIDs;
	NSMutableDictionary* _healthServiceDiscoveryClientIDs;
	HDIdentifierTable* _healthDeviceSessionServerIDs;
	NSMutableDictionary* _healthServiceSessionClientIDs;
	NSMutableSet* _healthServiceClosedSessionServerIDs;
	NSMutableSet* _healthServiceClosedSessionClientIDs;
	NSMutableDictionary* _queryServersByUUID;
	NSMutableDictionary* _workoutServersByUUID;
	NSMutableSet* _processStateObservingQueryServerUUIDs;
	BOOL _processStateSuspended;
	NSString* _clientVersion;
	HDDaemon* _daemon;
	HDClient* _client;
	HDDataCollectionManager* _dataCollectMgr;
	HDDatabase* _database;
	HDHealthServiceManager* _healthServiceManager;
	HDDataManager* _dataMgr;
	HDAuthorizationServer* _authorizationServer;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _serverID;
	NSString* _clientDebuggingIdentifier;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;                                   //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) HDClient * client;                                          //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) HDDataCollectionManager * dataCollectMgr;                   //@synthesize dataCollectMgr=_dataCollectMgr - In the implementation block
@property (nonatomic,retain) HDDatabase * database;                                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) HDHealthServiceManager * healthServiceManager;              //@synthesize healthServiceManager=_healthServiceManager - In the implementation block
@property (nonatomic,retain) HDDataManager * dataMgr;                                    //@synthesize dataMgr=_dataMgr - In the implementation block
@property (nonatomic,retain) HDAuthorizationServer * authorizationServer;                //@synthesize authorizationServer=_authorizationServer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * serverID;                                        //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSString * clientDebuggingIdentifier;                       //@synthesize clientDebuggingIdentifier=_clientDebuggingIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverWithClient:(id)arg1 healthDaemon:(id)arg2 ;
+(BOOL)_isDeviceSupportedWithError:(id*)arg1 ;
+(BOOL)_isClientEntitled:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setClient:(HDClient *)arg1 ;
-(HDDatabase *)database;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDDaemon *)daemon;
-(BOOL)hasActiveWorkouts;
-(id)firstPartyWorkoutSnapshot;
-(void)pauseActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)nukeActiveWorkoutServers;
-(void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4 ;
-(void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2 ;
-(void)setDebuggingIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)authorizationStatusForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleAuthorizationForExtensionWithCompletion:(/*^block*/id)arg1 ;
-(void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)endAuthorizationDelegateTransactionWithError:(id)arg1 ;
-(void)startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)saveDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)deleteDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_remote_fetchAllDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)hasAnyActiveWorkouts:(/*^block*/id)arg1 ;
-(void)getFirstPartyWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachWorkoutServerWithClient:(id)arg1 workoutConfiguration:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)associateSamplesWithUUIDs:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startWorkoutSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopWorkoutSessionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)hasSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)orderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)currentlyPairedWatchIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)_remote_fetchDataTypesForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_remote_fetchDataTypesForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteObjectsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)beginBluetoothStatusUpdates:(/*^block*/id)arg1 ;
-(void)endBluetoothStatusUpdates;
-(void)startHealthServiceDiscovery:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endHealthServiceDiscovery:(unsigned long long)arg1 ;
-(void)startHealthServiceSession:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endHealthServiceSession:(unsigned long long)arg1 ;
-(void)getHealthServicePairingsWithHandler:(/*^block*/id)arg1 ;
-(void)addPairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removePairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getSupportedPropertyNamesWithHandler:(/*^block*/id)arg1 ;
-(void)getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removePeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getDefaultForKey:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setDefaultValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeDefaultForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_getHealthLiteValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)getDatabaseSizeInBytesWithCompletion:(/*^block*/id)arg1 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)submitMetricsIgnoringAnchor:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopFakingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDiagnosticsWithKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createBluetoothSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)dropEntitlement:(id)arg1 ;
-(void)restoreEntitlement:(id)arg1 ;
-(void)registerKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)diagnosticDescription;
-(void)processSuspended:(id)arg1 ;
-(void)processResumed:(id)arg1 ;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1 ;
-(HDHealthServiceManager *)healthServiceManager;
-(void)setDatabase:(HDDatabase *)arg1 ;
-(HDDataCollectionManager *)dataCollectMgr;
-(void)setDataCollectMgr:(HDDataCollectionManager *)arg1 ;
-(HDDataManager *)dataMgr;
-(void)setDataMgr:(HDDataManager *)arg1 ;
-(BOOL)queryServerShouldObserveInBackground:(id)arg1 ;
-(id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2 ;
-(void)setHealthServiceManager:(HDHealthServiceManager *)arg1 ;
-(void)workoutServerDidDeactivate:(id)arg1 ;
-(void)queryServerDidStartDataCollection:(id)arg1 ;
-(void)queryServerDidFinish:(id)arg1 ;
-(void)queryServerDidStopDataCollection:(id)arg1 ;
-(BOOL)queryServer:(id)arg1 isAuthorizedToReadType:(id)arg2 withRestrictedSourceIdentifier:(id*)arg3 authorizationAnchor:(id*)arg4 ;
-(BOOL)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id*)arg3 ;
-(id)initWithClient:(id)arg1 healthDaemon:(id)arg2 ;
-(void)_queue_deactivateWorkoutServerWithUUID:(id)arg1 ;
-(void)_requireEntitlement:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_openAppForAuthorizationForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_authorizationPromptHandler;
-(id)_sourceForClient:(id)arg1 error:(id*)arg2 ;
-(id)_clientRemoteObjectProxy;
-(void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 shouldJournal:(BOOL)arg4 error:(id*)arg5 ;
-(id)_objectsToInsertWithObjects:(id)arg1 error:(id*)arg2 ;
-(void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2 ;
-(void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)_clientHasUtilityEntitlementWithError:(id*)arg1 ;
-(void)_requirePrivateHealthKitEntitlementUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_startQueryServer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queue_registerForProcessStateUpdatesWithUUID:(id)arg1 ;
-(/*^block*/id)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_unregisterFromProcessStateUpdatesWithUUID:(id)arg1 ;
-(BOOL)_hasMedicalIDDataAccess;
-(void)_performIfAuthorizedForMedicalID:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_healthDeviceClientDiscoveryIdentifier:(unsigned long long)arg1 ;
-(void)_closeDiscoveryBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2 ;
-(unsigned long long)_discoveryServerIdentifierForClientIdentifier:(unsigned long long)arg1 ;
-(BOOL)_isServerSessionValid:(unsigned long long)arg1 ;
-(unsigned long long)_healthDeviceClientSessionIdentifier:(unsigned long long)arg1 ;
-(void)_closeSessionBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2 ;
-(BOOL)_isClientSessionValid:(unsigned long long)arg1 ;
-(unsigned long long)_sessionServerIdentifierForClientIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)_sessionClientIdentifierForServerIdentifier:(unsigned long long)arg1 ;
-(BOOL)_clientHasPrivateHealthKitEntitlementWithError:(id*)arg1 ;
-(HDAuthorizationServer *)authorizationServer;
-(void)setAuthorizationServer:(HDAuthorizationServer *)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)clientDebuggingIdentifier;
-(void)setClientDebuggingIdentifier:(NSString *)arg1 ;
-(HDClient *)client;
@end

