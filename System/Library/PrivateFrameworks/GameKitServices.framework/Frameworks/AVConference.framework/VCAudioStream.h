/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamProtocol.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>
#import <libobjc.A.dylib/VCAudioIOClient.h>

@protocol OS_dispatch_source, OS_dispatch_queue, VCMediaStreamDelegate;
@class NSObject, NSMutableArray, DTMFEventHandler, WRMClient, VCAudioPayload, VCJitterBuffer, NSString, AVCMediaStreamConfig;

@interface VCAudioStream : NSObject <VCMediaStreamProtocol, WRMClientDelegate, VCAudioIOClient> {

	int numBufferBytesAvailable;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	double dAudioHostTime;
	double _rtpTimeoutEnabledTime;
	double _rtcpTimeoutEnabledTime;
	BOOL lastVoiceActive;
	double lastRTPTimeoutReportTime;
	double lastRTCPTimeoutReportTime;
	tagHANDLE* rtpHandle;
	char* bundleBuffer;
	unsigned conferenceID;
	unsigned lastInputAudioTimeStamp;
	unsigned lastSentAudioSampleTime;
	unsigned packetTimeoutCheckCounter;
	long long sampleRate;
	long long samplesPerFrame;
	opaque_pthread_rwlock_t stateLock;
	opaque_pthread_mutex_t sessionLock;
	NSMutableArray* audioPayloads;
	AudioStreamBasicDescription vpioFormat;
	int preferredAudioCodec;
	DTMFEventHandler* dtmfEventHandler;
	WRMClient* wrmClient;
	VCAudioPayload* currentAudioPayload;
	VCJitterBuffer* vcJitterBuffer;
	NSString* callID;
	opaqueRTCReportingRef reportingAgent;
	METER_INFO soundMeter[2];
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	int state;
	BOOL isSRTPInitialized;
	BOOL isValid;
	int deviceRole;
	AVCMediaStreamConfig* streamConfig;
	NSObject*<VCMediaStreamDelegate> delegate;

}

@property (assign,nonatomic) NSObject*<VCMediaStreamDelegate> delegate; 
@property (readonly) unsigned conferenceID; 
@property (assign) BOOL isValid; 
@property (assign) int deviceRole; 
@property (nonatomic,retain) AVCMediaStreamConfig * streamConfig; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2 ;
-(void)setDelegate:(NSObject*<VCMediaStreamDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<VCMediaStreamDelegate>)delegate;
-(BOOL)isValid;
-(void)stop;
-(void)lock;
-(void)unlock;
-(void)start;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 ;
-(int)sendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6 voiceActivity:(BOOL)arg7 ;
-(void)checkPacketTimeouts;
-(BOOL)setupAudioEncoders;
-(BOOL)allocateBundleBuffer;
-(unsigned)codecTypeFromAudioPayload:(int)arg1 ;
-(int)deviceRole;
-(AVCMediaStreamConfig *)streamConfig;
-(BOOL)setupAudioCodecWithPayload:(int)arg1 ;
-(unsigned)AMRModeToBitrate:(long long)arg1 ;
-(id)addAudioPayload:(int)arg1 ;
-(unsigned)preferredAudioBitrate;
-(int)getSRTPMasterKeyLength:(long long)arg1 ;
-(int)getCryptoSet:(tagSRTPExchangeInfo*)arg1 withMasterKey:(id)arg2 ;
-(int)SRTPCipherSuiteForLTECipherSuite:(long long)arg1 ;
-(void)initializeWRM;
-(void)setFrequencyMeteringEnabled:(BOOL)arg1 meterType:(int)arg2 ;
-(void)uninitializeWRM;
-(id)setupRTPWithSockets:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id*)arg2 ;
-(id)supportedAudioPayloads;
-(BOOL)isSameSRTPConfig:(id)arg1 ;
-(void)setStreamConfig:(AVCMediaStreamConfig *)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(void)setupRTPPayloadsWithDestinationIPPort:(tagIPPORT*)arg1 ;
-(int)setupSRTP;
-(BOOL)configureAudioStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)choosePayload:(int*)arg1 count:(int)arg2 ;
-(BOOL)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(void)registerCodecChangeNotifications;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)startWRM;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPausedHeartbeat;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopWRM;
-(void)startPausedHeartbeat;
-(int)captureMeshMode:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6 voiceActivity:(BOOL)arg7 ;
-(void)updateSoundMeter:(int)arg1 samples:(char*)arg2 numSamples:(int)arg3 averagePower:(float)arg4 voiceActivity:(unsigned)arg5 ;
-(void)pullDecodedMeshMode:(char*)arg1 timestamp:(unsigned)arg2 numBytes:(int)arg3 numSamples:(int)arg4 ;
-(void)setIsValid:(BOOL)arg1 ;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3 ;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(void)setPause:(BOOL)arg1 ;
-(void)setStreamDirection:(long long)arg1 ;
-(long long)streamDirection;
-(void)setWRMMetricConfig:(SCD_Struct_VC14*)arg1 ;
-(BOOL)onCaptureSound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned)arg9 ;
-(BOOL)onPlaySound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(float)arg5 ;
-(BOOL)canProcessAudio;
-(void)setCanProcessAudio:(BOOL)arg1 ;
-(void)reportRTCPPackets:(tagRTCPPACKET*)arg1 withCount:(int)arg2 ;
-(BOOL)isFrequencyMeteringEnabled:(int)arg1 ;
-(void)sendDTMFEvent:(id)arg1 ;
-(void)stopSendDTMFEvent;
-(void)reportWRMMetrics:(const SCD_Struct_VC18*)arg1 ;
-(void)unregisterCodecChangeNotifications;
-(void)handleAMRCodecModeChange:(unsigned char)arg1 ;
-(unsigned)conferenceID;
@end

