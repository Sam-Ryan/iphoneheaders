/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDevice.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceControlRequestQueue, AVWeakReference, NSMutableArray, NSMutableDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _fcsAttributes;
	NSObject*<OS_dispatch_queue> _devicePropsQueue;
	NSString* _fcsUID;
	long long _position;
	long long _origin;
	NSString* _localizedName;
	NSArray* _formats;
	AVCaptureDeviceFormat* _activeFormat;
	SCD_Struct_CM5 _activeMinFrameDuration;
	BOOL _activeMinFrameDurationSetByClient;
	SCD_Struct_CM5 _activeMaxFrameDuration;
	BOOL _activeMaxFrameDurationSetByClient;
	BOOL _cachesFigCaptureSourceConfigurationChanges;
	long long _focusMode;
	CGPoint _focusPointOfInterest;
	float _lensPositionKVO;
	BOOL _adjustingFocus;
	long long _autoFocusRangeRestriction;
	BOOL _smoothAutoFocusEnabled;
	BOOL _cameraOption9;
	BOOL _cameraOption10;
	CGRect _cameraFaceResult29;
	BOOL _cameraFaceResult30;
	long long _exposureMode;
	SCD_Struct_CM5 _exposureDurationKVO;
	float _ISOKVO;
	float _exposureTargetBias;
	float _exposureTargetOffsetKVO;
	CGPoint _exposurePointOfInterest;
	BOOL _adjustingExposure;
	BOOL _waitingForExposureAdjustmentBeforeLocking;
	long long _wbMode;
	SCD_Struct_AV42 _deviceWhiteBalanceGainsKVO;
	SCD_Struct_AV42 _grayWorldDeviceWhiteBalanceGainsKVO;
	BOOL _adjustingWB;
	unsigned long long _wbCalibrationCount;
	SCD_Struct_AV40* _wbCalibrationTemperatures;
	double* _wbCalibrationMatrices;
	double _wbLastPredictedTemp;
	double _wbSeedTemp;
	BOOL _wbSeedEnabled;
	unsigned long long _wbTemperatureIterations;
	BOOL _providesStortorgetMetadata;
	BOOL _automaticallyAdjustsImageControlMode;
	AVCaptureDeviceControlRequestQueue* _manualFocusControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _biasedExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualWhiteBalanceControlRequests;
	SCD_Struct_CM5 _lastCustomExposureDuration;
	float _lastCustomExposureISO;
	long long _imageControlMode;
	long long _flashMode;
	BOOL _flashActive;
	BOOL _flashAvailable;
	long long _torchMode;
	BOOL _torchActive;
	float _torchLevel;
	BOOL _torchAvailable;
	BOOL _isConnected;
	BOOL _subjectMonitoringEnabled;
	BOOL _faceDetectionDrivenImageProcessingEnabled;
	CGRect _faceRectangle;
	int _faceRectangleAngle;
	BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
	BOOL _lowLightBoostEnabled;
	BOOL _highDynamicRangeSceneDetectionEnabled;
	BOOL _automaticallyAdjustsVideoHDREnabled;
	BOOL _videoHDREnabled;
	BOOL _sceneIsHighDynamicRange;
	float _saturation;
	float _contrast;
	long long _videoZoomDownscaleStageHint;
	long long _videoZoomUpscaleStageHint;
	float _videoZoomFactor;
	float _videoZoomRampTarget;
	int _videoZoomRampCounter;
	float _videoZoomRampAcceleration;
	BOOL _videoZoomDrawOverlay;
	AVWeakReference* _weakReference;
	NSMutableArray* _captureSourceSupportedMetadata;
	NSDictionary* _supportedOptionalFaceDetectionFeatures;
	BOOL _eyeDetectionEnabled;
	BOOL _eyeClosedDetectionEnabled;
	BOOL _smileDetectionEnabled;
	NSArray* _availableBoxedMetadataFormatDescriptions;
	NSDictionary* _sessionPresetCompressionSettings;
	NSDictionary* _h264EncoderLimitations;
	NSObject*<OS_dispatch_queue> _observedHighFrequencyPropertiesQueue;
	NSMutableDictionary* _observedHighFrequencyPropertyCounts;
	NSMutableDictionary* _propertyToFigCaptureSourcePropertyMap;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;
	NSMutableDictionary* _cachedFigCaptureSourceProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_devices;
