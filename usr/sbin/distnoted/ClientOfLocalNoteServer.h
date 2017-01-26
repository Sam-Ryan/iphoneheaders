/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/distnoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <distnoted/distnoted-Structs.h>
#import <distnoted/_NSDNXPCObject.h>

@protocol OS_xpc_object;
@class _NSDNXPCConnection, NSObject, NSMutableArray, NSString;

@interface ClientOfLocalNoteServer : NSObject <_NSDNXPCObject> {

	_NSDNXPCConnection* _client;
	id _registrar;
	NSObject*<OS_xpc_object> _queue;
	BOOL _suspended;
	NSMutableArray* _invalidHandlers;
	int _started;
	int _invalid;
	char _postingForbidden;
	char _registerAllForbidden;
	int _lock;
	int _pid;
	char* _processName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addInvalidationHandler:(/*^block*/id)arg1 ;
-(void)handlePost:(id)arg1 ;
-(void)enqueuePost:(id)arg1 ;
-(void)postNotification:(CFStringRef)arg1 object:(CFStringRef)arg2 token:(unsigned long long)arg3 options:(unsigned long long)arg4 immediate:(unsigned char)arg5 userInfo:(id)arg6 ;
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(id)initWithClientConnection:(id)arg1 ;
-(void)flushQueue;
@end

