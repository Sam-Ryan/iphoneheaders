/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSBiometrics : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	SSXPCConnection* _connection;

}
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEnabled:(BOOL)arg1 withAuthToken:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setEnabled:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setAllowed:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
@end