+(id)_newFigCaptureSources;
+(BOOL)_cameraAccessIsEnabled;
-(void)dealloc;
-(id)init;
-(void)setContrast:(float)arg1 ;
-(long long)position;
-(id)localizedName;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(float)contrast;
-(BOOL)isSISSupported;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(SCD_Struct_CM5)activeVideoMinFrameDuration;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_CM5)arg1 ;
-(BOOL)isActiveVideoMinFrameDurationSet;
-(void)_checkTCCAccess;
-(id)modelID;
-(BOOL)isSubjectAreaChangeMonitoringEnabled;
-(BOOL)isFaceDetectionDrivenImageProcessingEnabled;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(BOOL)providesStortorgetMetadata;
-(void)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(long long)deviceSourceOrigin;
-(BOOL)isHighDynamicRangeSceneDetectionEnabled;
-(void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1 ;
-(BOOL)cachesFigCaptureSourceConfigurationChanges;
-(void)_setVideoHDREnabled:(BOOL)arg1 ;
-(BOOL)isLensStabilizationSupported;
-(BOOL)isMachineReadableCodeDetectionSupported;
-(BOOL)isInUseByAnotherApplication;
-(BOOL)isActiveVideoMaxFrameDurationSet;
-(OpaqueCMClockRef)deviceClock;
-(long long)autoFocusRangeRestriction;
-(float)lensAperture;
-(SCD_Struct_CM5)exposureDuration;
-(float)ISO;
-(float)ISODigitalThreshold;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_CM5)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(float)exposureTargetOffset;
-(long long)whiteBalanceMode;
-(BOOL)isAdjustingWhiteBalance;
-(SCD_Struct_AV42)deviceWhiteBalanceGains;
-(SCD_Struct_AV42)grayWorldDeviceWhiteBalanceGains;
-(float)maxWhiteBalanceGain;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SCD_Struct_AV40)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 ;
-(SCD_Struct_AV42)deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV40)arg1 ;
-(SCD_Struct_AV40)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 ;
-(SCD_Struct_AV42)deviceWhiteBalanceGainsForTemperatureAndTintValues:(SCD_Struct_AV40)arg1 ;
-(BOOL)automaticallyAdjustsImageControlMode;
-(long long)imageControlMode;
-(BOOL)automaticallyAdjustsVideoHDREnabled;
-(BOOL)isVideoHDREnabled;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(BOOL)isRampingVideoZoom;
-(BOOL)isRawStillImageCaptureSupported;
-(BOOL)isLowLightBoostEnabled;
-(BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
-(id)supportedMetadataObjectIdentifiers;
-(BOOL)eyeDetectionEnabled;
-(BOOL)eyeClosedDetectionEnabled;
-(BOOL)smileDetectionEnabled;
-(id)availableBoxedMetadataFormatDescriptions;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV18)maxH264PhotoDimensions;
-(SCD_Struct_AV18)maxH264VideoDimensions;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(int)minMacroblocksForHighProfileAbove30fps;
-(void)_waitForServerConnectionDiedHandlerToFinish;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(id)_copyFormatsArray;
-(void)_incrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_decrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_updateFigCaptureSourceObserverCounts;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 ;
-(void)_drainManualControlRequestQueues;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)_setActiveFormat:(id)arg1 resetVideoZoomFactorAndMinMaxFrameDurations:(BOOL)arg2 ;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 cacheOnly:(BOOL)arg3 ;
-(int)_setActiveVideoMaxFrameDurationInternal:(SCD_Struct_CM5)arg1 ;
-(int)_setActiveVideoMinFrameDurationInternal:(SCD_Struct_CM5)arg1 ;
-(int)_setFocusWithMode:(long long)arg1 lensPosition:(float)arg2 requestID:(int)arg3 ;
-(BOOL)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1 ;
-(void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2 ;
-(int)_setExposureWithMode:(long long)arg1 duration:(SCD_Struct_CM5)arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(SCD_Struct_CM5*)arg5 ;
-(int)_setWhiteBalanceWithMode:(long long)arg1 gains:(SCD_Struct_AV42)arg2 requestID:(int)arg3 ;
-(BOOL)_ensureWhiteBalanceCalibrationUnpacked;
-(double)_whiteBalanceMixingFactorForTemperature:(double)arg1 ;
-(double)_predictedTempForGains:(SCD_Struct_AV42)arg1 ;
-(SCD_Struct_AV40)_chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 atMix:(double)arg2 ;
-(SCD_Struct_AV42)_deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV40)arg1 temperature:(double)arg2 ;
-(int)_setTorchMode:(long long)arg1 withLevel:(float)arg2 ;
-(id)_supportedOptionalFaceDetectionFeaturesDictionary;
-(int)_setFaceDetectionFeatureEnabled:(BOOL)arg1 enabledState:(BOOL*)arg2 ;
-(id)_faceDetectionConfigurationDictionary;
-(void)_restoreFigCaptureSourceProperties;
-(void)_setAdjustingFocus:(BOOL)arg1 ;
-(void)_setAdjustingExposure:(BOOL)arg1 ;
-(void)_setAdjustingWhiteBalance:(BOOL)arg1 ;
-(void)_setTorchLevel:(float)arg1 ;
-(void)_setImageControlMode:(long long)arg1 ;
-(void)_setHighDynamicRangeScene:(BOOL)arg1 ;
-(void)_setVideoZoomFactor:(double)arg1 ;
-(void)_setLowLightBoostEnabled:(BOOL)arg1 ;
-(void)_drainManualControlRequestQueue:(id)arg1 ;
-(double)_whiteBalanceTemperatureForMixingFactor:(double)arg1 ;
-(BOOL)_isWBSeedEnabled;
-(void)_setWBSeedEnabled:(BOOL)arg1 ;
-(unsigned long long)_wbTemperatureIterations;
-(float)videoZoomRampAcceleration;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(BOOL)videoZoomDrawOverlay;
-(void)setVideoZoomDrawOverlay:(BOOL)arg1 ;
-(long long)videoZoomDownscaleStageHint;
-(void)setVideoZoomDownscaleStageHint:(long long)arg1 ;
-(long long)videoZoomUpscaleStageHint;
-(void)setVideoZoomUpscaleStageHint:(long long)arg1 ;
-(id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(int)arg2 ;
-(BOOL)isVideoStabilizationSupported;
-(BOOL)hasFlash;
-(BOOL)lockForConfiguration:(id*)arg1 ;
-(BOOL)isFlashModeSupported:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)unlockForConfiguration;
-(BOOL)hasTorch;
-(BOOL)isTorchModeSupported:(long long)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
-(BOOL)isFocusModeSupported:(long long)arg1 ;
-(void)setFocusMode:(long long)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isAutoFocusRangeRestrictionSupported;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(long long)flashMode;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(id)activeFormat;
-(long long)exposureMode;
-(BOOL)isAdjustingExposure;
-(float)exposureTargetBias;
-(SCD_Struct_CM5)activeVideoMaxFrameDuration;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_CM5)arg1 ;
-(float)torchLevel;
-(long long)torchMode;
-(BOOL)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(long long)focusMode;
-(BOOL)isSmoothAutoFocusEnabled;
-(BOOL)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(BOOL)isFlashActive;
-(BOOL)isTorchActive;
-(BOOL)isTorchAvailable;
-(BOOL)isFlashAvailable;
-(double)videoZoomFactor;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(void)setActiveFormat:(id)arg1 ;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1 ;
-(void)setVideoHDREnabled:(BOOL)arg1 ;
-(void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(BOOL)isImageControlModeSupported:(long long)arg1 ;
-(void)setImageControlMode:(long long)arg1 ;
-(BOOL)isFaceDetectionSupported;
-(BOOL)isFaceDetectionDuringVideoPreviewSupported;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(BOOL)hasMediaType:(id)arg1 ;
-(id)formats;
-(float)lensPosition;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isConnected;
-(BOOL)isSmoothAutoFocusSupported;
-(void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isAdjustingFocus;
-(BOOL)isHighDynamicRangeScene;
-(void)_setFlashActive:(BOOL)arg1 ;
-(void)_setTorchActive:(BOOL)arg1 ;
-(void)_setFlashAvailable:(BOOL)arg1 ;
-(void)_setTorchAvailable:(BOOL)arg1 ;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(BOOL)isExposureModeSupported:(long long)arg1 ;
-(void)setExposureMode:(long long)arg1 ;
-(BOOL)isEyeDetectionSupported;
-(BOOL)isEyeClosedDetectionSupported;
-(void)setEyeDetectionEnabled:(BOOL)arg1 ;
-(void)setEyeClosedDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isSmileDetectionSupported;
-(void)setSmileDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isLowLightBoostSupported;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1 ;
-(BOOL)isHighDynamicRangeSceneDetectionSupported;
-(BOOL)isHDRSupported;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(void)setSmoothAutoFocusEnabled:(BOOL)arg1 ;
-(BOOL)isWhiteBalanceModeSupported:(long long)arg1 ;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(void)setVideoZoomFactor:(double)arg1 ;
-(BOOL)isLockedForConfiguration;
-(id)uniqueID;
-(void)cancelVideoZoomRamp;
-(float)minExposureTargetBias;
-(float)maxExposureTargetBias;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1 ;
@end

