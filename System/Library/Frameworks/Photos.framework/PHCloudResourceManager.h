/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSObject;

@interface PHCloudResourceManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _requestsById;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _currentRequestID;

}
+(id)defaultManager;
-(void)dealloc;
-(id)init;
-(void)cancelRequest:(int)arg1 ;
-(void)_updateCloudResourceDownloadStatesOnStatusDidChangeNotification:(id)arg1 ;
-(void)_updateCloudResourceDownloadStatesOnConnectionLostNotification:(id)arg1 ;
-(void)_synchronized:(/*^block*/id)arg1 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 forAssetWithObjectID:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
