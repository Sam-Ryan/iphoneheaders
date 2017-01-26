/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface CKDOperationInfoCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _cacheDelegateQueue;
	NSMapTable* _delegatesByOperationID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;                      //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheDelegateQueue;              //@synthesize cacheDelegateQueue=_cacheDelegateQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * delegatesByOperationID;                          //@synthesize delegatesByOperationID=_delegatesByOperationID - In the implementation block
+(id)sharedCache;
+(id)dbFileName;
-(id)init;
-(id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1 ;
-(void)deleteAllInfoForOperationWithID:(id)arg1 ;
-(void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 ;
-(id)outstandingOperationInfosForIDs:(id)arg1 ;
-(id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1 ;
-(void)registerAttemptForOperationWithID:(id)arg1 ;
-(id)operationInfoMetadataForOperationWithID:(id)arg1 ;
-(void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(NSObject*<OS_dispatch_queue>)cacheDelegateQueue;
-(NSMapTable *)delegatesByOperationID;
-(void)_locked_enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_lockedResultForOperationWithID:(id)arg1 ;
-(id)_locked_operationInfoForID:(id)arg1 ;
-(void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(id)resultForOperationWithID:(id)arg1 ;
-(void)enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setProgressCallbackArguments:(id)arg1 forOperationID:(id)arg2 ;
-(void)setOperationResult:(id)arg1 forOperationID:(id)arg2 ;
-(void)registerCacheEvictionActivity;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCacheDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegatesByOperationID:(NSMapTable *)arg1 ;
@end

