/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSXPCInterface, NSObject, NSMutableDictionary, NSMutableSet, NSXPCConnection;

@interface SGDaemonConnection : NSObject {

	NSString* _machServiceName;
	NSXPCInterface* _xpcInterface;
	NSObject*<OS_dispatch_queue> _connectLock;
	NSMutableDictionary* _aborts;
	int _abortCounter;
	int _abortLock;
	int _disconnectCount;
	NSMutableSet* _outstandingAsyncCallbacks0;
	NSMutableSet* _outstandingAsyncCallbacks1;
	int _outstandingAsyncCallbacksLock;
	NSXPCConnection* _xpcConnection;

}
-(void)dealloc;
-(void)disconnect;
-(void)_connectToServer;
-(id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2 ;
-(id)waitUntilReturn:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)removeOutstandingAsyncCallback1:(/*^block*/id)arg1 ;
-(BOOL)addOutstandingAsyncCallback1:(/*^block*/id)arg1 ;
-(void)_cancelAllOutstandingAsyncCallbacks;
-(BOOL)removeOutstandingAsyncCallback0:(/*^block*/id)arg1 ;
-(BOOL)addOutstandingAsyncCallback0:(/*^block*/id)arg1 ;
-(id)xpcConnection;
@end

