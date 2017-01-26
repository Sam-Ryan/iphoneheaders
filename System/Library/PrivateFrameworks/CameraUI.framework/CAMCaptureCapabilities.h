/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMCaptureCapabilities : NSObject {

	BOOL _backCameraSupported;
	BOOL _frontCameraSupported;
	BOOL _backFlashSupported;
	BOOL _frontFlashSupported;
	BOOL _backTorchSupported;
	BOOL _frontTorchSupported;
	BOOL _backHDRSupported;
	BOOL _backAutomaticHDRSupported;
	BOOL _backHDROnSupported;
	BOOL _frontHDRSupported;
	BOOL _frontAutomaticHDRSupported;
	BOOL _frontHDROnSupported;
	BOOL _previewSupportedDuringHDR;
	BOOL _backIrisSupported;
	BOOL _frontIrisSupported;
	BOOL _liveFilteringSupported;
	BOOL _backBurstSupported;
	BOOL _frontBurstSupported;
	BOOL _squareModeSupported;
	BOOL _videoSupported;
	BOOL _stillDuringVideoSupported;
	BOOL _back60FPSVideoSupported;
	BOOL _front60FPSVideoSupported;
	BOOL _back4kVideoSupported;
	BOOL _front4kVideoSupported;
	BOOL _backSlomoSupported;
	BOOL _frontSlomoSupported;
	BOOL _back720p240Supported;
	BOOL _front720p240Supported;
	BOOL _back1080p120Supported;
	BOOL _front1080p120Supported;
	BOOL _backPanoramaSupported;
	BOOL _frontPanoramaSupported;
	BOOL _backTimelapseSupported;
	BOOL _frontTimelapseSupported;
	BOOL _backTorchPatternSupported;
	BOOL _frontTorchPatternSupported;
	BOOL _hasSystemTelephonyOfAnyKind;
	BOOL _forceTouchSupported;
	BOOL _internalInstall;
	BOOL _lockButtonAppropriateForShutter;
	BOOL _shutterSoundRequired;
	BOOL _lowEndHardware;
	BOOL __front720p30Supported;
	long long _maximumRecordedFileSize;
	long long _back720pMaxFPS;
	double __backVideoModeMaximumVideoZoomFactor;
	double __frontVideoModeMaximumVideoZoomFactor;
	double __backCaptureInterval;
	double __frontCaptureInterval;

}

