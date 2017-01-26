/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>
#import <IDS/IDSBaseSocketPairConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, IDSBaseSocketPairConnection, CUTWeakReference, NSObject;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate> {

	id _delegateContext;
	id _boostContext;
	NSString* _uniqueID;
	NSString* _accountID;
	NSSet* _destinations;
	IDSBaseSocketPairConnection* _unreliableSocketPairConnection;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _state;
	long long _transportType;
	int _socket;
	BOOL _isAudioEnabled;
	BOOL _isMuted;
	BOOL _isLegacy;
	long long _inviteTimeout;
	unsigned _sessionEndedReason;

}

@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long inviteTimeout; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
@property (nonatomic,retain) id boostContext;                            //@synthesize boostContext=_boostContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)state;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)endSession;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)daemonDisconnected;
-(void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 audioEnabled:(BOOL)arg2 ;
-(void)session:(id)arg1 muted:(BOOL)arg2 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5 ;
-(void)sendInvitationWithOptions:(id)arg1 ;
-(void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2 ;
-(void)cancelInvitationWithData:(id)arg1 ;
-(void)acceptInvitationWithData:(id)arg1 ;
-(void)declineInvitationWithData:(id)arg1 ;
-(void)endSessionWithData:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 ;
-(BOOL)getAudioEnabled;
-(BOOL)getMuted;
-(BOOL)sendData:(id)arg1 error:(id*)arg2 ;
-(void)setInviteTimeout:(long long)arg1 ;
-(long long)inviteTimeout;
-(unsigned)sessionEndedReason;
-(void)setBoostContext:(id)arg1 ;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5 ;
-(void)_broadcastNewSessionToDaemon;
-(void)_cleanupSocketPairConnections;
-(void)_setupSocketPairToDaemon;
-(void)_setupUnreliableSocketPairConnection;
-(id)boostContext;
-(void)acceptInvitation;
-(void)declineInvitation;
-(void)cancelInvitation;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(int)socket;
@end

