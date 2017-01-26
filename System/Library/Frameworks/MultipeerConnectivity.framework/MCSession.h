/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCSessionDelegate, MCSessionPrivateDelegate, OS_dispatch_queue;
#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
@class MCPeerID, NSArray, NSMutableDictionary, NSObject;

@interface MCSession : NSObject {

	id<MCSessionDelegate> _delegate;
	id<MCSessionPrivateDelegate> _privateDelegate;
	unsigned _gckPID;
	MCPeerID* _myPeerID;
	NSArray* _securityIdentity;
	long long _encryptionPreference;
	OpaqueGCKSessionRef _gckSession;
	OpaqueAGPSessionRef _agpSession;
	NSMutableDictionary* _peerIDMap;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _peerStates;
	NSMutableDictionary* _connectionPendingPeerEvents;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (assign,nonatomic) id<MCSessionPrivateDelegate> privateDelegate; 
@property (assign,nonatomic,__weak) id<MCSessionDelegate> delegate; 
@property (nonatomic,readonly) MCPeerID * myPeerID;                                          //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,readonly) NSArray * securityIdentity;                                   //@synthesize securityIdentity=_securityIdentity - In the implementation block
@property (nonatomic,readonly) long long encryptionPreference;                               //@synthesize encryptionPreference=_encryptionPreference - In the implementation block
@property (nonatomic,readonly) NSArray * connectedPeers; 
@property (assign,nonatomic) OpaqueGCKSessionRef gckSession;                                 //@synthesize gckSession=_gckSession - In the implementation block
@property (assign,nonatomic) OpaqueAGPSessionRef agpSession;                                 //@synthesize agpSession=_agpSession - In the implementation block
@property (assign,nonatomic) unsigned gckPID;                                                //@synthesize gckPID=_gckPID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerIDMap;                                //@synthesize peerIDMap=_peerIDMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                         //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerStates;                               //@synthesize peerStates=_peerStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionPendingPeerEvents;              //@synthesize connectionPendingPeerEvents=_connectionPendingPeerEvents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)stringForSessionState:(long long)arg1 ;
+(id)stringForMCSessionSendDataMode:(long long)arg1 ;
-(void)peerDidDeclineInvitation:(id)arg1 ;
-(NSMutableDictionary *)peerStates;
-(void)setDelegate:(id<MCSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<MCSessionDelegate>)delegate;
-(void)disconnect;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(OpaqueGCKSessionRef)gckSession;
-(unsigned)gckPID;
-(id)initWithPeer:(id)arg1 ;
-(void)syncSendXDataStreamCloseFromSenderToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 removeObserver:(BOOL)arg5 ;
-(void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(BOOL)arg4 ;
-(OpaqueAGPSessionRef)agpSession;
-(long long)encryptionPreference;
-(MCPeerID *)myPeerID;
-(NSArray *)securityIdentity;
-(id)stringForEncryptionPreference:(long long)arg1 ;
-(NSArray *)connectedPeers;
-(void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 removeObserver:(BOOL)arg6 ;
-(void)syncSendXDataConnectionBlobPushToPID:(unsigned)arg1 connectionBlob:(id)arg2 ;
-(void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2 ;
-(void)syncSendXDataPeerIDPushToPID:(unsigned)arg1 ;
-(void)startConnectionWithIndirectPID:(unsigned)arg1 ;
-(void)syncHandleNetworkEvent:(SCD_Struct_MC2*)arg1 pid:(unsigned)arg2 freeEventWhenDone:(BOOL*)arg3 ;
-(void)syncPeer:(id)arg1 changeStateTo:(long long)arg2 shouldForceCallback:(BOOL)arg3 ;
-(void)syncCloseStreamsForPeer:(id)arg1 ;
-(void)syncHandleXDataDataPacket:(char*)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4 ;
-(void)syncSendXDataStreamOpenResponseToPID:(unsigned)arg1 withRequestID:(unsigned)arg2 streamID:(unsigned)arg3 ;
-(void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2 ;
-(id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(long long)arg3 ;
-(void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEncryptionPreferenceCompatible:(long long)arg1 ;
-(void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2 ;
-(void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(long long)arg3 ;
-(void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2 ;
-(void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2 ;
-(void)cancelConnectPeer:(id)arg1 ;
-(BOOL)sendData:(id)arg1 toPeers:(id)arg2 withMode:(long long)arg3 error:(id*)arg4 ;
-(id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id*)arg3 ;
-(void)setGckSession:(OpaqueGCKSessionRef)arg1 ;
-(void)setAgpSession:(OpaqueAGPSessionRef)arg1 ;
-(void)setGckPID:(unsigned)arg1 ;
-(NSMutableDictionary *)peerIDMap;
-(void)setPeerIDMap:(NSMutableDictionary *)arg1 ;
-(void)setPeerStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)connectionPendingPeerEvents;
-(void)setConnectionPendingPeerEvents:(NSMutableDictionary *)arg1 ;
-(void)setPrivateDelegate:(id<MCSessionPrivateDelegate>)arg1 ;
-(id<MCSessionPrivateDelegate>)privateDelegate;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

