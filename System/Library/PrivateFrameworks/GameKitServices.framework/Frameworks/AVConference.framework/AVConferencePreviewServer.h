/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, VideoCaptureProtocol, AVConferencePreviewDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, VideoAttributes, AVImageQueue;

@interface AVConferencePreviewServer : NSObject {

	int currentWidth;
	int currentHeight;
	int currentFrameRate;
	int previewFrameCount;
	int captureFrameCount;
	int encodedFrameCount;
	NSObject*<OS_dispatch_source> cameraHealthMonitor;
	int pendingWidth;
	int pendingHeight;
	int pendingFrameRate;
	unsigned currentCameraID;
	BOOL firstPreviewFrame;
	NSMutableArray* activeConferences;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	CGSize localExpectedPortraitAspectRatio;
	CGSize localExpectedLandscapeAspectRatio;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerConferenceQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerNotificationQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerVariablesQueue;
	NSObject*<VideoCaptureProtocol> avCapture;
	OpaqueVTPixelTransferSessionRef transferSession;
	CVPixelBufferPoolRef bufferPool;
	BOOL resize;
	NSObject*<AVConferencePreviewDelegate> appDelegate;
	double falteredRenderingtimeStamp;
	AVImageQueue* frontQueue;
	AVImageQueue* backQueue;
	int _thermalNotificationToken;
	int _thermalLevel;
	int _newThermalLevel;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewDelegate> appDelegate; 
+(id)AVConferencePreviewServerSingleton;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)stopPreview;
-(void)pausePreview;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(BOOL)setLocalScreenAttributes:(id)arg1 ;
-(CGSize)localScreenRatioForScreenOrientation:(int)arg1 ;
-(CGSize)localExpectedRatioForScreenOrientation:(int)arg1 ;
-(void)setFrameRatePercentage:(id)arg1 percentage:(double)arg2 ;
-(BOOL)registerForFrames:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 unpausing:(BOOL)arg5 ;
-(BOOL)deregisterForFrames:(id)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(id)localVideoAttributes;
-(BOOL)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(BOOL)arg4 ;
-(BOOL)setLocalVideoAttributes:(id)arg1 ;
-(unsigned)setLocalVideoDestination:(id)arg1 facing:(BOOL)arg2 ;
-(BOOL)isRunningPreview;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)handleAVCaptureError:(int)arg1 error:(id)arg2 ;
-(CVBufferRef)resizeFrame:(CVBufferRef)arg1 ;
-(BOOL)enqueueFrameToQueueFront:(BOOL)arg1 frame:(CVBufferRef)arg2 frameTime:(SCD_Struct_VC13)arg3 ;
-(void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)stopCapture;
-(void)setFrameRatePercentage:(double)arg1 ;
-(void)changeCameraToPendingSettingsWithReset:(BOOL)arg1 ;
-(void)resetCameraToPreviewSettingsForced:(BOOL)arg1 ;
-(void)reconnectClientLayerFront:(BOOL)arg1 ;
-(int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(BOOL)arg4 ;
-(void)setCurrentFrameRate:(int)arg1 ;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(BOOL)arg4 ;
-(void)handleVideoCaptureEvent:(id)arg1 ;
-(BOOL)onCaptureFrame:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC13)arg2 preview:(BOOL)arg3 droppedFrames:(int)arg4 isSwitching:(BOOL)arg5 cameraType:(int)arg6 ;
-(CFDictionaryRef)copyCameraColorInfo;
-(BOOL)registerForFrames:(id)arg1 unpausing:(BOOL)arg2 ;
-(BOOL)isConferenceRegisteredForFrames:(id)arg1 ;
-(id)copyLocalVideoAttributes;
-(id)copyLocalScreenAttributesForVideoAttributes:(id)arg1 ;
-(BOOL)setCaptureCamera:(unsigned)arg1 ;
-(unsigned)captureCamera;
-(NSObject*<AVConferencePreviewDelegate>)appDelegate;
-(void)setAppDelegate:(NSObject*<AVConferencePreviewDelegate>)arg1 ;
@end

