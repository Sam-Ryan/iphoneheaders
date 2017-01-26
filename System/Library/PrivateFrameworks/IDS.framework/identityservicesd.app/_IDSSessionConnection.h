/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:02 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/AVConferenceDelegate.h>

@protocol OS_dispatch_queue, _IDSSessionConnectionDelegate;
@class AVConference, NSMutableArray, NSObject;

@interface _IDSSessionConnection : NSObject <AVConferenceDelegate> {

	AVConference* _connection;
	NSMutableArray* _connectionInfos;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	id<_IDSSessionConnectionDelegate> _delegate;
	long long _callID;
	long long _connType;
	long long _localCell;
	long long _remoteCell;
	BOOL _connectionActive;
	BOOL _connectionEnableAudio;

}

@property (assign,nonatomic,__weak) id<_IDSSessionConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3 ;
-(void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 ;
-(void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(BOOL)arg3 ;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2 ;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3 ;
-(void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4 ;
-(void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(BOOL)arg3 ;
-(void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3 ;
-(void)serverDiedForConference:(id)arg1 ;
-(void)createConnectionData:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)receivedRemoteConnectionData:(id)arg1 ;
-(BOOL)startConnectionAsIntitiator:(BOOL)arg1 peerProtocolVersion:(unsigned)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)stopConnection:(id*)arg1 ;
-(id)connectionInfoWithState:(long long)arg1 ;
-(id)connectionInfoForCallID:(long long)arg1 ;
-(long long)localCell;
-(long long)remoteCell;
-(void)setDelegate:(id<_IDSSessionConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<_IDSSessionConnectionDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(long long)connectionType;
-(BOOL)getAudioEnabled;
-(BOOL)muted;
-(void)sendData:(id)arg1 ;
-(long long)callID;
-(long long)bestCallID;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(unsigned)natType;
@end