@property (getter=isBackCameraSupported,nonatomic,readonly) BOOL backCameraSupported;                                      //@synthesize backCameraSupported=_backCameraSupported - In the implementation block
@property (getter=isFrontCameraSupported,nonatomic,readonly) BOOL frontCameraSupported;                                    //@synthesize frontCameraSupported=_frontCameraSupported - In the implementation block
@property (getter=isBackFlashSupported,nonatomic,readonly) BOOL backFlashSupported;                                        //@synthesize backFlashSupported=_backFlashSupported - In the implementation block
@property (getter=isFrontFlashSupported,nonatomic,readonly) BOOL frontFlashSupported;                                      //@synthesize frontFlashSupported=_frontFlashSupported - In the implementation block
@property (getter=isBackTorchSupported,nonatomic,readonly) BOOL backTorchSupported;                                        //@synthesize backTorchSupported=_backTorchSupported - In the implementation block
@property (getter=isFrontTorchSupported,nonatomic,readonly) BOOL frontTorchSupported;                                      //@synthesize frontTorchSupported=_frontTorchSupported - In the implementation block
@property (getter=isBackHDRSupported,nonatomic,readonly) BOOL backHDRSupported;                                            //@synthesize backHDRSupported=_backHDRSupported - In the implementation block
@property (getter=isBackAutomaticHDRSupported,nonatomic,readonly) BOOL backAutomaticHDRSupported;                          //@synthesize backAutomaticHDRSupported=_backAutomaticHDRSupported - In the implementation block
@property (getter=isBackHDROnSupported,nonatomic,readonly) BOOL backHDROnSupported;                                        //@synthesize backHDROnSupported=_backHDROnSupported - In the implementation block
@property (getter=isFrontHDRSupported,nonatomic,readonly) BOOL frontHDRSupported;                                          //@synthesize frontHDRSupported=_frontHDRSupported - In the implementation block
@property (getter=isFrontAutomaticHDRSupported,nonatomic,readonly) BOOL frontAutomaticHDRSupported;                        //@synthesize frontAutomaticHDRSupported=_frontAutomaticHDRSupported - In the implementation block
@property (getter=isFrontHDROnSupported,nonatomic,readonly) BOOL frontHDROnSupported;                                      //@synthesize frontHDROnSupported=_frontHDROnSupported - In the implementation block
@property (getter=isPreviewDuringHDRSupported,nonatomic,readonly) BOOL previewSupportedDuringHDR;                          //@synthesize previewSupportedDuringHDR=_previewSupportedDuringHDR - In the implementation block
@property (getter=isBackIrisSupported,nonatomic,readonly) BOOL backIrisSupported;                                          //@synthesize backIrisSupported=_backIrisSupported - In the implementation block
@property (getter=isFrontIrisSupported,nonatomic,readonly) BOOL frontIrisSupported;                                        //@synthesize frontIrisSupported=_frontIrisSupported - In the implementation block
@property (getter=isLiveFilteringSupported,nonatomic,readonly) BOOL liveFilteringSupported;                                //@synthesize liveFilteringSupported=_liveFilteringSupported - In the implementation block
@property (getter=isBackBurstSupported,nonatomic,readonly) BOOL backBurstSupported;                                        //@synthesize backBurstSupported=_backBurstSupported - In the implementation block
@property (getter=isFrontBurstSupported,nonatomic,readonly) BOOL frontBurstSupported;                                      //@synthesize frontBurstSupported=_frontBurstSupported - In the implementation block
@property (getter=isSquareModeSupported,nonatomic,readonly) BOOL squareModeSupported;                                      //@synthesize squareModeSupported=_squareModeSupported - In the implementation block
@property (getter=isVideoSupported,nonatomic,readonly) BOOL videoSupported;                                                //@synthesize videoSupported=_videoSupported - In the implementation block
@property (getter=isStillDuringVideoSupported,nonatomic,readonly) BOOL stillDuringVideoSupported;                          //@synthesize stillDuringVideoSupported=_stillDuringVideoSupported - In the implementation block
@property (nonatomic,readonly) long long maximumRecordedFileSize;                                                          //@synthesize maximumRecordedFileSize=_maximumRecordedFileSize - In the implementation block
@property (nonatomic,readonly) long long back720pMaxFPS;                                                                   //@synthesize back720pMaxFPS=_back720pMaxFPS - In the implementation block
@property (getter=isBack60FPSVideoSupported,nonatomic,readonly) BOOL back60FPSVideoSupported;                              //@synthesize back60FPSVideoSupported=_back60FPSVideoSupported - In the implementation block
@property (getter=isFront60FPSVideoSupported,nonatomic,readonly) BOOL front60FPSVideoSupported;                            //@synthesize front60FPSVideoSupported=_front60FPSVideoSupported - In the implementation block
@property (getter=isBack4kVideoSupported,nonatomic,readonly) BOOL back4kVideoSupported;                                    //@synthesize back4kVideoSupported=_back4kVideoSupported - In the implementation block
@property (getter=isFront4kVideoSupported,nonatomic,readonly) BOOL front4kVideoSupported;                                  //@synthesize front4kVideoSupported=_front4kVideoSupported - In the implementation block
@property (getter=isBackSlomoSupported,nonatomic,readonly) BOOL backSlomoSupported;                                        //@synthesize backSlomoSupported=_backSlomoSupported - In the implementation block
@property (getter=isFrontSlomoSupported,nonatomic,readonly) BOOL frontSlomoSupported;                                      //@synthesize frontSlomoSupported=_frontSlomoSupported - In the implementation block
@property (getter=isBack720p240Supported,nonatomic,readonly) BOOL back720p240Supported;                                    //@synthesize back720p240Supported=_back720p240Supported - In the implementation block
@property (getter=isFront720p240Supported,nonatomic,readonly) BOOL front720p240Supported;                                  //@synthesize front720p240Supported=_front720p240Supported - In the implementation block
@property (getter=isBack1080p120Supported,nonatomic,readonly) BOOL back1080p120Supported;                                  //@synthesize back1080p120Supported=_back1080p120Supported - In the implementation block
@property (getter=isFront1080p120Supported,nonatomic,readonly) BOOL front1080p120Supported;                                //@synthesize front1080p120Supported=_front1080p120Supported - In the implementation block
@property (getter=isBackPanoramaSupported,nonatomic,readonly) BOOL backPanoramaSupported;                                  //@synthesize backPanoramaSupported=_backPanoramaSupported - In the implementation block
@property (getter=isFrontPanoramaSupported,nonatomic,readonly) BOOL frontPanoramaSupported;                                //@synthesize frontPanoramaSupported=_frontPanoramaSupported - In the implementation block
@property (getter=isBackTimelapseSupported,nonatomic,readonly) BOOL backTimelapseSupported;                                //@synthesize backTimelapseSupported=_backTimelapseSupported - In the implementation block
@property (getter=isFrontTimelapseSupported,nonatomic,readonly) BOOL frontTimelapseSupported;                              //@synthesize frontTimelapseSupported=_frontTimelapseSupported - In the implementation block
@property (getter=isBackTorchPatternSupported,nonatomic,readonly) BOOL backTorchPatternSupported;                          //@synthesize backTorchPatternSupported=_backTorchPatternSupported - In the implementation block
@property (getter=isFrontTorchPatternSupported,nonatomic,readonly) BOOL frontTorchPatternSupported;                        //@synthesize frontTorchPatternSupported=_frontTorchPatternSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemTelephonyOfAnyKind;                                                           //@synthesize hasSystemTelephonyOfAnyKind=_hasSystemTelephonyOfAnyKind - In the implementation block
@property (getter=isForceTouchSupported,nonatomic,readonly) BOOL forceTouchSupported;                                      //@synthesize forceTouchSupported=_forceTouchSupported - In the implementation block
@property (getter=isInternalInstall,nonatomic,readonly) BOOL internalInstall;                                              //@synthesize internalInstall=_internalInstall - In the implementation block
@property (getter=isLockButtonAppropriateForShutter,nonatomic,readonly) BOOL lockButtonAppropriateForShutter;              //@synthesize lockButtonAppropriateForShutter=_lockButtonAppropriateForShutter - In the implementation block
@property (getter=isShutterSoundRequired,nonatomic,readonly) BOOL shutterSoundRequired;                                    //@synthesize shutterSoundRequired=_shutterSoundRequired - In the implementation block
@property (getter=isLowEndHardware,nonatomic,readonly) BOOL lowEndHardware;                                                //@synthesize lowEndHardware=_lowEndHardware - In the implementation block
@property (nonatomic,readonly) double _backVideoModeMaximumVideoZoomFactor;                                                //@synthesize _backVideoModeMaximumVideoZoomFactor=__backVideoModeMaximumVideoZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontVideoModeMaximumVideoZoomFactor;                                               //@synthesize _frontVideoModeMaximumVideoZoomFactor=__frontVideoModeMaximumVideoZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backCaptureInterval;                                                                //@synthesize _backCaptureInterval=__backCaptureInterval - In the implementation block
@property (nonatomic,readonly) double _frontCaptureInterval;                                                               //@synthesize _frontCaptureInterval=__frontCaptureInterval - In the implementation block
@property (getter=_isFront720p30Supported,nonatomic,readonly) BOOL _front720p30Supported;                                  //@synthesize _front720p30Supported=__front720p30Supported - In the implementation block
+(id)capabilities;
-(id)init;
-(BOOL)isInternalInstall;
-(BOOL)isIrisSupportedForDevice:(long long)arg1 ;
-(double)maximumVideoZoomFactorForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)isSupportedVideoModeConfiguration:(long long)arg1 forDevice:(long long)arg2 ;
-(BOOL)isSupportedSlomoModeConfiguration:(long long)arg1 forDevice:(long long)arg2 ;
-(BOOL)isBackIrisSupported;
-(BOOL)isFrontIrisSupported;
-(BOOL)isBackCameraSupported;
-(BOOL)isFrontFlashSupported;
-(BOOL)isBackFlashSupported;
-(BOOL)isFrontAutomaticHDRSupported;
-(BOOL)isBackAutomaticHDRSupported;
-(BOOL)isFrontHDRSupported;
-(BOOL)isBackHDRSupported;
-(BOOL)isCameraSupportedForDevice:(long long)arg1 ;
-(BOOL)isSquareModeSupported;
-(BOOL)isVideoSupported;
-(BOOL)isSlomoSupportedForDevice:(long long)arg1 ;
-(BOOL)isTimelapseSupportedForDevice:(long long)arg1 ;
-(BOOL)isPanoramaSupportedForDevice:(long long)arg1 ;
-(BOOL)isFrontTorchSupported;
-(BOOL)isBackTorchSupported;
-(BOOL)isLiveFilteringSupported;
-(BOOL)isForceTouchSupported;
-(BOOL)isBurstSupportedForDevice:(long long)arg1 ;
-(BOOL)isFlashSupportedForDevice:(long long)arg1 ;
-(BOOL)isHDRSupportedForDevice:(long long)arg1 ;
-(BOOL)isTorchPatternSupportedForDevice:(long long)arg1 ;
-(BOOL)isFrontCameraSupported;
-(BOOL)isLockButtonAppropriateForShutter;
-(BOOL)isBackBurstSupported;
-(BOOL)isFrontBurstSupported;
-(BOOL)isStillDuringVideoSupported;
-(BOOL)isBackPanoramaSupported;
-(BOOL)isFrontPanoramaSupported;
-(BOOL)isTorchSupportedForDevice:(long long)arg1 ;
-(BOOL)isAutomaticHDRSupportedForDevice:(long long)arg1 ;
-(BOOL)isHDROnSupportedForDevice:(long long)arg1 ;
-(double)captureIntervalForDevice:(long long)arg1 ;
-(BOOL)isBackTimelapseSupported;
-(BOOL)isFrontTimelapseSupported;
-(BOOL)isBackSlomoSupported;
-(BOOL)isFrontSlomoSupported;
-(BOOL)isLowEndHardware;
-(BOOL)hasSystemTelephonyOfAnyKind;
-(long long)maximumRecordedFileSize;
-(BOOL)isShutterSoundRequired;
-(BOOL)isBackHDROnSupported;
-(BOOL)isFrontHDROnSupported;
-(double)_backCaptureInterval;
-(double)_frontCaptureInterval;
-(BOOL)isBack60FPSVideoSupported;
-(BOOL)isFront60FPSVideoSupported;
-(BOOL)isBack4kVideoSupported;
-(BOOL)isFront4kVideoSupported;
-(BOOL)is60FPSVideoSupportedForDevice:(long long)arg1 ;
-(BOOL)_isFront720p30Supported;
-(long long)back720pMaxFPS;
-(BOOL)is4kVideoSupportedForDevice:(long long)arg1 ;
-(BOOL)isBack720p240Supported;
-(BOOL)isFront720p240Supported;
-(BOOL)isBack1080p120Supported;
-(BOOL)isFront1080p120Supported;
-(BOOL)is720p240SupportedForDevice:(long long)arg1 ;
-(BOOL)is1080p120SupportedForDevice:(long long)arg1 ;
-(BOOL)isBackTorchPatternSupported;
-(BOOL)isFrontTorchPatternSupported;
-(BOOL)isPreviewDuringHDRSupported;
-(double)_backVideoModeMaximumVideoZoomFactor;
-(double)_frontVideoModeMaximumVideoZoomFactor;
@end

