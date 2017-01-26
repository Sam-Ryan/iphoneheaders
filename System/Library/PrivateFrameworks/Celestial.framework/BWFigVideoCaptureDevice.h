/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWCaptureDevice.h>
#import <libobjc.A.dylib/BWZoomCompletionDelegate.h>

@protocol OS_dispatch_queue, BWFigVideoDeviceStillImageCaptureDelegate, OS_dispatch_group;
@class NSObject, NSDictionary, NSArray, NSMutableArray, NSMutableDictionary, BWStillImageTimeMachine, BWZoomCommandHandler, NSData, BWDeviceMotionActivityDetector, NSString;

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {

	OpaqueFigCaptureDeviceRef _device;
	OpaqueFigCaptureStreamRef _stream;
	BOOL _usingMultipleStreamOutputs;
	OpaqueCMClockRef _clock;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	opaqueCMBufferQueueRef _streamQueue;
	opaqueCMBufferQueueTriggerTokenRef _streamQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _bufferServicingQueue;
	NSObject*<OS_dispatch_queue> _focusAndExposureUpdateQueue;
	opaqueCMBufferQueueRef _stillImageQueue;
	opaqueCMBufferQueueTriggerTokenRef _stillImageQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _stillImageServicingQueue;
	BOOL _streaming;
	NSDictionary* _supportedProperties;
	NSArray* _supportedFormats;
	long long _activeFormatIndex;
	BOOL _fullRangeVideo;
	float _minimumFrameRate;
	float _maximumFrameRate;
	CFStringRef _portType;
	int _position;
	NSDictionary* _attributes;
	int _clientRetainedBufferCountHint;
	NSMutableArray* _streamingClientCallbacks;
	NSMutableArray* _stillImageClientCallbacks;
	BOOL _deferMetadataDictionaryCreation;
	OpaqueFigFlatDictionaryKeySpecRef _metadataKeySpec;
	BOOL _attachMetadataFlatDictionary;
	/*function pointer*/void* _createAutofocusSampleBufferProcessorFunction;
	NSObject*<OS_dispatch_queue> _autofocusProcessorQueue;
	NSMutableDictionary* _autofocusCachedPropertiesDictionary;
	OpaqueFigSimpleMutexRef _autofocusStatusMutex;
	OpaqueFigSampleBufferProcessorRef _autofocusProcessor;
	BOOL _allowAEStableNotifications;
	BOOL _aeStable;
	SCD_Struct_BW2 _aeRequestTime;
	int _aeRequestCount;
	int _aeFrameWaitCount;
	BOOL _allowAWBStableNotifications;
	BOOL _awbStable;
	CGRect _cachedFocusRect;
	CGRect _cachedExposureRect;
	BOOL _useAutoImageControlMode;
	int _autoImageControlMode;
	int _currentImageControlMode;
	BOOL _faceDetectionMetadataRequested;
	NSDictionary* _faceDetectionConfiguration;
	BOOL _faceDetectionEnabled;
	int _frameStatisticsLock;
	SCD_Struct_BW72 _currentFrameStatistics;
	BOOL _hasFlash;
	BOOL _autoFlashEnabled;
	float _autoFlashNormalizedSNRThreshold;
	BOOL _flashActive;
	double _stillImageStabilizationIntegrationTimeThreshold;
	BOOL _stillImageStabilizationAutomaticallyEnabled;
	int _stillImageStabilizationOverride;
	BOOL _hasNightMode;
	OpaqueFigSimpleMutexRef _torchLock;
	BOOL _autoTorchEnabled;
	BOOL _autoTorchStatsCheckedForVideoRecording;
	BOOL _torchActive;
	float _torchLevel;
	float _maxTorchLevel;
	BOOL _hdrSceneDetectionEnabled;
	BOOL _hdrScene;
	int _lowLightBoostLock;
	BOOL _lowLightBoostSupportedForFormat;
	BOOL _lowLightBoostActive;
	BOOL _stillImageCaptureEnabled;
	BOOL _timeMachineEnabledForMultistream;
	/*^block*/id _stillImageBufferTimeMachineHandler;
	int _timeMachineCapacity;
	BWStillImageTimeMachine* _timeMachine;
	BOOL _quadraHighResStillImageCaptureEnabled;
	float _quadraLowLightResampledNormalizedSNRThreshold;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	BOOL _providesPreBracketedEV0;
	BOOL _stillImageISPChromaNoiseReductionEnabled;
	id<BWFigVideoDeviceStillImageCaptureDelegate> _stillImageCaptureDelegate;
	NSObject*<OS_dispatch_group> _stillImageCaptureDelegateDispatchGroup;
	int _expectedImagesOrErrorsForCaptureStillImageNow;
	int _receivedImagesOrErrorsForCaptureStillImageNow;
	int _skippedFramesCountForAF;
	int _stillImageCaptureLock;
	BOOL _grabNextFrame;
	BOOL _retryCaptureStillImageNow;
	BOOL _retryCaptureUsesFlash;
	NSMutableDictionary* _retryStillImageCaptureOptions;
	int _currentManualFocusCompletedID;
	int _currentManualExposureCompletedID;
	int _currentBiasedExposureCompletedID;
	int _currentManualWhiteBalanceCompletedID;
	NSMutableDictionary* _observedProperties;
	OpaqueFigSimpleMutexRef _manualPropertyMutex;
	float _lensPosition;
	SCD_Struct_BW2 _exposureDuration;
	float _ISO;
	float _exposureTargetBias;
	float _exposureTargetOffset;
	SCD_Struct_Fi54 _deviceWhiteBalanceGains;
	SCD_Struct_Fi54 _grayWorldWhiteBalanceGains;
	NSObject*<OS_dispatch_queue> _whiteBalanceGainsQueue;
	NSMutableDictionary* _whiteBalanceGains;
	NSMutableArray* _whiteBalanceGainsOrderedKeys;
	int _whiteBalanceModeForExif;
	BWZoomCommandHandler* _zoomCommandHandler;
	float _maxISPZoomFactor;
	SCD_Struct_BW12 _ispOutputDimensions;
	SCD_Struct_BW12 _maxISPCropDimensions;
	SCD_Struct_BW12 _lastISPCropDimensions;
	CGSize _overscanPercentage;
	int _cameraAccessLock;
	BOOL _clientProcessHasAccessToCamera;
	NSData* _auditTokenData;
	int _clientPID;
	BOOL _feature1Enabled;
	NSObject*<OS_dispatch_queue> _feature1ProcessorQueue;
	OpaqueFigSampleBufferProcessorRef _feature1Processor;
	BOOL _hasSphere;
	BOOL _sphereVideoSupported;
	BOOL _sphereVideoEnabled;
	int _sphereLock;
	BOOL _enableSphereWhenAvailable;
	BOOL _sphereEnabled;
	BOOL _motionDataInvalid;
	BWDeviceMotionActivityDetector* _deviceMotionActivityDetector;
	int _deviceReleaseBehavior;
	NSMutableDictionary* _dutyCycleMetadataCache;

}

