/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask;
@class NSObject, CPLChangeBatch, NSArray, NSDictionary, NSString, CPLEngineChangePipe;

@interface CPLPushToTransportTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	CPLChangeBatch* _uploadBatch;
	CPLChangeBatch* _batchToCommit;
	NSArray* _uploadResourceTasks;
	NSArray* _staleOrUnavailableResources;
	NSArray* _resourcesForBackgroundUpload;
	NSDictionary* _recordsWithGeneratedResources;
	NSDictionary* _recordsToCheckForExistence;
	id<CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;
	id<CPLEngineTransportUploadBatchTask> _uploadTask;
	unsigned long long _lastReportedProgress;
	unsigned long long _countOfPushedBatches;
	NSString* _clientCacheIdentifier;
	CPLEngineChangePipe* _currentPushQueue;
	double _startOfIteration;
	double _startOfDerivativesGeneration;
	BOOL _generatingSomeDerivatives;
	BOOL _deferredCancel;

}

@property (retain) id<CPLPushToTransportTaskDelegate> delegate; 
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(void)cancel:(BOOL)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)_doOneIteration;
-(void)_pushTaskDidFinishWithError:(id)arg1 ;
-(void)_uploadBatch;
-(BOOL)_discardResourcesToUploadFromBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_prepareResourcesToUploadInBatch:(id)arg1 error:(id*)arg2 ;
-(void)_detectUpdatesForFullRecordsWithNoChangeDataInBatch:(id)arg1 ;
-(void)_popNextBatchAndContinue;
-(void)_generateDerivativesForNextRecord:(id)arg1 ;
-(void)_checkForRecordExistence;
-(BOOL)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id*)arg2 ;
-(void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2 ;
-(void)_generateNeededDerivatives;
-(void)_deleteGeneratedResourcesAfterError:(id)arg1 ;
-(id)taskIdentifier;
@end

