/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, PUPeerDelegate;
@class IDSService, NSObject, PUKeyStore, NSMutableDictionary, NSString;

@interface PUPeer : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> _idsQueue;
	BOOL _unlockEnabled;
	id<PUPeerDelegate> _delegate;
	PUKeyStore* _keyStore;
	NSMutableDictionary* _responseHandlers;
	NSMutableDictionary* _errorHandlers;
	NSObject*<OS_dispatch_queue> _handlerManagementQueue;

}

@property (assign,nonatomic) id<PUPeerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isUnlockEnabled,nonatomic) BOOL unlockEnabled;                        //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (nonatomic,retain) PUKeyStore * keyStore;                                            //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * responseHandlers;                           //@synthesize responseHandlers=_responseHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorHandlers;                              //@synthesize errorHandlers=_errorHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerManagementQueue;              //@synthesize handlerManagementQueue=_handlerManagementQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PUPeerDelegate>)arg1 ;
-(id)init;
-(id<PUPeerDelegate>)delegate;
-(NSMutableDictionary *)errorHandlers;
-(PUKeyStore *)keyStore;
-(void)setKeyStore:(PUKeyStore *)arg1 ;
-(void)didCompleteRequest:(id)arg1 ;
-(void)getPasscodeState:(id)arg1 ;
-(void)didGetPasscodeState:(id)arg1 ;
-(void)didUnlock:(id)arg1 ;
-(void)startPasscodeAction:(id)arg1 ;
-(void)disableOnlyRemoteUnlock:(id)arg1 ;
-(void)removeLockout:(id)arg1 ;
-(void)setShouldNotifyNextUnlock:(id)arg1 ;
-(/*^block*/id)errorHandlerForRequest:(id)arg1 ;
-(void)removeErrorHandlerForRequest:(id)arg1 ;
-(void)_sendResponse:(unsigned short)arg1 toRequestID:(id)arg2 data:(id)arg3 error:(id*)arg4 ;
-(id)_sendRequest:(unsigned short)arg1 data:(id)arg2 reliably:(BOOL)arg3 expectResponse:(BOOL)arg4 handler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(void)setResponseHandler:(id)arg1 forRequestMessageID:(id)arg2 ;
-(id)_sendProtobuf:(id)arg1 reliably:(BOOL)arg2 expectsResponse:(BOOL)arg3 responseIdentifier:(id)arg4 error:(id*)arg5 ;
-(id)responseHandlerForRequestMessageID:(id)arg1 ;
-(void)removeResponseHandlerForRequestMessageID:(id)arg1 ;
-(void)_notifyPairResult:(BOOL)arg1 error:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setErrorHandler:(/*^block*/id)arg1 forRequest:(id)arg2 ;
-(void)_notifyStateHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isOnlyRemoteUnlock:(BOOL)arg3 reliably:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_createAndStoreNewPasscodeWithCurrentPasscode:(id)arg1 ;
-(id)_retrieveUnlockOnlyPasscode;
-(void)_sendResultOfMessage:(unsigned short)arg1 requestID:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)disableOnlyRemoteUnlockWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pairForUnlockWithPasscode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestRemoteDevicePasscodeAction:(long long)arg1 type:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestRemoteDeviceUnlockNotification;
-(void)requestRemoteDeviceDisableOnlyRemoteUnlock;
-(void)requestRemoteDeviceRemoveLockout:(/*^block*/id)arg1 ;
-(void)unpairForUnlockWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)notifyCurrentState;
-(void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyThisDeviceDidUnlock;
-(BOOL)isUnlockEnabled;
-(void)setUnlockEnabled:(BOOL)arg1 ;
-(void)setErrorHandlers:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerManagementQueue;
-(void)setHandlerManagementQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(NSMutableDictionary *)responseHandlers;
-(void)setResponseHandlers:(NSMutableDictionary *)arg1 ;
-(void)getRemoteDeviceState:(/*^block*/id)arg1 ;
@end

