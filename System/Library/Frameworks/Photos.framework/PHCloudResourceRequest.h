/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, PLCPLDownloadContext, NSString, NSManagedObjectID, NSError;

@interface PHCloudResourceRequest : NSOperation {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _downloadFinishedSemaphore;
	/*^block*/id _progressHandler;
	PLCPLDownloadContext* _downloadContext;
	NSString* _proposedTaskIdentifier;
	double _lastProgress;
	BOOL _completed;
	int _requestID;
	NSManagedObjectID* _objectID;
	unsigned long long _cloudResourceType;
	NSError* _error;

}

@property (nonatomic,readonly) int requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudResourceType;              //@synthesize cloudResourceType=_cloudResourceType - In the implementation block
@property (nonatomic,readonly) NSString * cplTaskIdentifier; 
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(void)cancel;
-(void)main;
-(void)_onQueueAsync:(/*^block*/id)arg1 ;
-(void)_onQueueSync:(/*^block*/id)arg1 ;
-(void)_updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1 connectionWasLost:(BOOL)arg2 ;
-(id)initWithRequestID:(int)arg1 cloudResourceType:(unsigned long long)arg2 managedObjectID:(id)arg3 progressHandler:(/*^block*/id)arg4 ;
-(NSString *)cplTaskIdentifier;
-(void)updateResourceRequestStatusForLostConnection;
-(void)updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1 ;
-(unsigned long long)cloudResourceType;
-(int)requestID;
-(NSError *)error;
-(NSManagedObjectID *)objectID;
@end

