/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSCloudHistoryThrottlerDataStore.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, WBSCloudHistoryConfiguration, WBSCloudHistoryStore, WBSCloudHistoryThrottler, NSTimer, WBSCloudHistoryPushAgentProxy, NSMutableDictionary, NSString;

@interface WBSCloudHistory : NSObject <WBSCloudHistoryThrottlerDataStore> {

	NSObject*<OS_dispatch_queue> _cloudHistoryQueue;
	BOOL _cloudHistoryEnabled;
	BOOL _saveChangesWhenHistoryLoads;
	BOOL _fetchChangesWhenHistoryLoads;
	id<NSObject> _historyWasLoadedObserver;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _saveOperationSuddenTerminationDisabler;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _fetchOperationSuddenTerminationDisabler;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _replayLongLivedSaveOperationSuddenTerminationDisabler;
	BOOL _removedHistoryItemsArePendingSave;
	BOOL _replayLongLivedSaveOperationHasBeenPerformed;
	WBSCloudHistoryConfiguration* _configuration;
	WBSCloudHistoryStore* _store;
	WBSCloudHistoryThrottler* _saveChangesThrottler;
	WBSCloudHistoryThrottler* _fetchChangesThrottler;
	WBSCloudHistoryThrottler* _syncCircleSizeRetrievalThrottler;
	NSTimer* _serverBackoffTimer;
	BOOL _saveChangesWhenBackoffTimerFires;
	BOOL _fetchChangesWhenBackoffTimerFires;
	WBSCloudHistoryPushAgentProxy* _pushAgent;
	NSTimer* _pushNotificationFetchTimer;
	unsigned long long _numberOfDevicesInSyncCircle;
	NSMutableDictionary* _syncCircleSizeRetrievalCompletionHandlersByOperation;

}

@property (assign,getter=isCloudHistoryEnabled,nonatomic) BOOL cloudHistoryEnabled; 
@property (assign,nonatomic) unsigned long long numberOfDevicesInSyncCircle;                     //@synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_currentSaveChangesThrottlerPolicyString;
-(id)_currentFetchChangesThrottlerPolicyString;
-(id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
-(void)_replayPersistedLongLivedSaveOperationIfNecessary;
-(void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
-(void)_initializePushNotificationSupport;
-(void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(void)_cloudHistoryConfigurationChanged:(id)arg1 ;
-(void)_pushNotificationReceived:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_saveChangesToCloudHistoryStoreBypassingThrottler:(BOOL)arg1 ;
-(void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)arg1 ;
-(BOOL)isCloudHistoryEnabled;
-(void)_saveChangesWhenHistoryLoads;
-(void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2 ;
-(void)_removePersistedLongLivedSaveOperationDictionary;
-(double)_backoffTimeIntervalFromError:(id)arg1 ;
-(void)_backOffWithInterval:(double)arg1 ;
-(void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(BOOL)arg3 longLivedOperationPersistenceCompletion:(/*^block*/id)arg4 withCallback:(/*^block*/id)arg5 ;
-(long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(BOOL)arg3 ;
-(long long)_resultFromError:(id)arg1 ;
-(long long)_estimatedPriorityForPotentialSaveAttempt;
-(void)_fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 ;
-(void)_fetchChangesWhenHistoryLoads;
-(void)fetchAndMergeChanges;
-(void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2 withPriority:(long long)arg3 ;
-(void)_processPendingPushNotifications;
-(void)_persistedLongLivedSaveOperationID:(id*)arg1 databaseGeneration:(long long*)arg2 ;
-(void)_updateDeviceCountInResponseToPushNotification;
-(void)_fetchChangesInResponseToPushNotification:(id)arg1 ;
-(unsigned long long)_cachedNumberOfDevicesInSyncCircle;
-(void)setNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)_registerForHistoryWasLoadedNotificationIfNecessary;
-(void)_historyWasLoaded:(id)arg1 ;
-(void)saveChangesToCloudHistoryStore;
-(void)_serverBackoffTimerFired:(id)arg1 ;
-(void)_updateThrottlerPolicies;
-(void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(id)recordOfPastOperationsForThrottler:(id)arg1 ;
-(void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2 ;
-(void)setCloudHistoryEnabled:(BOOL)arg1 ;
-(void)saveChangesToCloudHistoryStoreBypassingThrottler;
-(id)dateOfNextPermittedSaveChangesAttempt;
-(void)fetchAndMergeChangesBypassingThrottler;
-(void)resetForAccountChange;
-(unsigned long long)numberOfDevicesInSyncCircle;
@end

