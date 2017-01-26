/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:09:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <storebookkeeperd/SBDDomainServiceHandler.h>
#import <libobjc.A.dylib/SBCDomainSyncServiceProtocol_Internal.h>
#import <storebookkeeperd/SBDDomainSyncedStorageObserver.h>
#import <libobjc.A.dylib/SBCDomainSyncServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, SBDDomainSyncedStorageController, NSString;

@interface SBDDomainSyncServiceHandler : SBDDomainServiceHandler <SBCDomainSyncServiceProtocol_Internal, SBDDomainSyncedStorageObserver, SBCDomainSyncServiceProtocol> {

	BOOL _hasChangesToPush;
	BOOL _isActive;
	NSObject*<OS_dispatch_queue> _queue;
	SBDDomainSyncedStorageController* _syncedStorageController;
	double _preferredSynchronizeInterval;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SBDDomainSyncedStorageController * syncedStorageController;              //@synthesize syncedStorageController=_syncedStorageController - In the implementation block
@property (nonatomic,readonly) double preferredSynchronizeInterval;                                     //@synthesize preferredSynchronizeInterval=_preferredSynchronizeInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasChangesToPush;                                                   //@synthesize hasChangesToPush=_hasChangesToPush - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                                           //@synthesize isActive=_isActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateSystemSyncHandlersWithBlock:(/*^block*/id)arg1 ;
+(id)_sharedSystemSyncHandlers;
-(void)synchronizeIfNeedsInitialSynchronization;
-(id)lastSynchronizedAccountIdentifier;
-(id)lastSynchronizationFailureAccountIdentifier;
-(void)synchronizeForChangedAccountByResetInvalidatingLocalChanges:(BOOL)arg1 ;
-(void)synchronizeForChangedAccountStatus;
-(void)synchronizeForUpdatedRemoteDomainVersion:(id)arg1 ;
-(void)bookkeeperStorageControllerDidSync:(id)arg1 ;
-(void)_onQueueSynchronizeWithInterval:(double)arg1 isCheckpoint:(BOOL)arg2 ;
-(void)_onQueue_clearHasChanges;
-(oneway void)synchronizeImmediately;
-(SBDDomainSyncedStorageController *)syncedStorageController;
-(double)preferredSynchronizeInterval;
-(BOOL)hasChangesToPush;
-(void)dealloc;
-(BOOL)isActive;
-(id)initWithDomain:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(oneway void)deletePlaybackPositionEntity:(id)arg1 ;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1 ;
-(oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2 ;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)deletePlaybackPositionEntities;
@end

