/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:28 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSMutableDictionary, NSString, NSMutableSet, NSObject;

@interface SDURLSessionProxyService : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _outstandingReplies;
	NSMutableDictionary* _outstandingMessages;
	NSString* _startupMessageIdentifier;
	NSMutableDictionary* _outgoingSequenceNumbersByPriority;
	NSMutableDictionary* _incomingSequenceNumbersByPriority;
	NSMutableSet* _receivedLaunchUUIDs;
	NSString* _currentRemoteLaunchUUID;
	BOOL _prefersInfraWiFi;
	BOOL _startupMessageFailed;
	BOOL _haveReceivedLegacyStartupMessage;
	BOOL _connected;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _launchUUID;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (getter=isConnected) BOOL connected;                      //@synthesize connected=_connected - In the implementation block
@property (retain) NSString * launchUUID;                           //@synthesize launchUUID=_launchUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)launchUUID;
-(void)setLaunchUUID:(NSString *)arg1 ;
-(void)_onqueue_sendStartupMessage;
-(void)_onqueue_updateDeviceState;
-(void)devicesDidUnpair:(id)arg1 ;
-(void)newDeviceBecameActive:(id)arg1 ;
-(void)_onqueue_remoteDeviceStartedUp;
-(void)withWorkQueue:(/*^block*/id)arg1 ;
-(void)_onqueue_devicesDisconnected;
-(void)_onqueue_devicesConnected;
-(long long)_onqueue_priorityForMessage:(id)arg1 ofType:(unsigned short)arg2 isReply:(BOOL)arg3 ;
-(unsigned long long)bumpAndReturnOutgoingSequenceNumberForPriority:(long long)arg1 ;
-(void)_onqueue_messageWithIdentifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_onqueue_handleFailedMessageSend:(id)arg1 ofType:(unsigned short)arg2 ;
-(void)_onqueue_sendMessage:(id)arg1 ofType:(unsigned short)arg2 responseIdentifier:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)_onqueue_handleReceivedReply:(id)arg1 forIdentifier:(id)arg2 ofType:(unsigned short)arg3 withError:(id)arg4 ;
-(BOOL)verifyAndUpdateIncomingSequenceNumber:(unsigned long long)arg1 forPriority:(long long)arg2 ;
-(void)_onqueue_handleReceivedMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(/*^block*/id)arg3 ;
-(BOOL)hasDefaultPairedDevice;
-(void)_onqueue_receivedNewLaunchUUID:(id)arg1 isStartupMessage:(BOOL)arg2 ;
-(void)_onqueue_setPrefersInfraWiFi:(BOOL)arg1 ;
-(void)sendProtobufMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(/*^block*/id)arg3 ;
-(id)init;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnected:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isConnected;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(/*^block*/id)arg3 ;
@end

