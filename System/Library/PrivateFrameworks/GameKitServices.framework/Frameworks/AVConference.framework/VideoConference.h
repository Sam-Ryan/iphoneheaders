/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/GKNATObserverDelegate.h>
#import <libobjc.A.dylib/VCCallSessionDelegate.h>
#import <libobjc.A.dylib/VCAudioIOClient.h>

@protocol VideoConferenceDelegate, VideoConferenceRealTimeChannel, OS_dispatch_queue, VideoConferenceSpeakingDelegate, VideoConferenceChannelQualityDelegate;
@class NSObject, VideoConferenceManager, VCAudioManager, NSMutableDictionary, NSArray, FFTMeter, AVImageQueue, VCVideoRule, CameraConferenceSynchronizer, NSString, VCCallSession, NSDictionary, GKNATObserver;

@interface VideoConference : NSObject <GKNATObserverDelegate, VCCallSessionDelegate, VCAudioIOClient> {

	NSObject*<VideoConferenceDelegate> delegate;
	VideoConferenceManager* manager;
	VCAudioManager* audioManager;
	opaque_pthread_rwlock_t stateLock;
	NSMutableDictionary* sessionDict;
	NSArray* sessionArray;
	BOOL outputMeteringEnabled;
	BOOL inputMeteringEnabled;
	BOOL inputFrequencyMeteringEnabled;
	BOOL outputFrequencyMeteringEnabled;
	FFTMeter* _inputFFTMeter;
	FFTMeter* _outputFFTMeter;
	float outputMeterLevel;
	float inputMeterLevel;
	BOOL microphoneMuted;
	NSObject*<VideoConferenceRealTimeChannel> rtChannel;
	NSObject*<OS_dispatch_queue> audioManagerQueue;
	AVImageQueue* frontQueue;
	AVImageQueue* backQueue;
	AVImageQueue* currentQueue;
	char* currentFacing;
	int localFrameWidth;
	int localFrameHeight;
	int remoteFrameWidth;
	int remoteFrameHeight;
	VCVideoRule* conferenceCaptureRule;
	CameraConferenceSynchronizer* synchronizer;
	double dAudioHostTime;
	opaque_pthread_mutex_t xRemoteLayer;
	opaque_pthread_mutex_t xAudioTS;
	unsigned dwAudioTS;
	BOOL forceNoICE;
	BOOL useViceroyBlobFormat;
	int chatMode;
	BOOL isFocus;
	NSString* currentFocus;
	VCCallSession* currentFocusSession;
	BOOL hasMic;
	float conferenceVolume;
	NSArray* mutedPeers;
	NSArray* connectedPeers;
	unsigned talkingPeersLimit;
	unsigned char speakingArray[16];
	NSObject*<VideoConferenceSpeakingDelegate> speakingDelegate;
	NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate;
	float longTerm;
	float shortTerm;
	BOOL isTalking;
	unsigned talkTime;
	int packetsPerBundle;
	unsigned recvRTPTimeStamp;
	BOOL disableVAD;
	BOOL requiresWifi;
	unsigned preferredCodec;
	int upstreamBandwidth;
	int downstreamBandwidth;
	BOOL useAFRC;
	BOOL isGKVoiceChat;
	BOOL isUsingSuppression;
	BOOL shouldTimeoutPackets;
	unsigned char requestedCameraType;
	BOOL useCompressedConnectionData;
	NSDictionary* natTypeDictionary;
	opaque_pthread_mutex_t natMutex;
	unsigned lastSentAudioSampleTime;
	double lastReceivedAudioTimestamp;
	int audioTimeStampDelta;
	GKNATObserver* natObserver;
	unsigned mostRecentStartedCall;
	unsigned lastActiveCall;
	BOOL bweOperatingModeInitialized;
	BOOL useNewBWEMode;
	BOOL useActiveProbingSenderLog;
	BOOL useFakeLargeFrameMode;
	BOOL shouldPrioritizeParticipantIDForSIPInvite;
	BOOL shouldResumeAudio;
	BOOL shouldResumeVideo;
	int currentCamera;
	unsigned timeStampUpdateCounter;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	int conferenceOperatingMode;
	int _deviceRole;
	BOOL isValid;

}

