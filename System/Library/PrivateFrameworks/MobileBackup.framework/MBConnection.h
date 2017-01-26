/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, MBConnectionHandler;
@class NSObject;

@interface MBConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<MBConnectionHandler> _handler;

}

@property (assign,nonatomic) NSObject*<MBConnectionHandler> messageHandler;              //@synthesize handler=_handler - In the implementation block
@property (retain,readonly) NSObject*<OS_xpc_object> xpcConnection;                      //@synthesize conn=_conn - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(id)eventQueue;
-(id)initWithServiceName:(id)arg1 eventQueue:(id)arg2 ;
-(id)sendMessageWithReplyAndSync:(id)arg1 error:(id*)arg2 ;
-(void)_setEventHandlerForXPCConnection;
-(void)_handleXPCEvent:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 eventQueue:(id)arg2 ;
-(void)sendMessage:(id)arg1 ;
-(void)_handleXPCError:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(NSObject*<MBConnectionHandler>)messageHandler;
-(void)setMessageHandler:(NSObject*<MBConnectionHandler>)arg1 ;
@end

