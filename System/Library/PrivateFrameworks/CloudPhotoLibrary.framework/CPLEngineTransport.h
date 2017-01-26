/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@class CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent> {

	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) BOOL supportsBatchDownloadPipelining; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                   //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(BOOL)supportsBatchDownloadPipelining;
-(id)setupTaskCreateLibraryIfNecessary:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)checkRecordsExistenceTaskForRecords:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)queryTaskForCursor:(id)arg1 class:(Class)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getAssetCountsTaskAndLibraryState:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)canBatchResourceDownloadTasks:(id)arg1 :(id)arg2 ;
-(void)runResourceDownloadTasks:(id)arg1 ;
-(id)resourcePublishTaskForResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)removeLibraryTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsDelayedUploads;
-(id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)bestErrorForUnderlyingError:(id)arg1 ;
-(id)simpleDataForSyncAnchor:(id)arg1 ;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
@end

