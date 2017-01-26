/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>
#import <itunesstored/NSURLSessionAVAssetDownloadDelegate.h>

@protocol OS_dispatch_source;
@class ISOperationQueue, DownloadsDatabase, NSMutableSet, NSMutableOrderedSet, NSObject, NSMapTable, NSMutableDictionary, NSString;

@interface DownloadPipeline : NSObject <NSURLSessionDataDelegate, ISOperationDelegate, NSURLSessionAVAssetDownloadDelegate> {

	ISOperationQueue* _authenticationChallengeQueue;
	ISOperationQueue* _backgroundOperationQueue;
	DownloadsDatabase* _database;
	NSMutableSet* _dirtyTaskStates;
	NSMutableSet* _downloadHandlerSessions;
	BOOL _holdingKeepAliveAssertion;
	NSMutableOrderedSet* _preparationDownloadIDs;
	ISOperationQueue* _preparationOperationQueue;
	ISOperationQueue* _processingOperationQueue;
	NSObject*<OS_dispatch_source> _progressTimer;
	NSObject*<OS_dispatch_source> _reconnectTimer;
	NSMapTable* _taskStates;
	NSMutableDictionary* _urlSessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDownloadsDatabase:(id)arg1 ;
-(void)updateAfterSessionsChanged:(id)arg1 ;
-(id)restartDownloadsWithIdentifiers:(id)arg1 ;
-(void)addDownloadsWithIdentifiers:(id)arg1 ;
-(void)stopDownloadsWithIdentifiers:(id)arg1 reason:(long long)arg2 ;
-(void)prioritizeDownloadWithIdentifier:(id)arg1 ;
-(void)_prepareDownloadsMatchingPredicate:(id)arg1 ignoreDownloadHandlers:(BOOL)arg2 filtersExistingTasks:(BOOL)arg3 ;
-(void)_reloadKeepAliveAssertion;
-(BOOL)_downloadIsForLegacyClientWithIdentifier:(id)arg1 ;
-(void)_startProgressTimer;
-(void)_disavowDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2 ;
-(void)_failDownloadWithIdentifier:(id)arg1 error:(id)arg2 transaction:(id)arg3 ;
-(void)_processDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(/*^block*/id)arg3 ;
-(void)_releaseDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2 ;
-(void)_logDownloadEvent:(id)arg1 forTaskWithState:(id)arg2 session:(id)arg3 ;
-(void)_processDownloadFailureWithTaskState:(id)arg1 cancelReason:(long long)arg2 ;
-(void)_attemptRecoveryForDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2 ;
-(BOOL)_hasAutomaticUpdateTasks;
-(id)_downloadSessionPropertiesWithPhase:(id)arg1 taskState:(id)arg2 databaseSession:(id)arg3 ;
-(void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_authenticationChallengeQueue;
-(void)_setDownloadPhase:(id)arg1 forDownloadIdentifier:(long long)arg2 databaseTransaction:(id)arg3 ;
-(void)_downloadOnDemandResourcesForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2 ;
-(void)_finishRecoveryWithOperation:(id)arg1 response:(id)arg2 ;
-(id)_applicationHandleForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2 ;
-(BOOL)_shouldSuppressDialogForError:(id)arg1 ;
-(void)_finishPrepareOperationWithResponse:(id)arg1 ;
-(void)_queueFinishDownloadWithtaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(/*^block*/id)arg3 ;
-(void)_finishDownloadWithOperation:(id)arg1 response:(id)arg2 ;
-(void)reconnectWithURLSessionTasks;
-(void)_commitProgressTimer;
-(id)_applicationBundleIdentifierForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2 ;
-(void)_pauseOnDemandResourcesForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2 ;
-(void)_resumeOnDemandResourcesForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
-(void)_scheduleReconnect;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

