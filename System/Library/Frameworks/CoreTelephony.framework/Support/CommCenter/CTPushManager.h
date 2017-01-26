/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:05:14 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, NSArray, NSString;

@interface CTPushManager : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	NSArray* _currentTopics;
	NSString* _environment;
	dispatch_queue_sRef _queue;
	weak_ptr<push::PushController>* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setEnabledTopics_sync:(id)arg1 ;
-(id)initWithPushController:(shared_ptr<push::PushController>*)arg1 andQueue:(dispatch_queue_sRef)arg2 ;
-(void)useDevelopmentEnvironment:(BOOL)arg1 ;
-(void)_disconnect;
-(void)dealloc;
-(void)startConnection;
-(void)_connect;
-(void)_reconnect;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)setEnabledTopics:(CFArrayRef)arg1 ;
@end
