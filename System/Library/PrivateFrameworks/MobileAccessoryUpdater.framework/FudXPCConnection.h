/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FudConnection.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSString, NSObject;

@interface FudXPCConnection : NSObject <FudConnection> {

	NSString* clientIdentifier;
	NSObject*<OS_xpc_object> connection;
	NSObject*<OS_dispatch_queue> connectionQueue;
	NSObject*<OS_dispatch_queue> sessionQueue;
	NSObject*<OS_dispatch_queue> replyQueue;
	/*^block*/id messageHandler;
	int notifyToken;
	BOOL didStop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createConnection;
-(void)dealloc;
-(void)stop;
-(BOOL)registerForBSDNotifications;
-(BOOL)createSession;
-(void)sendMessageToFud:(id)arg1 ;
-(void)sendMessageToFud:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithClientName:(id)arg1 replyHandlerQueue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
@end

