/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoConferenceDelegate
@optional
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned)arg3 withUserInfo:(id)arg4 error:(id)arg5;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 didPauseAudio:(BOOL)arg3 error:(id)arg4;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 callMetadata:(id)arg4;
-(void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned)arg2;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned)arg2 requestDict:(id)arg3;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned)arg2 updateDict:(id)arg3;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned)arg2 requestDict:(id)arg3;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 networkHint:(BOOL)arg3;
-(void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned)arg2;
-(void)videoConference:(id)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3 error:(id)arg4;
-(void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned)arg2;
-(void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3;

@required
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned)arg3 error:(id)arg4;

@end

