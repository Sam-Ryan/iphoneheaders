/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VideoConferenceDefaults : NSObject {

	int _forceCaptureWidth;
	int _forceCaptureHeight;
	int _forceEncodeWidth;
	int _forceEncodeHeight;
	int _forceFramerate;
	int _forceBitrate;
	int _forceVideoPayload;
	int _forceRecvVideoPayload;

}

@property (readonly) BOOL forceHWI; 
@property (readonly) int forceCaptureWidth; 
@property (readonly) int forceCaptureHeight; 
@property (readonly) int forceEncodeWidth; 
@property (readonly) int forceEncodeHeight; 
@property (readonly) int forceFramerate; 
@property (readonly) int forceBitrate; 
@property (readonly) int forceVideoPayload; 
@property (readonly) int forceRecvVideoPayload; 
@property (readonly) BOOL enableBitstreamCapture; 
@property (readonly) int enable2vuyCapture; 
@property (readonly) BOOL enableVPBLogging; 
@property (readonly) int enableTxSourceYuvDump; 
@property (readonly) BOOL enableTxBitstreamDump; 
@property (readonly) BOOL enableRecvBitstreamDump; 
@property (readonly) BOOL disableVAD; 
@property (readonly) int bundleAudio; 
@property (readonly) BOOL audioRecordingEnabled; 
@property (readonly) BOOL cannedReplayEnabled; 
@property (readonly) int max2GRate; 
@property (readonly) BOOL forceIPv6; 
+(id)VideoConferenceDefaultsSingleton;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)audioRecordingEnabled;
-(BOOL)forceIPv6;
-(BOOL)forceHWI;
-(int)forceVideoPayload;
-(int)forceRecvVideoPayload;
-(int)forceBitrate;
-(int)forceCaptureWidth;
-(int)forceCaptureHeight;
-(int)forceFramerate;
-(int)forceEncodeWidth;
-(int)forceEncodeHeight;
-(int)max2GRate;
-(BOOL)disableVAD;
-(BOOL)cannedReplayEnabled;
-(BOOL)enableBitstreamCapture;
-(int)enable2vuyCapture;
-(BOOL)enableVPBLogging;
-(BOOL)enableRecvBitstreamDump;
-(int)enableTxSourceYuvDump;
-(BOOL)enableTxBitstreamDump;
-(int)bundleAudio;
@end

