/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameKitServices/GameKitServices-Structs.h>
#import <libobjc.A.dylib/GKSimpleTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, GKAsyncSocket, NSMutableData, NSMutableArray, NSObject, GKSimpleTimer;

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate> {

	NSString* _remoteServiceName;
	NSString* _localServiceName;
	BOOL _connected;
	GKAsyncSocket* _connectionSocket;
	NSMutableData* _dataReceived;
	unsigned _currentSequenceNumber;
	NSMutableData* _dataToSendHoldingQueue;
	NSMutableArray* _receivedDataHoldingQueue;
	NSMutableArray* _messageReceiptHandlerList;
	NSMutableArray* _messageReceiptHandlerHoldingQueue;
	/*^block*/id _receiveDataHandler;
	/*^block*/id _connectedHandler;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	GKSimpleTimer* _heartbeatTimer;
	GKSimpleTimer* _heartbeatTimeoutTimer;
	GKSimpleTimer* _timeoutTimer;
	double _connectionTimeoutInSeconds;
	double _heartbeatIntervalInSeconds;

}

@property (nonatomic,copy) NSString * remoteServiceName;                            //@synthesize remoteServiceName=_remoteServiceName - In the implementation block
@property (nonatomic,copy) id receiveDataHandler;                                   //@synthesize receiveDataHandler=_receiveDataHandler - In the implementation block
@property (nonatomic,copy) id connectedHandler;                                     //@synthesize connectedHandler=_connectedHandler - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,copy) NSString * localServiceName;                             //@synthesize localServiceName=_localServiceName - In the implementation block
+(unsigned long long)receiveDataLimit;
+(unsigned long long)sendDataLimit;
+(void)checkConstants;
-(void)dealloc;
-(void)invalidate;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectedHandler:(id)arg1 ;
-(void)timeout:(id)arg1 ;
-(id)receiveDataHandler;
-(NSString *)localServiceName;
-(id)initWithLocalServiceName:(id)arg1 ;
-(void)connectToSockAddr:(const sockaddr*)arg1 port:(unsigned short)arg2 ;
-(void)attachSocketDescriptor:(int)arg1 ;
-(id)connectedHandler;
-(void)setLocalServiceName:(NSString *)arg1 ;
-(void)syncSendHello;
-(void)syncReceivedData:(id)arg1 error:(id)arg2 ;
-(void)syncConnected:(id)arg1 ;
-(BOOL)syncSetupNewSocket;
-(NSString *)remoteServiceName;
-(void)syncCloseConnectionNow;
-(void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setRemoteServiceName:(NSString *)arg1 ;
-(void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned)arg2 ;
-(BOOL)shouldDecideAboutConnection;
-(void)syncSendAccept;
-(void)syncAcceptedConnection;
-(void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)setReceiveDataHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

