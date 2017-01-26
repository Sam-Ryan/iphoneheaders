/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMMessageTransport, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HMMessageDispatcher : NSObject {

	BOOL _remoteSource;
	id<HMMessageTransport> _transport;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _notificationHandlers;

}

@property (assign,nonatomic,__weak) id<HMMessageTransport> transport;                 //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationHandlers;              //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (assign,getter=isRemoteSource,nonatomic) BOOL remoteSource;                 //@synthesize remoteSource=_remoteSource - In the implementation block
-(NSMutableDictionary *)notificationHandlers;
-(void)setNotificationHandlers:(NSMutableDictionary *)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithTransport:(id)arg1 ;
-(BOOL)isRemoteSource;
-(id<HMMessageTransport>)transport;
-(void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(/*^block*/id)arg4 ;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_deregisterForMessage:(id)arg1 receiver:(id)arg2 token:(id)arg3 ;
-(void)setTransport:(id<HMMessageTransport>)arg1 ;
-(void)setRemoteSource:(BOOL)arg1 ;
@end

