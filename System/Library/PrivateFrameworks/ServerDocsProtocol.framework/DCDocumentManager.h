/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DCConnectivityTrackerDelegate.h>
#import <libobjc.A.dylib/DCDocumentManager.h>
@class DCService;


@protocol DCDocumentManager
@property (retain,readonly) DCService * service; 
@property (retain) NSObject*<OS_dispatch_queue> completionHandlerQueue; 
@required
+(void)setPurposeIdentifier:(id)arg1;
+(void)_deleteAllContent;
+(id)documentManagerForService:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(DCService *)service;
-(BOOL)connectionStatus;
-(id)downloadTaskForItemAtPath:(id)arg1;
-(id)uploadForItemAtPath:(id)arg1;
-(void)setDelegate:(id)arg1 queue:(id)arg2 forFilterPath:(id)arg3;
-(void)contentsOfDirectoryAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resetCachedItemManagerForService:(id)arg1;
-(void)setDelegate:(id)arg1 forFilterPath:(id)arg2;
-(id)delegateForFilterPath:(id)arg1;
-(void)removeDelegateForFilterPath:(id)arg1;
-(id)fileURLOfItemAtPath:(id)arg1 error:(id*)arg2;
-(id)pathsOfItemAtURL:(id)arg1 error:(id*)arg2;
-(void)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)attributesOfItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)thumbnailOfItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)contentsOfFileAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)preflightWriteToNewFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removePreflightedWriteToNewFileAtPath:(id)arg1;
-(void)writeToFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)startUploadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelUploadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startDownloadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelDownloadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)evictItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)rebuildDatabaseWithCompletionHandler:(/*^block*/id)arg1;
-(void)allPendingUploadsWithCompletionHandler:(/*^block*/id)arg1;
-(void)restartUploads;
-(BOOL)deleteAllLocalData;
-(BOOL)hasPendingUploads;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSObject*<OS_dispatch_queue>)completionHandlerQueue;
-(void)setCompletionHandlerQueue:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class DCService, SDFDispatchQueue, DCConnectivityTracker, NSMutableDictionary, NSObject, NSDictionary;

@interface DCDocumentManager : NSObject <DCConnectivityTrackerDelegate, DCDocumentManager> {

	DCService* _service;
	SDFDispatchQueue* _queue;
	DCConnectivityTracker* _connectivityTracker;
	NSMutableDictionary* _delegateStates;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	BOOL _synchronousContentsOfDirectory;
	NSDictionary* _watchedDocumentIdentifiersAndVersionIdentifiers;

}

@property (retain,readonly) DCService * service;                                     //@synthesize service=_service - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> completionHandlerQueue;              //@synthesize completionHandlerQueue=_completionHandlerQueue - In the implementation block
+(void)setPurposeIdentifier:(id)arg1 ;
+(void)deleleAllDataIfNecessary;
+(BOOL)_synchronouslyRemoveItemAtURL:(id)arg1 withFileCoordinator:(id)arg2 ;
+(void)_deleteAllContent;
+(id)documentManagerForService:(id)arg1 ;
-(void)dealloc;
-(id)_initWithService:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(DCService *)service;
-(BOOL)connectionStatus;
-(BOOL)isConnected;
-(BOOL)_shouldCallDelegate:(id)arg1 forPath:(id)arg2 ;
-(void)_downloadItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_dispatchMaybeCallSelector:(SEL)arg1 path:(id)arg2 function:(const char*)arg3 line:(unsigned)arg4 block:(/*^block*/id)arg5 ;
-(void)_updateFreshlyDownloadedDirectory:(id)arg1 downloadedDirectory:(id)arg2 fetchingForChild:(id)arg3 remoteMetadata:(id*)arg4 ;
-(BOOL)_didDownloadChangedItem:(id)arg1 downloadedMetadata:(id)arg2 ;
-(id)_dictionaryMappingDocumentIdentifiersToParentContentsMetadataForDirectory:(id)arg1 ;
-(void)_processDirectoryChangesWithDirectory:(id)arg1 currentContents:(id)arg2 previousContents:(id)arg3 fetchingForChild:(id)arg4 remoteMetadata:(id*)arg5 ;
-(BOOL)_needsToCallDelegateForPath:(id)arg1 ;
-(void)_contentsOfDirectoryAtPath:(id)arg1 downloadIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchDirectoryHierarchyOfDirectory:(id)arg1 ;
-(id)_activityInfoForItem:(id)arg1 ;
-(void)_updateFreshlyDownloadedDirectory:(id)arg1 downloadedDirectory:(id)arg2 ;
-(id)downloadTaskForItemAtPath:(id)arg1 ;
-(void)_updateFreshlyDownloadedFile:(id)arg1 downloadedFile:(id)arg2 ;
-(void)_startDownloadItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isWatchedAndUpToDateItem:(id)arg1 ;
-(void)_downloadStaleDirectory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_downloadStaleFile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_uploadItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishUploadFile:(id)arg1 container:(id)arg2 error:(id)arg3 ;
-(id)uploadForItemAtPath:(id)arg1 ;
-(void)_startUploadingFile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 forFilterPath:(id)arg3 ;
-(BOOL)_performPreOperationChecksWithPath:(id)arg1 itemClass:(Class)arg2 itemMustBeKnown:(BOOL)arg3 item:(id*)arg4 relativePath:(id*)arg5 error:(id*)arg6 ;
-(void)_logFunction:(const char*)arg1 path:(id)arg2 item:(id)arg3 relativePath:(id)arg4 ;
-(void)_adjustFetchingUpdatesIfNecessary;
-(void)_finishFetchingUpdates;
-(void)_startFetchingUpdates;
-(void)_didUpdateVersionIdentifier:(id)arg1 forDocumentIdentifier:(id)arg2 ;
-(id)_dictionaryMappingNamesToParentContentsMetadataForDirectory:(id)arg1 ;
-(id)_localItemsInDirectory:(id)arg1 ;
-(id)_synthesizedMetadataForItem:(id)arg1 parentContentsMetadata:(id)arg2 ;
-(void)contentsOfDirectoryAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_continueContentsOfFile:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_finishUploadFileForTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2 responseContainer:(id)arg3 error:(id)arg4 ;
-(BOOL)_rebuildItemWithRelativePath:(id)arg1 parentDirectoryMetadata:(id)arg2 ;
-(void)connectivityTracker:(id)arg1 didUpdateConnectionStatus:(BOOL)arg2 ;
-(void)resetCachedItemManagerForService:(id)arg1 ;
-(void)setDelegate:(id)arg1 forFilterPath:(id)arg2 ;
-(id)delegateForFilterPath:(id)arg1 ;
-(void)removeDelegateForFilterPath:(id)arg1 ;
-(id)fileURLOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)pathsOfItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)attributesOfItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)thumbnailOfItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)contentsOfFileAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preflightWriteToNewFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePreflightedWriteToNewFileAtPath:(id)arg1 ;
-(void)writeToFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startUploadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelUploadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDownloadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelDownloadingItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)evictItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rebuildDatabaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)allPendingUploadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)restartUploads;
-(BOOL)deleteAllLocalData;
-(BOOL)hasPendingUploads;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)completionHandlerQueue;
-(void)setCompletionHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_synchronousNextContentsOfDirectory;
-(void)_continuePreviewOfItem:(id)arg1 preview:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

