/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerPersisterDelegate.h>

@protocol OS_dispatch_queue, NSObjectNSCopying;
@class NSObject, NSArray, NSHashTable, MSPContainerPersister, NSCountedSet, NSMutableSet, NSMutableArray, NSString;

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _immutableObjects;
	NSHashTable* _observers;
	MSPContainerPersister* _persister;
	NSCountedSet* _editCoalescingContexts;
	BOOL _isCommittingEnqueuedEdits;
	id<NSObject><NSCopying> _contextCoalescingFor;
	BOOL _coalescedEditsNeedEntireContents;
	NSMutableSet* _coalescedPartialContentIdentifiersToFetch;
	NSMutableArray* _enqueuedCoalescingEditBarrierBlocks;
	NSMutableArray* _enqueuedCoalescingCompletionBlocks;
	BOOL _hasScheduledDelayedCommitForCoalescedEdits;
	BOOL _preventsAssertionsForDuplicateStorageIdentifiers;

}

@property (nonatomic,readonly) MSPContainerPersister * persister;                                         //@synthesize persister=_persister - In the implementation block
@property (getter=_accessQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue; 
@property (nonatomic,readonly) BOOL _preventsAssertionsForDuplicateStorageIdentifiers;                    //@synthesize preventsAssertionsForDuplicateStorageIdentifiers=_preventsAssertionsForDuplicateStorageIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_accessQueue;
-(void)_endCoalescingEditsForContext:(id)arg1 ;
-(void)coalesceEditsForContext:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(void)persisterContentsDidChangeExternally:(id)arg1 ;
-(id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg1 ;
-(id)initWithPersister:(id)arg1 ;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)beginCoalescingEditsWithContext:(id)arg1 ;
-(MSPContainerPersister *)persister;
-(BOOL)_preventsAssertionsForDuplicateStorageIdentifiers;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessContentsUsingConcurrentBlock:(/*^block*/id)arg1 ;
-(void)_commitPendingCoalescedEditsIfAny;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_processedContentsForPersisterContents:(id)arg1 ;
-(BOOL)_checkAndAddCoalescedEditForContext:(id)arg1 identifiers:(id)arg2 enqueuedBlock:(/*^block*/id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

