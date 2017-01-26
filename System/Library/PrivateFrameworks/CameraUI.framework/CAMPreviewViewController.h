/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CAMFocusDelegate.h>
#import <libobjc.A.dylib/CAMExposureDelegate.h>
#import <libobjc.A.dylib/CAMFocusIndicatorViewDelegate.h>
#import <libobjc.A.dylib/CAMEffectsPreviewSampleBufferDelegate.h>
#import <libobjc.A.dylib/CAMFacesDelegate.h>

@protocol CAMPreviewViewControllerDelegate;
@class CAMEffectsRenderer, CUCaptureController, CAMTimelapseController, CAMBurstIndicatorView, CAMFocusIndicatorView, NSDate, CAMFocusResult, CAMExposureResult, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, CAMMotionController, CAMPreviewView, NSString;

@interface CAMPreviewViewController : UIViewController <UIGestureRecognizerDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMFocusIndicatorViewDelegate, CAMEffectsPreviewSampleBufferDelegate, CAMFacesDelegate> {

	BOOL __changingModeOrDevice;
	BOOL __userLockedFocusAndExposure;
	BOOL __updateFaceIndicators;
	float __cachedExposureTargetBias;
	float __exposureBiasPanStartValue;
	id<CAMPreviewViewControllerDelegate> _delegate;
	CAMEffectsRenderer* _effectsRenderer;
	CUCaptureController* __captureController;
	CAMTimelapseController* __timelapseController;
	long long __mode;
	long long __device;
	CAMBurstIndicatorView* __burstIndicator;
	CAMFocusIndicatorView* __continuousIndicator;
	CAMFocusIndicatorView* __pointIndicator;
	NSDate* __lastFocusIndictorStartTime;
	CAMFocusResult* __lastFocusResult;
	CAMExposureResult* __lastExposureResult;
	NSDate* __lastTapToFocusTime;
	unsigned long long __currentFacesCount;
	UITapGestureRecognizer* __tapToFocusAndExposeGestureRecognizer;
	UILongPressGestureRecognizer* __longPressToLockGestureRecognizer;
	UIPanGestureRecognizer* __exposureBiasPanGestureRecognizer;
	UITapGestureRecognizer* __aspectRatioToggleDoubleTapGestureRecognizer;
	double __exposureBiasVirtualSliderExponent;
	double __exposureBiasVirtualSliderPointsForFirstStop;
	NSDate* __lastExposureBiasModificationTime;
	CAMMotionController* __motionController;

}

