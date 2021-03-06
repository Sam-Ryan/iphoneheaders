/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface ICFCallServer : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSMutableArray* _clients;
	BOOL _hasRegistered;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_cleanup;
-(void)shouldAllowIncomingCallForNumber:(id)arg1 forService:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)_requestCallGrantForIdentifier:(id)arg1 forService:(id)arg2 waitForResponse:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_cleanupClient:(id)arg1 ;
-(void)_configureWithClient:(id)arg1 ;
-(void)_clientConnected;
@end

