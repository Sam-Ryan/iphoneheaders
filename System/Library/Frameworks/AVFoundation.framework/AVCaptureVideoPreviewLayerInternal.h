/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureSession, AVCaptureConnection, CALayer, AVWeakReference;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {

	NSString* sinkID;
	AVCaptureSession* session;
	AVCaptureConnection* connection;
	OpaqueFigCaptureSessionRef figCaptureSession;
	CALayer* sublayer;
	CGSize sensorSize;
	NSString* sensorToPreviewVTScalingMode;
	CGSize previewSize;
	double previewRotationDegrees;
	NSString* gravity;
	BOOL disableActions;
	AVWeakReference* weakReference;
	long long orientation;
	BOOL automaticallyAdjustsMirroring;
	BOOL mirrored;
	BOOL isPresentationLayer;
	BOOL visible;
	BOOL isPaused;
	BOOL chromaNoiseReductionEnabled;
	int changeSeed;
	CGAffineTransform captureDeviceTransform;
	double rollAdjustment;

}
@end

