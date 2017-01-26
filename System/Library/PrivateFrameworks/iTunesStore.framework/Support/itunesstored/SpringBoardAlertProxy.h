/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SpringBoardAlertProxyDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject, SSXPCConnection;

@interface SpringBoardAlertProxy : NSObject {

	id<SpringBoardAlertProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _inputConnection;
	NSObject*<OS_xpc_object> _inputEndpoint;
	SSXPCConnection* _outputConnection;

}

@property (__weak) id<SpringBoardAlertProxyDelegate> delegate; 
@property (readonly) NSObject*<OS_xpc_object> XPCEndpoint;                  //@synthesize inputEndpoint=_inputEndpoint - In the implementation block
-(NSObject*<OS_xpc_object>)XPCEndpoint;
-(void)_disconnect;
-(void)setDelegate:(id<SpringBoardAlertProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<SpringBoardAlertProxyDelegate>)delegate;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 ;
-(void)sendMessage:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end