@property (assign,nonatomic) int deviceReleaseBehavior;              //@synthesize deviceReleaseBehavior=_deviceReleaseBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)unregisterCallbacksForClient:(int)arg1 ;
+(CFStringRef)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1 ;
-(void)dealloc;
-(int)position;
-(void)captureStillImageNow;
-(BOOL)isStreaming;
-(void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2 ;
-(BOOL)isPropertyObserved:(id)arg1 ;
-(id)initWithPosition:(int)arg1 attributes:(id)arg2 forClientWithAuditTokenData:(id)arg3 clientIDOut:(int*)arg4 deviceAvailabilityChangedHandler:(/*^block*/id)arg5 ;
-(id)supportedFormats;
-(float)minimumFrameRate;
-(void)setMinimumFrameRate:(float)arg1 ;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(id)cameraTuningParametersDictionary;
-(id)sensorIDDictionary;
-(id)moduleInfo;
-(void)registerForAEMatrixMetadata;
-(void)unregisterForAEMatrixMetadata;
-(void)registerForFaceDetectionMetadata;
-(void)unregisterForFaceDetectionMetadata;
-(void)drainNotifications;
-(id)bufferServicingQueue;
-(void)disposeFigCaptureDevice;
-(BOOL)startStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)stopStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(long long)activeFormatIndex;
-(void)setActiveFormatIndex:(long long)arg1 ;
-(BOOL)registerStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)stillImageCaptureEnabled;
-(void)setStillImageCaptureEnabled:(BOOL)arg1 ;
-(id)stillImageCaptureDelegate;
-(void)setStillImageCaptureDelegate:(id)arg1 ;
-(void)captureStillImageWithFlashNow;
-(void)captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2 ;
-(BOOL)providesPreBracketedEV0;
-(int)setFocusModeAutoWithRect:(CGRect)arg1 continuous:(BOOL)arg2 smooth:(BOOL)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5 ;
-(int)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2 ;
-(int)setExposureModeAutoWithRect:(CGRect)arg1 ;
-(int)_updateExposureRectIfNeededForZoomFactor:(float)arg1 ;
-(int)setExposureModeLocked;
-(int)setExposureTargetBias:(float)arg1 requestID:(int)arg2 ;
-(int)setExposureModeCustomWithExposureDuration:(SCD_Struct_BW2)arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5 ;
-(int)_attachMetadataFlatDictionaryToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)autoImageControlMode;
-(int)setAutoImageControlMode:(int)arg1 ;
-(int)setWhiteBalanceModeAuto;
-(int)setWhiteBalanceModeLockedWithGains:(SCD_Struct_Fi54)arg1 requestID:(int)arg2 ;
-(int)setFaceDetectionDrivenImageProcessingMode:(int)arg1 ;
-(int)setTorchLevel:(float)arg1 ;
-(int)setAutomaticallyAdjustsTorch:(BOOL)arg1 ;
-(void)setMaxTorchLevel:(float)arg1 ;
-(BOOL)setAutoFlashEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(id)zoomCommandHandler;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 commandID:(int)arg3 ;
-(void)setOverscanPercentage:(CGSize)arg1 ;
-(void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4 ;
-(void)setProperty:(id)arg1 isObserved:(BOOL)arg2 ;
-(BOOL)setHDRSceneDetectionEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(int)setLowLightBoostAutomaticallyEnabled:(BOOL)arg1 supportedForFormat:(BOOL)arg2 ;
-(void)setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(void)setStillImageStabilizationIntegrationTimeThreshold:(double)arg1 ;
-(double)stillImageStabilizationIntegrationTimeThreshold;
-(int)lowLightCompensationModeForStatistics:(SCD_Struct_BW72*)arg1 flashMode:(int)arg2 sisMode:(int)arg3 ;
-(BOOL)sphereVideoEnabled;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(OpaqueFigCaptureISPProcessingSessionRef)newISPProcessingSessionWithType:(int)arg1 ;
-(void)setEnableSphereWhenAvailable:(BOOL)arg1 ;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)captureQuadraResampledStillImageNow;
-(void)getCurrentVideoFrameStatistics:(SCD_Struct_BW72*)arg1 ;
-(void)setClientRetainedBufferCountHint:(int)arg1 ;
-(void)setUsesFullRangeVideo:(BOOL)arg1 ;
-(int)setAlternateOutputSizeAndCrop:(id)arg1 ;
-(void)setTimeMachineEnabledForMultistream:(BOOL)arg1 ;
-(void)setStillImageBufferTimeMachineHandler:(/*^block*/id)arg1 ;
-(void)sourceNodeWillStartStreaming;
-(void)sourceNodeDidStopStreaming;
-(void)sourceNodeDidStartStreaming;
-(id)streamSupportedProperties;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1 ;
-(int)timeMachineCapacity;
-(void)sourceNodeWillDiscardVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitVideoPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(int)arg1 ;
-(void)setDeviceReleaseBehavior:(int)arg1 ;
-(id)_initWithFigCaptureDeviceRef:(OpaqueFigCaptureDeviceRef)arg1 figCaptureStreamRef:(OpaqueFigCaptureStreamRef)arg2 attributes:(id)arg3 clientAuditTokenData:(id)arg4 createAutofocusSampleBufferProcessorFunction:(/*function pointer*/void*)arg5 ;
-(BOOL)_unprepareStreamQueue;
-(void)_updateSphereMode;
-(void)_setFaceDetectionEnabled:(BOOL)arg1 ;
-(int)_updateFaceDetectionConfigurationOnStream:(id)arg1 ;
-(void)_updateImageControlModeStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateExposureStateForAutofocusProperty:(CFStringRef)arg1 ;
-(void)_updateWhiteBalanceStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateFaceDetectionStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(int)_copyAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(int)_setAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(BOOL)_prepareStreamQueue;
-(void)_willStartStreaming;
-(void)_didStopStreaming;
-(void)_didStartStreaming;
-(void)_updateZoomCapabilitiesForActiveFormatIndex:(long long)arg1 ;
-(void)_handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addCaptureStreamAttachments:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupAutofocusSampleBufferProcessor;
-(int)_setupFeature1SampleBufferProcessor;
-(void)_serviceLowLightBoostActiveNotification:(opaqueCMSampleBufferRef)arg1 ;
-(void)_teardownAutoFocusSampleBufferProcessor;
-(void)_teardownFeature1SampleBufferProcessor;
-(void)_serviceZoomForSampleBuffer:(opaqueCMSampleBufferRef)arg1 updateISPZoom:(BOOL)arg2 ;
-(BOOL)isSphereEnabled;
-(void)_updateMotionDataStatus:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4 ;
-(BOOL)_prepareStillImageQueue;
-(BOOL)_unprepareStillImageQueue;
-(void)_captureStillImageNowWithTimeMachineType:(int)arg1 ;
-(void)_captureStillImageWithFlashNow;
-(void)_captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2 ;
-(void)_handleStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(int)arg2 ;
-(BOOL)_shouldUseSphereForStillImageCaptureTakingIntoAccountExposureDuration:(BOOL)arg1 deviceMotionActivity:(BOOL)arg2 ;
-(void)_resetStillImageCaptureRequestState;
-(void)_emitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 fromTimeMachine:(BOOL)arg2 ;
-(int)_captureStillImageNowOnStreamWithOptions:(id)arg1 flashMode:(BOOL)arg2 ;
-(void)_addAutofocusAndDiagnosticMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addFeature1ToMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addExifWhiteBalanceMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setAutofocusProcessorProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(int)_setExposureModeAutoWithRect:(CGRect)arg1 ;
-(int)_setAutofocusProcessorImageControlModeProperty:(int)arg1 ;
-(int)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1 ;
-(void)_updateISPCropForZoomFactor:(float)arg1 ;
-(float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1 ;
-(void)_postNotificationWithName:(id)arg1 payloadNewPropertyValue:(id)arg2 ;
-(int)_copyAutofocusProcessorProperty:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(int)clientRetainedBufferCountHint;
-(BOOL)usesFullRangeVideo;
-(void)_servicePropertyChangeNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceCompletedRequestNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)timeMachineEnabledForMultistream;
-(/*^block*/id)stillImageBufferTimeMachineHandler;
-(void)_serviceAutoTorchNotification;
-(BOOL)enableSphereWhenAvailable;
-(int)deviceReleaseBehavior;
-(OpaqueCMClockRef)clock;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(int)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(SCD_Struct_BW2)exposureDuration;
-(float)ISO;
-(float)exposureTargetOffset;
-(SCD_Struct_Fi54)deviceWhiteBalanceGains;
-(SCD_Struct_Fi54)grayWorldDeviceWhiteBalanceGains;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(float)exposureTargetBias;
-(int)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(int)setImageControlMode:(int)arg1 ;
-(float)lensPosition;
-(int)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(OpaqueFigCaptureStreamRef)stream;
@end

