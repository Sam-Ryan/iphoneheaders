/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MREditingDelegate, MRRenderingDelegate, MRFeatureDelegate, MZMediaManagement;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MCMontage, MRLayerParallelizer, MRRendererInternal, NSDictionary, CADisplayLink, MRCameraCaptureSession, NSString, MRContext;

@interface MRRenderer : NSObject {

	MCMontage* mMontage;
	MRLayerParallelizer* mTopMRLayer;
	CGSize mSize;
	MRRendererInternal* mInternal;
	id<MREditingDelegate> mEditingDelegate;
	id<MRRenderingDelegate> mRenderingDelegate;
	id<MRFeatureDelegate> mFeatureDelegate;
	NSDictionary* mDescriptionsForRandomTransitionPresetIDs;
	BOOL _interactivityIsEnabled;
	BOOL _slideshowIsPaused;
	CADisplayLink* mDisplayLink;
	double mDisplayLinkTimestamp;
	double _slideFocusModeBackgroundColor[4];
	double _lastRenderedTime;
	BOOL _needsToUpdateGeometry;
	BOOL _isFrozen;
	int _currentOSThermalPressureLevel;
	int _thermalNotificationToken;
	BOOL mIsEditing;
	BOOL mPushRendering;
	BOOL mRequestRenderingOnChanges;
	BOOL mDisplaysFPS;
	BOOL mDisplaysPlayingIDs;
	BOOL mDisplaysIsPreloadingImages;
	BOOL mDisplaysTouchVisualFeedback;
	BOOL mDisplaysHitZonesVisualFeedback;
	BOOL _ignoresBackgroundAudio;
	BOOL mIsCleanedUp;
	BOOL _asynchronousOperationsAreSuspended;
	BOOL _allowsThumbnails;
	BOOL _logRenderingTimes;
	int mMode;
	int mOrientation;
	float mVolume;
	id<MZMediaManagement> mAssetManagementDelegate;
	double mTimeQuantum;
	NSDictionary* mParameters;
	MRCameraCaptureSession* _cameraCaptureSession;
	double _fadeInStartTime;
	double _fadeInDuration;
	double _fadeOutStartTime;
	double _fadeOutDuration;
	NSString* _renderingLogFilePath;
	double _timestampOfLastRenderPass;
	double _interactiveTransitionTrackingBoxRadius;
	double _interactiveTransitionProgressThreshold;
	double _interactiveTransitionVelocityThreshold;

}

