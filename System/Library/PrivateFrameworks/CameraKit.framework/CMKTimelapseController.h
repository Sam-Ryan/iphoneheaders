/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CMKStillImageCaptureRequestDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_dispatch_source;
@class CMKTimelapseState, NSObject, NSCountedSet, NSMutableSet, CMKLowDiskSpaceAlertView, NSDate, NSString;

@interface CMKTimelapseController : NSObject <CMKStillImageCaptureRequestDelegate, UIAlertViewDelegate> {

	BOOL __ignoringTimerCallbacksForTearDown;
	BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
	BOOL __backendRecoveryNeeded;
	BOOL __previewStarted;
	CMKTimelapseState* __state;
	NSObject*<OS_dispatch_source> __captureTimer;
	NSCountedSet* __inFlightTimelapseUUIDs;
	NSMutableSet* __pendingCompletedStates;
	CMKLowDiskSpaceAlertView* __diskSpaceAlert;

}

@property (getter=isCapturing,nonatomic,readonly) BOOL capturing; 
@property (nonatomic,readonly) NSDate * captureStartTime; 
@property (nonatomic,readonly) CMKTimelapseState * _state;                                               //@synthesize _state=__state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _captureTimer;                              //@synthesize _captureTimer=__captureTimer - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksForTearDown;                                  //@synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;                    //@synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inFlightTimelapseUUIDs;                                   //@synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _pendingCompletedStates;                                   //@synthesize _pendingCompletedStates=__pendingCompletedStates - In the implementation block
@property (nonatomic,readonly) CMKLowDiskSpaceAlertView * _diskSpaceAlert;                               //@synthesize _diskSpaceAlert=__diskSpaceAlert - In the implementation block
@property (assign,setter=_setBackendRecoveryNeeded:,nonatomic) BOOL _backendRecoveryNeeded;              //@synthesize _backendRecoveryNeeded=__backendRecoveryNeeded - In the implementation block
@property (assign,setter=_setPreviewStarted:,nonatomic) BOOL _previewStarted;                            //@synthesize _previewStarted=__previewStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)createPlaceholderAssetResponseForTimelapseState:(id)arg1 ;
+(id)_videoPreviewImageForTimelapseState:(id)arg1 ;
+(void)recoverFromCrashIfNeededForceEndLastSession:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(CMKTimelapseState *)_state;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_prepareForTimelapseCapture;
-(BOOL)_startCapturing;
-(void)_setNewCaptureState;
-(BOOL)_reserveDiskSpaceForTimelapseUUID:(id)arg1 ;
-(void)_updateFocusAndExposureForStopCapturing;
-(id)_createPlaceholderAssetForTimelapseState:(id)arg1 ;
-(void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4 ;
-(void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4 ;
-(BOOL)startCapturing;
-(BOOL)isCapturing;
-(void)stopCapturingWithReasons:(long long)arg1 ;
-(void)_deviceStarted:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)_sessionRuntimeErrored:(id)arg1 ;
-(void)_dismissDiskSpaceAlert;
-(void)_teardownCaptureTimer;
-(void)_restoreCaptureStateFromDisk;
-(void)_setBackendRecoveryNeeded:(BOOL)arg1 ;
-(void)_triggerBackendCrashRecoveryIfNeeded;
-(BOOL)_backendRecoveryNeeded;
-(BOOL)_previewStarted;
-(void)_updateFocusAndExposureForStartCapturing;
-(void)_startCaptureTimer;
-(void)_stopCapturingWithReasons:(long long)arg1 ;
-(void)_notifyAGGDForDidStartCapturingWithState:(id)arg1 ;
-(void)_saveStateToDisk:(id)arg1 ;
-(void)_notifyAGGDForDidStopCapturingWithState:(id)arg1 ;
-(void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2 ;
-(void)_captureTimerFired;
-(void)_updateLocationIfNecessary;
-(BOOL)_enqueueCaptureRequest;
-(void)_notifyInsufficientDiskSpaceForContinuingCapture;
-(void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
-(void)_setPreviewStarted:(BOOL)arg1 ;
-(void)restoreConfiguration;
-(NSDate *)captureStartTime;
-(NSObject*<OS_dispatch_source>)_captureTimer;
-(BOOL)_ignoringTimerCallbacksForTearDown;
-(BOOL)_ignoringTimerCallbacksWaitingForCaptureResponse;
-(NSCountedSet *)_inFlightTimelapseUUIDs;
-(NSMutableSet *)_pendingCompletedStates;
-(CMKLowDiskSpaceAlertView *)_diskSpaceAlert;
@end

