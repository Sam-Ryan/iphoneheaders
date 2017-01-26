/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AVConferenceXPCClient : NSObject {

	NSObject*<OS_xpc_object> connection;
	NSMutableDictionary* registeredBlocks;
	NSObject*<OS_dispatch_queue> replyQueue;
	NSObject*<OS_dispatch_queue> connectionQueue;
	BOOL connectionPersists;

}

@property (readonly) NSObject*<OS_xpc_object> connection; 
@property (readonly) NSMutableDictionary * registeredBlocks; 
@property (readonly) BOOL connectionPersists; 
+(id)AVConferenceXPCClientSingleton;
+(id)dictionaryForMediaStreamConfig:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_xpc_object>)connection;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deregisterFromService:(char*)arg1 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 fileDescriptor:(int)arg3 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)createServerDiedDictionary;
-(void)closeConnectionToServer;
-(id)createNSDictionaryFromXPCDictionary:(id)arg1 ;
-(id)createNSErrorFromNSDictionary:(id)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 fileDescriptor:(int)arg3 reply:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)createConnectionToServer;
-(id)createXPCDictionaryFromNSDictionary:(id)arg1 ;
-(BOOL)connectionPersists;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(/*^block*/id)arg4 queue:(id)arg5 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 fileDescriptor:(int)arg3 timeout:(unsigned)arg4 ;
-(id)createTimeoutDictionary;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 timeout:(unsigned)arg4 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)createNSDictionaryFromNSError:(id)arg1 ;
-(void)sendMessageAsync:(char*)arg1 ;
-(id)sendMessageSync:(char*)arg1 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 timeout:(unsigned)arg3 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 ;
-(NSMutableDictionary *)registeredBlocks;
@end

