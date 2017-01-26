/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMEffectsRendererDelegate, OS_dispatch_queue;
#import <CameraUI/CameraUI-Structs.h>
@class EAGLContext, CIContext, CAMEffectsFullsizeView, CAMEffectsGridView, CAMVideoPreviewView, NSObject, UITapGestureRecognizer;

@interface CAMEffectsRenderer : NSObject {

	EAGLContext* _eaglContext;
	CIContext* _ciContext;
	BOOL _isShowingGrid;
	BOOL _gridTransitionIsAnimated;
	double _lastReportedFrameDropTime;
	unsigned long long _totalFramesSinceLastReportedFrameDrop;
	unsigned long long _droppedFramesSinceLastReportedFrameDrop;
	BOOL __atomicPreviewStartedNotificationNeeded;
	BOOL _atomicMirrorFilterRendering;
	BOOL __previewLayerEnabled;
	BOOL __inBackground;
	BOOL __gridTransitionInFlight;
	id<CAMEffectsRendererDelegate> _delegate;
	CAMEffectsFullsizeView* __renderEffectsFullsizeView;
	CAMEffectsGridView* __renderGridView;
	CAMVideoPreviewView* _atomicVideoPreviewView;
	long long _atomicFilterType;
	/*^block*/id __atomicPreviewStartedBlock;
	long long _atomicCaptureMode;
	NSObject*<OS_dispatch_queue> __renderQueue;
	UITapGestureRecognizer* __gridTapGestureRecognizer;

}