@property (assign,nonatomic,__weak) id<CAMPreviewViewControllerDelegate> delegate;                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CAMPreviewView * previewView; 
@property (nonatomic,readonly) UIPanGestureRecognizer * activeExposureBiasPanGestureRecognizer; 
@property (getter=isFocusLockedByUser,nonatomic,readonly) BOOL focusLockedByUser; 
@property (getter=isExposureLockedByUser,nonatomic,readonly) BOOL exposureLockedByUser; 
@property (nonatomic,readonly) CAMEffectsRenderer * effectsRenderer;                                                                                   //@synthesize effectsRenderer=_effectsRenderer - In the implementation block
@property (nonatomic,readonly) CUCaptureController * _captureController;                                                                               //@synthesize _captureController=__captureController - In the implementation block
@property (nonatomic,__weak,readonly) CAMTimelapseController * _timelapseController;                                                                   //@synthesize _timelapseController=__timelapseController - In the implementation block
@property (nonatomic,readonly) long long _mode;                                                                                                        //@synthesize _mode=__mode - In the implementation block
@property (nonatomic,readonly) long long _device;                                                                                                      //@synthesize _device=__device - In the implementation block
@property (assign,setter=_setChangingModeOrDevice:,getter=_isChangingModeOrDevice,nonatomic) BOOL _changingModeOrDevice;                               //@synthesize _changingModeOrDevice=__changingModeOrDevice - In the implementation block
@property (nonatomic,readonly) CAMBurstIndicatorView * _burstIndicator;                                                                                //@synthesize _burstIndicator=__burstIndicator - In the implementation block
@property (nonatomic,readonly) CAMFocusIndicatorView * _continuousIndicator;                                                                           //@synthesize _continuousIndicator=__continuousIndicator - In the implementation block
@property (nonatomic,readonly) CAMFocusIndicatorView * _pointIndicator;                                                                                //@synthesize _pointIndicator=__pointIndicator - In the implementation block
@property (setter=_setLastFocusIndictorStartTime:,nonatomic,retain) NSDate * _lastFocusIndictorStartTime;                                              //@synthesize _lastFocusIndictorStartTime=__lastFocusIndictorStartTime - In the implementation block
@property (assign,setter=_setUserLockedFocusAndExposure:,nonatomic) BOOL _userLockedFocusAndExposure;                                                  //@synthesize _userLockedFocusAndExposure=__userLockedFocusAndExposure - In the implementation block
@property (setter=_setLastFocusResult:,nonatomic,retain) CAMFocusResult * _lastFocusResult;                                                            //@synthesize _lastFocusResult=__lastFocusResult - In the implementation block
@property (setter=_setLastExposureResult:,nonatomic,retain) CAMExposureResult * _lastExposureResult;                                                   //@synthesize _lastExposureResult=__lastExposureResult - In the implementation block
@property (setter=_setLastTapToFocusTime:,nonatomic,retain) NSDate * _lastTapToFocusTime;                                                              //@synthesize _lastTapToFocusTime=__lastTapToFocusTime - In the implementation block
@property (nonatomic,readonly) unsigned long long _currentFacesCount;                                                                                  //@synthesize _currentFacesCount=__currentFacesCount - In the implementation block
@property (nonatomic,readonly) BOOL _updateFaceIndicators;                                                                                             //@synthesize _updateFaceIndicators=__updateFaceIndicators - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapToFocusAndExposeGestureRecognizer;                                                         //@synthesize _tapToFocusAndExposeGestureRecognizer=__tapToFocusAndExposeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * _longPressToLockGestureRecognizer;                                                       //@synthesize _longPressToLockGestureRecognizer=__longPressToLockGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * _exposureBiasPanGestureRecognizer;                                                             //@synthesize _exposureBiasPanGestureRecognizer=__exposureBiasPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _aspectRatioToggleDoubleTapGestureRecognizer;                                                  //@synthesize _aspectRatioToggleDoubleTapGestureRecognizer=__aspectRatioToggleDoubleTapGestureRecognizer - In the implementation block
@property (assign,setter=_setCachedExposureTargetBias:,nonatomic) float _cachedExposureTargetBias;                                                     //@synthesize _cachedExposureTargetBias=__cachedExposureTargetBias - In the implementation block
@property (nonatomic,readonly) float _exposureBiasPanStartValue;                                                                                       //@synthesize _exposureBiasPanStartValue=__exposureBiasPanStartValue - In the implementation block
@property (assign,setter=_setExposureBiasVirtualSliderExponent:,nonatomic) double _exposureBiasVirtualSliderExponent;                                  //@synthesize _exposureBiasVirtualSliderExponent=__exposureBiasVirtualSliderExponent - In the implementation block
@property (assign,setter=_setExposureBiasVirtualSliderPointsForFirstStop:,nonatomic) double _exposureBiasVirtualSliderPointsForFirstStop;              //@synthesize _exposureBiasVirtualSliderPointsForFirstStop=__exposureBiasVirtualSliderPointsForFirstStop - In the implementation block
@property (setter=_setLastExposureBiasModifiedTime:,nonatomic,retain) NSDate * _lastExposureBiasModificationTime;                                      //@synthesize _lastExposureBiasModificationTime=__lastExposureBiasModificationTime - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                //@synthesize _motionController=__motionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)showIndicatorAnimationDuration;
+(double)hideIndicatorAnimationDuration;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CAMPreviewViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_applicationDidEnterBackground;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_cancelDelayedActions;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithCaptureController:(id)arg1 motionController:(id)arg2 timelapseController:(id)arg3 ;
-(void)_captureOrientationChanged:(id)arg1 ;
-(void)willChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 animated:(BOOL)arg3 ;
-(CAMPreviewView *)previewView;
-(CAMEffectsRenderer *)effectsRenderer;
-(void)_createCommonGestureRecognizersIfNecessary;
-(CUCaptureController *)_captureController;
-(CAMMotionController *)_motionController;
-(void)notifyWillStartCapturing;
-(void)notifyDidStopCapture;
-(CAMTimelapseController *)_timelapseController;
-(void)captureController:(id)arg1 didOutputFaceResults:(id)arg2 ;
-(BOOL)isFocusLockedByUser;
-(BOOL)isExposureLockedByUser;
-(void)notifyShutterButtonPressed;
-(UIPanGestureRecognizer *)activeExposureBiasPanGestureRecognizer;
-(void)updateIndicatorVisibilityAnimated:(BOOL)arg1 ;
-(void)focusOnNormalizedPoint:(CGPoint)arg1 ;
-(long long)_device;
-(long long)_mode;
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2 ;
-(BOOL)captureControllerUserHasAdjustedExposureTargetBias:(id)arg1 ;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1 ;
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2 ;
-(void)captureController:(id)arg1 didOutputExposureResult:(id)arg2 ;
-(id)focusIndicatorViewBoundingViewForClippingFocusIndicatorView:(id)arg1 ;
-(int)_exposureBiasSide;
-(CAMFocusResult *)_lastFocusResult;
-(CAMFocusIndicatorView *)_continuousIndicator;
-(CAMFocusIndicatorView *)_pointIndicator;
-(void)effectsPreviewVideoDataOutputDidOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)effectsPreviewVideoDataOutputDidDropSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_initializeExposureBiasSliderParameters;
-(void)_resetFaceTracking;
-(void)_updateVideoPreviewViewOrientationAnimated:(BOOL)arg1 ;
-(void)_cancelDelayedFocusAndExposureLock;
-(void)_cancelDelayedFaceIndicatorFadeOut;
-(void)_cancelDelayedHideOrDeactivateForFocusIndicator:(id)arg1 ;
-(void)_initializeExposureBiasParametersForFocusIndicatorView:(id)arg1 ;
-(void)_willChangeModeOrDevice;
-(void)_didChangeModeOrDevice;
-(void)_updatePreviewViewAspectMode;
-(void)_setChangingModeOrDevice:(BOOL)arg1 ;
-(void)_resetCachedTimes;
-(void)_hideAllFocusIndicatorsAnimated:(BOOL)arg1 ;
-(void)_setLastTapToFocusTime:(id)arg1 ;
-(void)_setLastExposureBiasModifiedTime:(id)arg1 ;
-(void)_setLastFocusIndictorStartTime:(id)arg1 ;
-(void)_createTapToFocusAndExposeGestureRecognizerIfNecessary;
-(void)_createLongPressToLockGestureRecognizersIfNecessary;
-(void)_createExposureBiasPanGestureRecognizerIfNecessary;
-(void)_createAspectRatioToggleDoubleTapGestureRecognizerIfNecessary;
-(void)_handleTapToFocusAndExpose:(id)arg1 ;
-(void)_handleLongPressToLock:(id)arg1 ;
-(void)_handleExposureBiasPan:(id)arg1 ;
-(void)_updateExposureBiasPanGestureRecognizerForOrientation;
-(void)_handleAspectRatioToggleDoubleTap:(id)arg1 ;
-(BOOL)_isShowingFaces;
-(BOOL)_shouldDisableFocusUI;
-(void)_hideAllFocusIndicatorsExceptForIndicator:(id)arg1 ;
-(BOOL)_shouldShowContinuousIndicator;
-(void)_createContinuousIndicatorIfNecessary;
-(NSDate *)_lastFocusIndictorStartTime;
-(void)_hideFocusIndicator:(id)arg1 afterDelay:(double)arg2 ;
-(void)_hideFocusIndicator:(id)arg1 animated:(BOOL)arg2 ;
-(void)_hideFocusIndicator:(id)arg1 ;
-(void)_deactivateFocusIndicator:(id)arg1 ;
-(void)_hideFaceIndicatorsAnimated:(BOOL)arg1 ;
-(BOOL)_shouldHideFocusIndicators;
-(void)_setFocusIndicatorsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_createPointIndicatorIfNecessary;
-(BOOL)_showExposureBiasSliderForPointView;
-(BOOL)_userLockedFocusAndExposure;
-(BOOL)_shouldSuppressNewFaces;
-(void)_fadeOutFaceIndicatorsAfterDelay:(double)arg1 ;
-(void)_updateFaceIndicatorsWithResults:(id)arg1 ;
-(void)_fadeOutFaceIndicators;
-(BOOL)_canModifyExposureBias;
-(BOOL)_allowUserToChangeFocusAndExposure;
-(BOOL)_shouldDisableAspectRatioToggle;
-(void)_setUserLockedFocusAndExposure:(BOOL)arg1 ;
-(void)_showIndicatorAtPointOfInterest:(CGPoint)arg1 ;
-(void)_setCachedExposureTargetBias:(float)arg1 ;
-(void)_focusOnPoint:(CGPoint)arg1 ;
-(void)_showLockedAtPointOfInterest:(CGPoint)arg1 ;
-(void)_lockFocusAndExposureAfterDelay:(double)arg1 ;
-(void)_scaleDownLockedPointOfInterest;
-(void)_deactivateFocusIndicator:(id)arg1 afterDelay:(double)arg2 ;
-(void)_lockFocusAndExposure;
-(void)_finishFocusingLockedPointOfInterestIndicator;
-(UIPanGestureRecognizer *)_exposureBiasPanGestureRecognizer;
-(void)_updateExposureBiasViews;
-(BOOL)_allowExposureBiasForMode:(long long)arg1 ;
-(BOOL)_isFullyAutomaticFocusAndExposure;
-(float)_exposureTargetBiasMaximum;
-(long long)_interfaceOrientationForExposureBiasUI;
-(void)_updateExposureBiasViews:(id)arg1 ;
-(id)_focusIndicatorViewsWithExposureBiasSliders;
-(float)_cachedExposureTargetBias;
-(float)_exposureTargetBiasMinimum;
-(double)_virtualSliderPositionForExposureBias:(double)arg1 ;
-(void)_activateFocusIndicator:(id)arg1 ;
-(double)_effectiveExposureBiasMovementForTranslation:(CGPoint)arg1 ;
-(double)_exposureBiasForVirtualSliderPosition:(double)arg1 ;
-(void)_setExposureBiasVirtualSliderExponent:(double)arg1 ;
-(void)_setExposureBiasVirtualSliderPointsForFirstStop:(double)arg1 ;
-(double)_exposureBiasVirtualSliderPointsForFirstStop;
-(double)_exposureBiasVirtualSliderExponent;
-(void)_showContinuousAutomaticFocusAndExposureIndicator;
-(BOOL)_shouldResetFocusAndExposureForSubjectAreaDidChange;
-(BOOL)_isPanningExposureBias;
-(UILongPressGestureRecognizer *)_longPressToLockGestureRecognizer;
-(NSDate *)_lastExposureBiasModificationTime;
-(NSDate *)_lastTapToFocusTime;
-(void)_setLastFocusResult:(id)arg1 ;
-(void)_stopPulsingContinuousIndicatorAndHideIfShownLongEnough;
-(void)_setLastExposureResult:(id)arg1 ;
-(void)_setUserLockedFocusAndExposure:(BOOL)arg1 shouldAnimate:(BOOL)arg2 ;
-(BOOL)_isChangingModeOrDevice;
-(void)_validateInternalProperties;
-(CAMExposureResult *)_lastExposureResult;
-(void)_validateExposureTargetBiasFromExposureResult:(id)arg1 ;
-(void)_validateLastExposureBiasModificationTime;
-(void)_validateUserLockedFocusAndExposure;
-(BOOL)_isFullyAutomaticFocus:(id)arg1 andExposure:(id)arg2 ;
-(BOOL)_shouldAllowAspectRatioToggleForMode:(long long)arg1 ;
-(void)_updateGestureRecognizersForOrientation;
-(void)_updateExposureBiasSideAnimated:(BOOL)arg1 ;
-(CAMBurstIndicatorView *)_burstIndicator;
-(unsigned long long)_currentFacesCount;
-(BOOL)_updateFaceIndicators;
-(UITapGestureRecognizer *)_tapToFocusAndExposeGestureRecognizer;
-(UITapGestureRecognizer *)_aspectRatioToggleDoubleTapGestureRecognizer;
-(float)_exposureBiasPanStartValue;
@end