@property (readonly) MRContext * context; 
@property (assign,nonatomic) CGPoint contextOffset; 
@property (assign) double masterClock; 
@property (readonly) BOOL isFlipped; 
@property (retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate; 
@property (retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate; 
@property (assign) BOOL screenBurnTest; 
@property (assign) BOOL hideTextWhileEditing; 
@property (readonly) BOOL slideshowIsPlaying; 
@property (readonly) double currentSlideshowTime; 
@property (nonatomic,copy) NSString * transitionLayerPlugObjectID; 
@property (nonatomic,retain) MCMontage * montage; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) double timeQuantum; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int mode; 
@property (readonly) BOOL isOffscreen; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (assign,nonatomic) BOOL displaysPlayingIDs; 
@property (assign,nonatomic) BOOL displaysIsPreloadingImages; 
@property (assign,nonatomic) BOOL displaysTouchVisualFeedback; 
@property (assign,nonatomic) BOOL displaysHitZonesVisualFeedback; 
@property (assign,nonatomic) BOOL isEditing; 
@property (readonly) BOOL isPlaying; 
@property (assign,nonatomic) BOOL pushRendering; 
@property (assign,nonatomic) BOOL requestRenderingOnChanges; 
@property (assign,nonatomic) BOOL allowsThumbnails;                                                     //@synthesize allowsThumbnails=_allowsThumbnails - In the implementation block
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) BOOL ignoresBackgroundAudio;                                               //@synthesize ignoresBackgroundAudio=_ignoresBackgroundAudio - In the implementation block
@property (readonly) NSDictionary * parameters; 
@property (nonatomic,retain) id<MZMediaManagement> assetManagementDelegate; 
@property (retain) id<MRFeatureDelegate> featureDelegate; 
@property (retain) id<MRRenderingDelegate> renderingDelegate; 
@property (retain) id<MREditingDelegate> editingDelegate; 
@property (assign,nonatomic) BOOL interactivityIsEnabled;                                               //@synthesize interactivityIsEnabled=_interactivityIsEnabled - In the implementation block
@property (nonatomic,retain) MRCameraCaptureSession * cameraCaptureSession;                             //@synthesize cameraCaptureSession=_cameraCaptureSession - In the implementation block
@property (readonly) NSString * currentFocusedSlideAsset; 
@property (assign,nonatomic) double fadeInStartTime;                                                    //@synthesize fadeInStartTime=_fadeInStartTime - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                                                     //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutStartTime;                                                   //@synthesize fadeOutStartTime=_fadeOutStartTime - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                                                    //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) double interactiveTransitionTrackingBoxRadius;                             //@synthesize interactiveTransitionTrackingBoxRadius=_interactiveTransitionTrackingBoxRadius - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThreshold;                             //@synthesize interactiveTransitionProgressThreshold=_interactiveTransitionProgressThreshold - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThreshold;                             //@synthesize interactiveTransitionVelocityThreshold=_interactiveTransitionVelocityThreshold - In the implementation block
@property (assign) BOOL slaveFrameMode; 
@property (assign,nonatomic) double timestampOfLastRenderPass;                                          //@synthesize timestampOfLastRenderPass=_timestampOfLastRenderPass - In the implementation block
@property (assign,nonatomic) BOOL logRenderingTimes;                                                    //@synthesize logRenderingTimes=_logRenderingTimes - In the implementation block
@property (readonly) NSString * renderingLogFilePath;                                                   //@synthesize renderingLogFilePath=_renderingLogFilePath - In the implementation block
@property (readonly) BOOL isCleanedUp; 
@property (readonly) NSObject*<OS_dispatch_queue> renderDispatchQueue; 
@property (setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;              //@synthesize asynchronousOperationsAreSuspended=_asynchronousOperationsAreSuspended - In the implementation block
+(double)textScaleForResolution:(CGSize)arg1 ;
+(BOOL)isDiskImageCacheEnabled;
+(void)enableDiskImageCache;
-(void)processAudioObjects;
-(void)removeAudioObject:(id)arg1 ;
-(void)addAudioObject:(id)arg1 ;
-(void)_adaptToPressureLevel:(int)arg1 ;
-(void)_startMonitoringThermalPressureLevelChanges;
-(void)_stopMonitoringThermalPressureLevelChanges;
-(id)chooseTransitionIDForRandomTransitionPresetID:(id)arg1 ;
-(void)sendNotification:(id)arg1 ;
-(void)_createSlideFocusLayer;
-(void)_dimLayersExceptForPathTo:(id)arg1 ;
-(void)_updateSelectionLayer;
-(void)_undimAllLayersInLayer:(id)arg1 ;
-(void)setScreenBurnTest:(BOOL)arg1 ;
-(double)exitSlideZoomMode:(BOOL)arg1 ;
-(id)slideInfosForCurrentElements;
-(void)undimAllLayers;
-(BOOL)hideTextWhileEditing;
-(void)setLiveSlideshowDelegate:(id<MRLiveSlideshowDelegate>)arg1 ;
-(void)setAsynchronousOperationsDelegate:(id<MRAsynchronousOperationsDelegate>)arg1 ;
-(CGImageRef)currentFrameAsCGImage;
-(void)setFreezeSizeOfImageRequests:(BOOL)arg1 ;
-(void)selectLayer:(id)arg1 ;
-(void)deselectAllLayers;
-(void)dimLayersExceptForPathTo:(id)arg1 ;
-(id<MRAsynchronousOperationsDelegate>)asynchronousOperationsDelegate;
-(void)setHideTextWhileEditing:(BOOL)arg1 ;
-(void)deselectLayer:(id)arg1 ;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 andSize:(CGSize)arg2 ;
-(id)selectedLayers;
-(id)layerAtPath:(id)arg1 fromLayer:(id)arg2 ;
-(id<MRLiveSlideshowDelegate>)liveSlideshowDelegate;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 loop:(BOOL)arg3 ;
-(BOOL)screenBurnTest;
-(void)setUseCGLFlushDrawableWorkaround:(BOOL)arg1 ;
-(id)slideInfoForCurrentElement:(id)arg1 ;
-(double)exitSlideFocusMode;
-(double)enterSlideZoomMode;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 mode:(int)arg3 ;
-(double)enterSlideFocusModeWithState:(id)arg1 animate:(BOOL)arg2 ;
-(double)animateCurrentFocuserToSlideFocusModeWithDuration:(double)arg1 ;
-(MRContext *)context;
-(double)masterClock;
-(void)setMasterClock:(double)arg1 ;
-(BOOL)isFlipped;
-(void)_displayHitZonesVisualFeedback;
-(void)_displayIsPreloadingImages;
-(void)_displayTouchVisualFeedback;
-(void)_displayFPS:(double)arg1 actuallyDisplay:(BOOL)arg2 ;
-(void)_displayPlayingIDs;
-(void)endTextEditing:(BOOL)arg1 ;
-(long long)_maxLinesForCurrentEditingTextElement;
-(CGSize)_maxSizeForCurrentEditingTextElement;
-(BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint*)arg1 ;
-(BOOL)beginTextEditingOfElement:(id)arg1 inPlug:(id)arg2 callDelegate:(BOOL)arg3 ;
-(BOOL)beginTextEditingOfElement:(id)arg1 inLayer:(id)arg2 callDelegate:(BOOL)arg3 ;
-(void)_cleanupGestureRecognizers;
-(id)_computeMatrixChainForLayer:(id)arg1 ;
-(void)_doLayerTrackingAtLocation:(CGPoint)arg1 ;
-(double)slideZoomCancel:(id)arg1 ;
-(double)focusedTransitionCancel:(id)arg1 ;
-(double)defaultPauseResumeOnTap:(BOOL)arg1 ;
-(double)currentSlideshowTime;
-(BOOL)slideshowIsPlaying;
-(double)slideshowTransitionCancel:(id)arg1 ;
-(double)slideshowTransitionEnd:(id)arg1 ;
-(NSString *)transitionLayerPlugObjectID;
-(double)slideshowTransitionStart:(id)arg1 ;
-(double)focusedTransitionStart:(id)arg1 ;
-(double)slideZoomEnd:(id)arg1 ;
-(void)touchesMoved:(id)arg1 ;
-(double)slideZoomUpdate:(id)arg1 ;
-(double)focusedTransitionEnd:(id)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(BOOL)canGoToMoreSlides:(BOOL)arg1 ;
-(void)jumpToNextMarker;
-(void)setTransitionLayerPlugObjectID:(NSString *)arg1 ;
-(void)gotoNextFocusedSlide:(BOOL)arg1 ;
-(void)gotoNextInterestingTime:(BOOL)arg1 ;
-(void)gotoPreviousFocusedSlide:(BOOL)arg1 ;
-(void)gotoPreviousInterestingTime:(BOOL)arg1 ;
-(void)setSlideshowTime:(double)arg1 ;
-(void)jumpToPreviousMarker;
-(void)touchesEnded:(id)arg1 ;
-(double)focusedTransitionUpdate:(id)arg1 ;
-(double)slideZoomStart:(id)arg1 ;
-(double)slideshowTransitionUpdate:(id)arg1 ;
-(void)willGoToPreviousOrNextFocusedSlide:(BOOL)arg1 withAction:(id)arg2 animate:(BOOL)arg3 ;
-(void)didGoToPreviousOrNextFocusedSlide:(BOOL)arg1 withAction:(id)arg2 ;
-(id)layerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(CGPoint*)arg3 ;
-(id)defaultActionsWithHitLayer:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_findAndHandleBestRecognizerInRecognizers:(id)arg1 ;
-(void)pauseSlideshow;
-(void)resumeSlideshow;
-(BOOL)_doActions;
-(double)_doAction:(id)arg1 ;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 ;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 toTarget:(id)arg3 ;
-(id)actionByEvaluatingConditionalAction:(id)arg1 withStates:(id)arg2 ;
-(void)doAction:(id)arg1 ;
-(void)_renderThreadMain;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)addNavigatorToBackHistory:(id)arg1 ;
-(BOOL)_r_prerenderWithPassParameters:(id)arg1 ;
-(void)addIDToDisplay:(id)arg1 :(id)arg2 ;
-(void)nearingEndForSerializer:(id)arg1 ;
-(void)_r_renderRotation;
-(void)_r_renderWithPassParameters:(id)arg1 ;
-(BOOL)prerenderWithPassParameters:(id)arg1 ;
-(void)_r_syncTimeToOuter;
-(void)_renderOnDisplayLink:(id)arg1 ;
-(void)_r_snapshotForRotation;
-(void)_startDisplayLinkOnRunloop;
-(BOOL)displaysTouchVisualFeedback;
-(void)endMorphing;
-(void)_r_stopRenderTimer;
-(unsigned char)currentLayoutIndex;
-(void)_r_startRenderTimer;
-(void)_r_resume;
-(double)_unalteredTime;
-(BOOL)displaysFPS;
-(void)pauseWhenStill;
-(void)_r_syncIsPlayingToOuter;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(void)_r_doSnapshot;
-(void)_r_setTime:(double)arg1 isResyncing:(BOOL)arg2 ;
-(void)swapMontage:(id)arg1 ;
-(id)plugForCurrentSublayerInNavigatorForPlug:(id)arg1 ;
-(void)setTemporarySize:(CGSize)arg1 ;
-(NSString *)renderingLogFilePath;
-(void)stall;
-(NSString *)currentFocusedSlideAsset;
-(void)setDisplaysPlayingIDs:(BOOL)arg1 ;
-(void)warmupVideo:(BOOL)arg1 ;
-(BOOL)interactivityIsEnabled;
-(void)setDisplaysFPS:(BOOL)arg1 ;
-(void)setSlideFocusModeBackgroundColor:(CGColorRef)arg1 ;
-(void)imagePreloadingBegan;
-(void)imagePreloadingEnded;
-(BOOL)asynchronousOperationsAreSuspended;
-(void)suspendAsynchronousOperations:(BOOL)arg1 ;
-(void)setInteractivityIsEnabled:(BOOL)arg1 ;
-(void)setRenderingDelegate:(id<MRRenderingDelegate>)arg1 ;
-(void)setFeatureDelegate:(id<MRFeatureDelegate>)arg1 ;
-(void)setRequestRenderingOnChanges:(BOOL)arg1 ;
-(id)currentStateForMontageSwap;
-(void)beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(void)applyStateForMontageSwap:(id)arg1 ;
-(BOOL)requestRenderingWithin:(double)arg1 ;
-(void)setFadeInStartTime:(double)arg1 ;
-(void)setCameraCaptureSession:(MRCameraCaptureSession *)arg1 ;
-(CGPoint)contextOffset;
-(void)removeNavigatorFromBackHistory:(id)arg1 ;
-(void)updateTimeWithDisplayLinkTimestamp:(double)arg1 ;
-(id)currentlyShowingAssetPaths;
-(void)dumpActiveHierarchy;
-(void)setContextOffset:(CGPoint)arg1 ;
-(BOOL)displaysIsPreloadingImages;
-(BOOL)logRenderingTimes;
-(void)setTimestampOfLastRenderPass:(double)arg1 ;
-(BOOL)allowsThumbnails;
-(double)fadeInStartTime;
-(void)setIgnoresBackgroundAudio:(BOOL)arg1 ;
-(BOOL)isCleanedUp;
-(CGPoint)_fixPointForUnprojectionForOrientation:(CGPoint)arg1 ;
-(BOOL)slaveFrameMode;
-(CGPoint)_fixProjectedPointForOrientation:(CGPoint)arg1 ;
-(void)setSlaveFrameMode:(BOOL)arg1 ;
-(void)setPushRendering:(BOOL)arg1 ;
-(void)stepForward;
-(BOOL)displaysPlayingIDs;
-(void)setDisplaysTouchVisualFeedback:(BOOL)arg1 ;
-(double)timestampOfLastRenderPass;
-(void)stepBackward;
-(void)setDisplaysHitZonesVisualFeedback:(BOOL)arg1 ;
-(void)setLogRenderingTimes:(BOOL)arg1 ;
-(void)setUsesExternalDisplayLink:(BOOL)arg1 ;
-(void)transitionToNextPlugInContainerOfPlug:(id)arg1 ;
-(BOOL)pushRendering;
-(id)snapshotOfStates:(id)arg1 atSize:(CGSize)arg2 ;
-(void)setDisplaysIsPreloadingImages:(BOOL)arg1 ;
-(BOOL)displaysHitZonesVisualFeedback;
-(id<MRFeatureDelegate>)featureDelegate;
-(BOOL)canGoForth;
-(void)warmupAudio:(BOOL)arg1 ;
-(void)transitionToPreviousPlugInContainerOfPlug:(id)arg1 ;
-(void)unfreeze;
-(void)addNavigatorToForthHistory:(id)arg1 ;
-(id<MRRenderingDelegate>)renderingDelegate;
-(MRCameraCaptureSession *)cameraCaptureSession;
-(void)_r_render;
-(NSObject*<OS_dispatch_queue>)renderDispatchQueue;
-(BOOL)isOffscreen;
-(id)_layerForPlugObjectID:(id)arg1 ;
-(BOOL)requestRenderingOnChanges;
-(void)_r_updateTimeWithDisplayLinkTimestamp:(double)arg1 ;
-(void)_playbackIsOverWithTime:(double)arg1 sendNotification:(BOOL)arg2 ;
-(void)_r_renderForScreenBurnTestAtTime:(double)arg1 ;
-(void)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(void)_r_beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(void)moveNavigatorFromBackToForthHistory:(id)arg1 ;
-(void)removeNavigatorFromForthHistory:(id)arg1 ;
-(void)moveNavigatorFromForthToBackHistory:(id)arg1 ;
-(void)requestRendering:(BOOL)arg1 ;
-(void)setAllowsThumbnails:(BOOL)arg1 ;
-(double)timeQuantum;
-(double)fadeOutStartTime;
-(void)_r_pause;
-(void)disableFadeInAndOut;
-(void)goForth;
-(void)setTimeQuantum:(double)arg1 ;
-(BOOL)ignoresBackgroundAudio;
-(void)gotoState:(id)arg1 ;
-(void)setFadeOutStartTime:(double)arg1 ;
-(void)setEAGLContext:(id)arg1 ;
-(void)setMontage:(MCMontage *)arg1 ;
-(void)_r_endMorphing;
-(MCMontage *)montage;
-(void)resetFadeInAndOut;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)currentState;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)isEditing;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setEditingDelegate:(id<MREditingDelegate>)arg1 ;
-(void)resume;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<MREditingDelegate>)editingDelegate;
-(BOOL)canGoBack;
-(void)goBack;
-(NSDictionary *)parameters;
-(void)cleanup;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)pause;
-(id)initWithParameters:(id)arg1 ;
-(void)render;
-(void)freeze;
-(void)setInteractiveTransitionTrackingBoxRadius:(double)arg1 ;
-(void)setInteractiveTransitionProgressThreshold:(double)arg1 ;
-(void)setInteractiveTransitionVelocityThreshold:(double)arg1 ;
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1 ;
-(double)_time;
-(double)interactiveTransitionTrackingBoxRadius;
-(double)interactiveTransitionProgressThreshold;
-(double)interactiveTransitionVelocityThreshold;
-(id<MZMediaManagement>)assetManagementDelegate;
-(void)setAssetManagementDelegate:(id<MZMediaManagement>)arg1 ;
-(float)volume;
@end