@property (nonatomic,retain) CAMVideoPreviewView * videoPreviewView; 
@property (assign,nonatomic) long long filterType; 
@property (assign,getter=isShowingGrid,nonatomic) BOOL showGrid; 
@property (assign) BOOL mirrorFilterRendering;                                                                                              //@synthesize atomicMirrorFilterRendering=_atomicMirrorFilterRendering - In the implementation block
@property (assign) long long captureMode;                                                                                                   //@synthesize atomicCaptureMode=_atomicCaptureMode - In the implementation block
@property (assign,nonatomic,__weak) id<CAMEffectsRendererDelegate> delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _renderQueue;                                                                   //@synthesize _renderQueue=__renderQueue - In the implementation block
@property (retain) CAMVideoPreviewView * atomicVideoPreviewView;                                                                            //@synthesize atomicVideoPreviewView=_atomicVideoPreviewView - In the implementation block
@property (assign) long long atomicFilterType;                                                                                              //@synthesize atomicFilterType=_atomicFilterType - In the implementation block
@property (setter=_setRenderEffectsFullsizeView:,retain) CAMEffectsFullsizeView * _renderEffectsFullsizeView;                               //@synthesize _renderEffectsFullsizeView=__renderEffectsFullsizeView - In the implementation block
@property (setter=_setRenderGridView:,retain) CAMEffectsGridView * _renderGridView;                                                         //@synthesize _renderGridView=__renderGridView - In the implementation block
@property (setter=_setPreviewStartedBlock:,copy) id _previewStartedBlock;                                                                   //@synthesize _atomicPreviewStartedBlock=__atomicPreviewStartedBlock - In the implementation block
@property (setter=_setPreviewStartedNotificationNeeded:) BOOL _previewStartedNotificationNeeded;                                            //@synthesize _atomicPreviewStartedNotificationNeeded=__atomicPreviewStartedNotificationNeeded - In the implementation block
@property (assign,setter=_setPreviewLayerEnabled:,nonatomic) BOOL _previewLayerEnabled;                                                     //@synthesize _previewLayerEnabled=__previewLayerEnabled - In the implementation block
@property (setter=_setInBackground:,getter=_isInBackground) BOOL _inBackground;                                                             //@synthesize _inBackground=__inBackground - In the implementation block
@property (assign,setter=_setGridTransitionInFlight:,getter=_isGridTransitionInFlight,nonatomic) BOOL _gridTransitionInFlight;              //@synthesize _gridTransitionInFlight=__gridTransitionInFlight - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _gridTapGestureRecognizer;                                                          //@synthesize _gridTapGestureRecognizer=__gridTapGestureRecognizer - In the implementation block
-(void)setDelegate:(id<CAMEffectsRendererDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CAMEffectsRendererDelegate>)delegate;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_renderQueue;
-(void)setCaptureMode:(long long)arg1 ;
-(CAMVideoPreviewView *)videoPreviewView;
-(void)setVideoPreviewView:(CAMVideoPreviewView *)arg1 ;
-(void)setShowGrid:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingGrid;
-(void)setFilterTypeAndWaitForRenderIfChanging:(long long)arg1 ;
-(long long)captureMode;
-(void)setFilterType:(long long)arg1 forceStateChange:(BOOL)arg2 ;
-(void)setMirrorFilterRendering:(BOOL)arg1 ;
-(void)_setInBackground:(BOOL)arg1 ;
-(void)_setPreviewLayerEnabled:(BOOL)arg1 ;
-(void)_setVideoDataOutputEnabled:(BOOL)arg1 ;
-(void)_setPreviewStartedNotificationNeeded:(BOOL)arg1 ;
-(void)_deviceStarted:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(void)_handleCaptureSessionDidStopRunning:(id)arg1 ;
-(void)_handleCaptureSessionRuntimeError:(id)arg1 ;
-(void)_tearDownEffectsView:(id)arg1 removeFromSuperview:(BOOL)arg2 ;
-(CAMEffectsFullsizeView *)_renderEffectsFullsizeView;
-(CAMEffectsGridView *)_renderGridView;
-(void)_setupEffectsView:(id)arg1 ;
-(long long)atomicFilterType;
-(void)setAtomicFilterType:(long long)arg1 ;
-(void)_updateEffectsFullsizeView;
-(void)_forceResetToFilteredRendering:(BOOL)arg1 ;
-(void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(/*^block*/id)arg1 ;
-(id)_setupEffectsFullsizeView;
-(void)_destroyEffectsFullsizeView;
-(void)_setPreviewStartedBlock:(/*^block*/id)arg1 ;
-(CAMVideoPreviewView *)atomicVideoPreviewView;
-(void)_destroyEffectsGridView;
-(void)setAtomicVideoPreviewView:(CAMVideoPreviewView *)arg1 ;
-(id)_setupEffectsGridView;
-(void)_setRenderEffectsFullsizeView:(id)arg1 ;
-(void)_setRenderGridView:(id)arg1 ;
-(void)_gridTapped:(id)arg1 ;
-(void)_createContextIfNecessary;
-(BOOL)mirrorFilterRendering;
-(void)_notifyOfRenderIfNecessary;
-(BOOL)_isInBackground;
-(void)_renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateStatsForFrameWasDropped:(BOOL)arg1 ;
-(void)_reportStatsForFrameDrops;
-(BOOL)_previewStartedNotificationNeeded;
-(void)_handlePreviewStartedFiltered:(BOOL)arg1 ;
-(id)_previewStartedBlock;
-(BOOL)_isGridTransitionInFlight;
-(void)_setGridTransitionInFlight:(BOOL)arg1 ;
-(void)_transitionToGrid:(/*^block*/id)arg1 ;
-(void)_transitionFromGrid:(/*^block*/id)arg1 ;
-(id)_animatedLayerForView:(id)arg1 ;
-(CGRect)_gridFrameForCurrentFilters;
-(void)_animateToGrid:(BOOL)arg1 layer:(id)arg2 fadeOutLayer:(id)arg3 startFrame:(CGRect)arg4 endFrame:(CGRect)arg5 completion:(/*^block*/id)arg6 ;
-(void)_animateGridLayerZoomToGrid:(BOOL)arg1 ;
-(CGRect)_frameToZoomFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 withinFrame:(CGRect)arg3 ;
-(void)_animateLayer:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 viewTransform:(CGAffineTransform)arg4 animationDuration:(double)arg5 animationTimingFunction:(id)arg6 animationDelegate:(id)arg7 ;
-(CGRect)_zoomedFrameForRect:(CGRect)arg1 fromFullFrame:(CGRect)arg2 toZoomFrame:(CGRect)arg3 ;
-(void)renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)didDropSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setShowGrid:(BOOL)arg1 ;
-(BOOL)_previewLayerEnabled;
-(UITapGestureRecognizer *)_gridTapGestureRecognizer;
@end

