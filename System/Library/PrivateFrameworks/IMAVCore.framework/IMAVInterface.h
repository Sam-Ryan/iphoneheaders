/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMAVCore/IMAVCore-Structs.h>
@interface IMAVInterface : NSObject {

	id _delegate;

}

@property (nonatomic,readonly) BOOL systemCanVideoChat; 
@property (nonatomic,readonly) BOOL systemCanAudioChat; 
@property (nonatomic,readonly) BOOL systemSupportsFrontFacingCamera; 
@property (nonatomic,readonly) BOOL systemSupportsBackFacingCamera; 
@property (assign,nonatomic) void* localVideoBackLayer; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) BOOL shouldKeepCameraRunning; 
@property (assign,nonatomic) unsigned maxBitrate; 
@property (nonatomic,readonly) id controller; 
@property (nonatomic,readonly) unsigned overallChatState; 
@property (nonatomic,readonly) BOOL supportsRelay; 
@property (assign) id delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsLayers; 
@property (nonatomic,readonly) BOOL isAVInterfaceReady; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) unsigned long long capabilitiesOfNetwork; 
@property (nonatomic,readonly) unsigned long long capabilitiesOfCPU; 
@property (nonatomic,readonly) id _controller; 
+(id)sharedInstance;
+(id)alloc;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)controller;
-(BOOL)stopPreview;
-(unsigned long long)capabilities;
-(void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2 ;
-(void)_notifyAboutPotentialCallForChat:(id)arg1 ;
-(void)startInterruptionForChat:(id)arg1 ;
-(BOOL)systemCanVideoChat;
-(BOOL)systemCanAudioChat;
-(void)_avChatDealloc:(id)arg1 ;
-(void)unsetDelegate:(id)arg1 ;
-(void)chatStateUpdated;
-(int)endConferenceForAVChat:(id)arg1 ;
-(BOOL)isAVInterfaceReady;
-(void)initAVInterface;
-(void)startInterruptionForChat:(id)arg1 withSource:(id)arg2 ;
-(void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2 ;
-(void)updateInterruptionForChat:(id)arg1 ;
-(id)natTypeForAVChat:(id)arg1 ;
-(void)chatRelayedStatusChanged:(id)arg1 ;
-(void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2 ;
-(void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2 ;
-(BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5 ;
-(void)cleanupAVInterface;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(unsigned)overallChatState;
-(BOOL)systemSupportsFrontFacingCamera;
-(BOOL)systemSupportsBackFacingCamera;
-(BOOL)isMuteForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setMute:(BOOL)arg2 ;
-(BOOL)isPausedForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setPaused:(BOOL)arg2 ;
-(BOOL)isRemoteMuteForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setRemoteMute:(BOOL)arg2 ;
-(BOOL)isSendingAudioForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2 ;
-(BOOL)isSendingVideoForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2 ;
-(void)avChat:(id)arg1 setValidatedIdentity:(SecIdentityRef)arg2 ;
-(unsigned long long)capabilitiesOfNetwork;
-(unsigned long long)capabilitiesOfCPU;
-(BOOL)startPreviewWithError:(id*)arg1 ;
-(int)avChat:(id)arg1 endConferenceForUserID:(id)arg2 ;
-(id)getNatIPFromICEData:(id)arg1 ;
-(id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(BOOL)arg3 ;
-(id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned)arg3 shouldFindExternalIP:(BOOL)arg4 ;
-(BOOL)supportsLayers;
-(void*)remoteVideoLayerForChat:(id)arg1 ;
-(void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)remoteVideoBackLayerForChat:(id)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)setRemoteVideoPresentationSize:(CGSize)arg1 forChat:(id)arg2 ;
-(void)setRemoteVideoPresentationState:(unsigned)arg1 forChat:(id)arg2 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(unsigned)maxBitrate;
-(void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(id)_controller;
-(void)setShouldKeepCameraRunning:(BOOL)arg1 ;
-(BOOL)shouldKeepCameraRunning;
-(void)endInterruptionForChat:(id)arg1 ;
-(void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(CGSize)arg2 localPortraitAspectRatio:(CGSize)arg3 ;
-(BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2 ;
-(BOOL)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2 ;
-(long long)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2 ;
-(long long)_runPingTestForChat:(id)arg1 ;
-(void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 ;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(BOOL)supportsRelay;
@end