@property (assign,nonatomic) BOOL useCompressedConnectionData; 
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone; 
@property (assign,nonatomic) BOOL requiresWifi; 
@property (assign,nonatomic) BOOL shouldPrioritizeParticipantIDForSIPInvite; 
@property (assign,nonatomic) NSObject*<VideoConferenceDelegate> delegate; 
@property (assign,nonatomic) BOOL useViceroyBlobFormat; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled; 
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) BOOL inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) BOOL outputFrequencyMeteringEnabled; 
@property (nonatomic,readonly) float outputMeterLevel; 
@property (nonatomic,readonly) float inputMeterLevel; 
@property (setter=setRTChannel:) NSObject*<VideoConferenceRealTimeChannel> rtChannel; 
@property (assign,nonatomic) int chatMode; 
@property (assign,nonatomic) BOOL isFocus; 
@property (nonatomic,copy) NSString * currentFocus; 
@property (assign,nonatomic) int packetsPerBundle; 
@property (assign) BOOL hasMic; 
@property (assign) float conferenceVolume; 
@property (assign) NSObject*<VideoConferenceSpeakingDelegate> speakingDelegate; 
@property (assign) NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate; 
@property (assign) unsigned talkingPeersLimit; 
@property (assign) BOOL disableVAD; 
@property (assign) BOOL shouldTimeoutPackets; 
@property (assign) int upstreamBandwidth; 
@property (assign) int downstreamBandwidth; 
@property (readonly) int localFrameHeight; 
@property (readonly) int localFrameWidth; 
@property (assign,nonatomic) unsigned preferredCodec; 
@property (assign,nonatomic) BOOL isUsingSuppression; 
@property (assign,nonatomic) BOOL isGKVoiceChat; 
@property (nonatomic,readonly) VCVideoRule * conferenceCaptureRule; 
@property (assign) unsigned lastActiveCall; 
@property (assign) BOOL isValid; 
@property (readonly) int deviceRole;                                                                                   //@synthesize deviceRole=_deviceRole - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)NATTypeDictionaryUpdated:(id)arg1 ;
-(void)triggerInterfaceChange;
-(void)setConferenceState:(unsigned)arg1 forCallID:(unsigned)arg2 ;
-(void)setConferenceVisualRectangle:(CGRect)arg1 forCallID:(unsigned)arg2 ;
-(BOOL)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(BOOL)onCaptureFrame:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC13)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)shouldSendBlackFrame:(BOOL)arg1 callID:(id)arg2 ;
-(BOOL)stopVideoSend:(BOOL)arg1 error:(id*)arg2 ;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4 ;
-(void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2 ;
-(void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4 ;
-(void)session:(id)arg1 remoteMediaStalled:(BOOL)arg2 ;
-(void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2 ;
-(void)session:(id)arg1 packMeters:(char*)arg2 withLength:(char*)arg3 ;
-(void)session:(id)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3 ;
-(void)didChangeLocalVariablesForSession:(id)arg1 ;
-(void)session:(id)arg1 sendRelayResponse:(id)arg2 ;
-(int)currentCameraID;
-(void)session:(id)arg1 inititiateRelayRequest:(id)arg2 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 withCallID:(unsigned)arg3 ;
-(void)closeConnectionForSession:(id)arg1 withCallID:(unsigned)arg2 ;
-(void)session:(id)arg1 cancelRelayRequest:(id)arg2 ;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 networkHint:(BOOL)arg3 ;
-(void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned)arg3 localUseCell:(unsigned)arg4 remoteUseCell:(unsigned)arg5 error:(id)arg6 ;
-(void)session:(id)arg1 didStopWithError:(id)arg2 ;
-(void)session:(id)arg1 didStopWithDelay:(long long)arg2 error:(id)arg3 ;
-(void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned)arg2 ;
-(void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned)arg2 ;
-(void)session:(id)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3 error:(id)arg4 ;
-(BOOL)session:(id)arg1 startVideoSend:(id*)arg2 captureRule:(id)arg3 isUnpausing:(BOOL)arg4 ;
-(BOOL)session:(id)arg1 startVideoReceive:(id*)arg2 ;
-(BOOL)session:(id)arg1 didStopVideoIO:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)stopVideoReceive:(id*)arg1 ;
-(BOOL)didDetectBandwidth:(BOOL)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3 ;
-(void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4 ;
-(void)session:(id)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3 ;
-(void)session:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 withCallID:(unsigned)arg3 ;
-(void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3 ;
-(void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3 ;
-(void)session:(id)arg1 didChangeVideoRule:(id)arg2 ;
-(BOOL)session:(id)arg1 receivedRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC13)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7 ;
-(void)session:(id)arg1 didSeeThermalChange:(double)arg2 ;
-(BOOL)session:(id)arg1 startVideoIO:(id*)arg2 captureRule:(id)arg3 isUnpausing:(BOOL)arg4 ;
-(void)unlock;
-(void)getNSError:(id*)arg1 code:(long long)arg2 detailedCode:(long long)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6 ;
-(void)getNSError:(id*)arg1 code:(long long)arg2 detailedCode:(long long)arg3 returnCode:(long long)arg4 filePath:(id)arg5 description:(id)arg6 reason:(id)arg7 ;
-(void)wrlock;
-(void)rdlock;
-(void)stopCallID:(unsigned)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3 ;
-(int)tryrdlock;
-(void)markUnfinishedSessions;
-(void)cleanupProc:(id)arg1 ;
-(void)threadSafeCleanupSession:(id)arg1 ;
-(void)cleanupSession:(id)arg1 withDelay:(unsigned long long)arg2 ;
-(void)cleanupSession:(id)arg1 didRemoteCancel:(BOOL)arg2 ;
-(unsigned)connectionResultCallbackForCallID:(unsigned)arg1 result:(tagCONNRESULT*)arg2 didReceiveICEPacket:(BOOL)arg3 didUseRelay:(BOOL)arg4 secretKey:(CFDataRef)arg5 skeResult:(int)arg6 ;
-(void)defaultCleanupSession:(id)arg1 ;
-(BOOL)setPauseAudio:(BOOL)arg1 ;
-(BOOL)setPauseVideo:(BOOL)arg1 ;
-(id)sessionForParticipantID:(id)arg1 ;
-(id)openSessionForParticipant:(id)arg1 ;
-(id)sessionForIncomingParticipantID:(id)arg1 ;
-(id)sessionForIncomingConnectionResult:(tagCONNRESULT*)arg1 ;
-(id)loopbackSessionWaitingForSIPInvite;
-(BOOL)matchesCallID:(unsigned)arg1 ;
-(BOOL)matchesOpenSessionForParticipantID:(id)arg1 ;
-(unsigned)callIDForOpenSessionWithParticipantID:(id)arg1 ;
-(BOOL)matchesParticipantID:(id)arg1 ;
-(BOOL)hasSessionWaitingForSIPInvite;
-(BOOL)matchesIncomingConnectionResult:(tagCONNRESULT*)arg1 ;
-(int)stateForCallID:(unsigned)arg1 ;
-(int)sipCallbackNotification:(int)arg1 callID:(unsigned)arg2 msgIn:(const char*)arg3 msgOut:(char*)arg4 optional:(void*)arg5 confIndex:(int*)arg6 ;
-(int)pullDecodedMeshMode:(char*)arg1 timestamp:(unsigned)arg2 numBytes:(int)arg3 numSamples:(int)arg4 ;
-(BOOL)updateSpeaking:(unsigned)arg1 timeStamp:(unsigned)arg2 ;
-(int)captureAsFocus:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 averagePower:(unsigned char)arg6 ;
-(int)captureAsFocusClient:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(unsigned char)arg5 ;
-(int)captureMeshMode:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6 ;
-(int)pullDecodedAsFocus:(char*)arg1 timestamp:(unsigned)arg2 numBytes:(int)arg3 numSamples:(int)arg4 ;
-(int)pullDecodedAsFocusClient:(char*)arg1 timestamp:(unsigned)arg2 numBytes:(int)arg3 numSamples:(int)arg4 ;
-(BOOL)recvSamplesForSession:(id)arg1 samples:(char*)arg2 numBytes:(int)arg3 numSamples:(int)arg4 storeTimestamp:(unsigned)arg5 ;
-(unsigned)pruneQuietestPeers:(unsigned)arg1 talking:(unsigned)arg2 mask:(unsigned)arg3 meters:(char*)arg4 ;
-(unsigned)calculateTalkingMaskAtTimeStamp:(unsigned)arg1 samples:(char*)arg2 numBytes:(int)arg3 numSamples:(int)arg4 ;
-(void)calculateMixingArrays:(unsigned*)arg1 talkingMask:(unsigned)arg2 ;
-(void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)updateMeters:(unsigned short)arg1 ;
-(void)setDelegate:(NSObject*<VideoConferenceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<VideoConferenceDelegate>)delegate;
-(BOOL)isValid;
-(BOOL)setActive:(BOOL)arg1 ;
-(unsigned)initializeNewCallWithDeviceRole:(int)arg1 ;
-(void)stopAllCalls:(id)arg1 ;
-(void)cleanupManager;
-(double)networkQualityForCallID:(unsigned)arg1 ;
-(void)setUseViceroyBlobFormat:(BOOL)arg1 ;
-(void)sendARPLData:(id)arg1 toCallID:(unsigned)arg2 ;
-(id)callMetadataForCallID:(unsigned)arg1 ;
-(void)setPeerCN:(id)arg1 callID:(unsigned)arg2 ;
-(void)setSessionID:(id)arg1 callID:(unsigned)arg2 ;
-(BOOL)requiresWifi;
-(void)setRequiresWifi:(BOOL)arg1 ;
-(void)stopCallID:(unsigned)arg1 ;
-(void)remoteCancelledCallID:(unsigned)arg1 ;
-(void)setCallReport:(unsigned)arg1 withReport:(id)arg2 ;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)processRemoteIPChange:(id)arg1 callID:(unsigned)arg2 ;
-(BOOL)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isInputMeteringEnabled;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isInputFrequencyMeteringEnabled;
-(void)setInputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isOutputFrequencyMeteringEnabled;
-(void)setOutputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(float)outputMeterLevel;
-(BOOL)getIsAudioPaused:(BOOL*)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)getIsVideoPaused:(BOOL*)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(float)inputMeterLevel;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
-(double)localFramerateForCallID:(unsigned)arg1 ;
-(double)localBitrateForCallID:(unsigned)arg1 ;
-(double)remoteFramerateForCallID:(unsigned)arg1 ;
-(double)remoteBitrateForCallID:(unsigned)arg1 ;
-(int)localFrameHeight;
-(int)localFrameWidth;
-(double)remotePacketLossRateForCallID:(unsigned)arg1 ;
-(double)localPacketLossRateForCallID:(unsigned)arg1 ;
-(double)roundTripTimeForCallID:(unsigned)arg1 ;
-(id)statsForCallID:(unsigned)arg1 ;
-(void)setEnableSpeakerPhone:(BOOL)arg1 ;
-(BOOL)isSpeakerPhoneEnabled;
-(int)natType;
-(BOOL)setPauseAudio:(BOOL)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)setPauseVideo:(BOOL)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(void)updateCapabilities:(id)arg1 forCallID:(unsigned)arg2 ;
-(void)processRelayRequestResponse:(unsigned)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3 ;
-(void)processRelayUpdate:(unsigned)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3 ;
-(void)setPeerProtocolVersion:(unsigned)arg1 forCallID:(unsigned)arg2 ;
-(int)deviceRole;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)onCaptureSound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned)arg9 ;
-(BOOL)onPlaySound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(float)arg5 ;
-(BOOL)canProcessAudio;
-(void)setCanProcessAudio:(BOOL)arg1 ;
-(void)handlePrimaryConnChange:(tagCONNRESULT*)arg1 oldResult:(tagCONNRESULT*)arg2 ;
-(int)packetsPerBundle;
-(void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2 ;
-(void)setQualityDelegate:(NSObject*<VideoConferenceChannelQualityDelegate>)arg1 ;
-(NSObject*<VideoConferenceChannelQualityDelegate>)qualityDelegate;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 error:(id*)arg7 ;
-(id)inviteDataForParticipantID:(id)arg1 callID:(unsigned*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(BOOL)isGKVoiceChat;
-(NSObject*<VideoConferenceRealTimeChannel>)rtChannel;
-(BOOL)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(BOOL)arg1 ;
-(BOOL)shouldTimeoutPackets;
-(void)setShouldTimeoutPackets:(BOOL)arg1 ;
-(void)cleanupQueues;
-(void)warmupForCall:(int)arg1 deviceRole:(int)arg2 ;
-(id)newSessionWithDeviceRole:(int)arg1 ;
-(int)natTypeForCallSessions:(const char*)arg1 ;
-(void)setIsUsingSuppression:(BOOL)arg1 ;
-(void)notifyDelegateOfLocalVariablesChange;
-(void)setConferenceOperatingMode:(int)arg1 ;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id*)arg9 ;
-(unsigned char)powerFloatToInt:(float)arg1 ;
-(void)sendData:(id)arg1 toCallID:(unsigned)arg2 encrypted:(BOOL)arg3 ;
-(double)packetLossRateForCallID:(unsigned)arg1 ;
-(void)setChatMode:(int)arg1 ;
-(void)setIsFocus:(BOOL)arg1 ;
-(void)inviteDataForParticipantID:(id)arg1 callID:(unsigned)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(unsigned long long)arg4 block:(/*^block*/id)arg5 queue:(id)arg6 caller:(id)arg7 ;
-(void)connectionBlobForParticipantID:(id)arg1 callID:(unsigned)arg2 block:(/*^block*/id)arg3 queue:(id)arg4 caller:(id)arg5 ;
-(id)connectionBlobForParticipantID:(id)arg1 callID:(unsigned*)arg2 error:(id*)arg3 ;
-(BOOL)shouldSendAudioForCallID:(unsigned)arg1 ;
-(void)setSendAudio:(BOOL)arg1 forCallID:(unsigned)arg2 ;
-(BOOL)shouldReinitializeCallWithDuration:(double)arg1 forCallID:(unsigned)arg2 ;
-(int)conferenceOperatingMode;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 oldCallID:(unsigned)arg3 usingInviteData:(id)arg4 isCaller:(BOOL)arg5 relayResponseDict:(id)arg6 didOriginateRelayRequest:(BOOL)arg7 capabilities:(id)arg8 idsSocket:(int)arg9 error:(id*)arg10 ;
-(void)setCurrentFocus:(NSString *)arg1 ;
-(void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2 ;
-(void)updatedConnectedPeers:(id)arg1 ;
-(void)setCallReportProtobuf:(unsigned)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3 ;
-(unsigned)setRemoteVideoDestination:(void*)arg1 facing:(BOOL)arg2 ;
-(CGSize)remoteFrameSizeForCallID:(unsigned)arg1 ;
-(void)forceNoICE:(BOOL)arg1 ;
-(void)setHasMic:(BOOL)arg1 ;
-(BOOL)hasMic;
-(void)setConferenceVolume:(float)arg1 ;
-(float)conferenceVolume;
-(float)powerIntToFloat:(unsigned char)arg1 ;
-(void)setRTChannel:(id)arg1 ;
-(int)chatMode;
-(BOOL)isFocus;
-(NSString *)currentFocus;
-(unsigned)preferredCodec;
-(void)setPreferredCodec:(unsigned)arg1 ;
-(int)upstreamBandwidth;
-(void)setUpstreamBandwidth:(int)arg1 ;
-(int)downstreamBandwidth;
-(void)setDownstreamBandwidth:(int)arg1 ;
-(NSObject*<VideoConferenceSpeakingDelegate>)speakingDelegate;
-(void)setSpeakingDelegate:(NSObject*<VideoConferenceSpeakingDelegate>)arg1 ;
-(BOOL)useViceroyBlobFormat;
-(BOOL)isUsingSuppression;
-(unsigned)talkingPeersLimit;
-(void)setTalkingPeersLimit:(unsigned)arg1 ;
-(BOOL)disableVAD;
-(void)setDisableVAD:(BOOL)arg1 ;
-(BOOL)shouldPrioritizeParticipantIDForSIPInvite;
-(void)setShouldPrioritizeParticipantIDForSIPInvite:(BOOL)arg1 ;
-(VCVideoRule *)conferenceCaptureRule;
-(unsigned)lastActiveCall;
-(void)setLastActiveCall:(unsigned)arg1 ;
@end

