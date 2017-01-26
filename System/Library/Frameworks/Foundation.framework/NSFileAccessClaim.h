/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray, NSError, NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSFileAccessProcessManager;

@interface NSFileAccessClaim : NSObject {

	NSObject*<OS_xpc_object> _client;
	NSString* _claimID;
	NSString* _purposeIDOrNil;
	BOOL _cameFromSuperarbiter;
	unsigned long long _blockageCount;
	BOOL _didWait;
	BOOL _isRevoked;
	NSMutableArray* _claimerBlockageReasons;
	NSError* _claimerError;
	NSMutableOrderedSet* _pendingClaims;
	NSMutableSet* _blockingClaims;
	NSMutableSet* _blockingReactorIDs;
	NSMutableArray* _providerCancellationProcedures;
	NSMutableDictionary* _reacquisitionProceduresByPresenterID;
	NSMutableArray* _revocationProcedures;
	NSMutableArray* _devaluationProcedures;
	NSMutableArray* _finishingProcedures;
	NSFileAccessProcessManager* _processManager;
	NSObject*<OS_dispatch_semaphore> _claimerWaiter;
	BOOL _hasInvokedClaimer;
	id _claimerOrNil;
	NSMutableArray* _sandboxTokens;
	NSObject*<OS_dispatch_queue> _arbiterQueue;

}

@property (readonly) NSObject*<OS_dispatch_semaphore> claimerWaiter;              //@synthesize claimerWaiter=_claimerWaiter - In the implementation block
+(BOOL)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
+(BOOL)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
+(BOOL)readingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3 ;
+(BOOL)writingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3 ;
-(BOOL)cameFromSuperarbiter;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(id)claimID;
-(void)startObservingClientState;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)unblock;
-(void)revoked;
-(BOOL)isRevoked;
-(BOOL)isGranted;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 arbiterQueue:(id)arg3 replySender:(/*^block*/id)arg4 ;
-(void)setCameFromSuperarbiter;
-(id)pendingClaims;
-(NSObject*<OS_dispatch_semaphore>)claimerWaiter;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg1 ;
-(id)purposeID;
-(BOOL)isBlockedByClaimWithPurposeID:(id)arg1 ;
-(void)blockClaimerForReason:(id)arg1 ;
-(void)unblockClaimerForReason:(id)arg1 ;
-(void)whenDevaluedPerformProcedure:(/*^block*/id)arg1 ;
-(void)removePendingClaims:(id)arg1 ;
-(void)addPendingClaim:(id)arg1 ;
-(void)scheduleBlockedClaim:(id)arg1 ;
-(void)setClaimerError:(id)arg1 ;
-(id)claimerError;
-(BOOL)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)whenFinishedPerformProcedure:(/*^block*/id)arg1 ;
-(void)devalueSelf;
-(id)descriptionWithIndenting:(id)arg1 ;
-(BOOL)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2 ;
-(id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3 arbiterQueue:(id)arg4 ;
-(int)clientProcessIdentifier;
-(BOOL)didWait;
-(void)whenRevokedPerformProcedure:(/*^block*/id)arg1 ;
-(void)evaluateNewClaim:(id)arg1 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideWithOptions:(unsigned long long)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(/*^block*/id)arg2 ;
-(void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(BOOL)arg2 relinquishUsingProcedureGetter:(/*^block*/id)arg3 ;
-(BOOL)canAccessLocations:(id)arg1 forReading:(BOOL)arg2 error:(id*)arg3 ;
-(void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)devalueOldClaim:(id)arg1 ;
-(BOOL)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 andIfSoThenReevaluateSelf:(/*^block*/id)arg3 ;
-(id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(void)dealloc;
-(id)description;
-(void)cancelled;
-(void)block;
-(void)finished;
-(void)finalize;
-(id)client;
@end

