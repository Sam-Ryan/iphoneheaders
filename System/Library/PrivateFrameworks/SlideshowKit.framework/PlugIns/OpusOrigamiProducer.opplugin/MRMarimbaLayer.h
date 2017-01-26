/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>
#import <OpusOrigamiProducer/MRMarimbaHitBlobSupport.h>
#import <OpusOrigamiProducer/MRMarimbaPlayback.h>
#import <OpusOrigamiProducer/MRMarimbaBasicPlayback.h>

@class MPDocument, MRRenderer, MPFaceDetector, NSDictionary, NSTimer, NSString, EAGLContext;

@interface MRMarimbaLayer : CAEAGLLayer <MRMarimbaHitBlobSupport, MRMarimbaPlayback, MRMarimbaBasicPlayback> {

	MRRenderer* _renderer;
	MPDocument* _document;
	BOOL _masterClockIsSet;
	BOOL _bailTimeWatcher;
	BOOL _stopWithVideo;
	BOOL _wasSuspended;
	MPFaceDetector* _faceDetector;
	double _morphingToAspectRatio;
	CGSize _frameBufferSize;
	NSDictionary* _nextMorphInfo;
	NSTimer* _faceTimer;
	double _timestampOfLastRenderPass;
	BOOL _enableSlideDidChangeNotification;
	BOOL _sizeChangedWhileRendererSizeWasLocked;
	NSString* _lastSlideChange;
	EAGLContext* _context;
	unsigned _viewRenderbuffer;
	unsigned _viewFramebuffer;
	unsigned _depthBuffer;
	BOOL _isAboutToPlay;
	BOOL _isReadonly;
	BOOL _slidesAreReadonly;
	BOOL _rendererSizeIsLocked;
	BOOL _correctsForAutorotation;
	BOOL _interactivityIsEnabled;

}

@property (assign,nonatomic) BOOL isAboutToPlay; 
@property (assign,nonatomic) double framesPerSecond; 
@property (assign,nonatomic) BOOL interactivityIsEnabled;                        //@synthesize interactivityIsEnabled=_interactivityIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isReadonly;                                    //@synthesize isReadonly=_isReadonly - In the implementation block
@property (assign,nonatomic) BOOL slidesAreReadonly;                             //@synthesize slidesAreReadonly=_slidesAreReadonly - In the implementation block
@property (assign,nonatomic) BOOL rendererSizeIsLocked;                          //@synthesize rendererSizeIsLocked=_rendererSizeIsLocked - In the implementation block
@property (assign,nonatomic) BOOL correctsForAutorotation;                       //@synthesize correctsForAutorotation=_correctsForAutorotation - In the implementation block
@property (readonly) CGSize size; 
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) BOOL stopWithVideo; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) BOOL enableSlideDidChangeNotification;              //@synthesize enableSlideDidChangeNotification=_enableSlideDidChangeNotification - In the implementation block
+(id)layerWithDocument:(id)arg1 ;
+(BOOL)shouldRenderOnBackgroundThread;
+(void)releaseResources;
+(id)layerWithDocument:(id)arg1 size:(CGSize)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)bailTimeWatcher;
-(id)lastSlideChange;
-(void)setBailTimeWatcher:(BOOL)arg1 ;
-(void)setLastSlideChange:(id)arg1 ;
-(void)destroyFramebuffer;
-(BOOL)updateFramebuffer;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2 ;
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2 ;
-(BOOL)endLiveUpdateForHitBlob:(id)arg1 ;
-(void)endGesture:(id)arg1 ;
-(void)cancelGesture:(id)arg1 ;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3 ;
-(void)doGesture:(id)arg1 ;
-(void)beginGesture:(id)arg1 ;
-(void)moveToTitleSlide;
-(void)gotoPreviousSlide;
-(void)moveToSubtitleForSlide:(id)arg1 ;
-(void)callbackThread:(id)arg1 ;
-(void)gotoNextSlide:(BOOL)arg1 ;
-(id)currentSlides;
-(void)gotoSlide:(id)arg1 ;
-(double)timeForSlide:(id)arg1 ;
-(double)relativeTime;
-(long long)_mainLayerIndex;
-(id)_currentEffectContainer;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(BOOL)arg4 ;
-(id)displayedEffectContainers;
-(id)_firstEffectContainer;
-(id)_effectContainerForTime:(double)arg1 ;
-(id)_currentEffectLayer;
-(void)gotoNextSlideLegacy;
-(void)gotoPreviousSlide:(BOOL)arg1 ;
-(void)gotoPreviousSlideLegacy;
-(double)startTimeForSlide:(id)arg1 ;
-(void)gotoSlideLegacy:(id)arg1 ;
-(void)moveToNextEffectContainer;
-(void)moveToPreviousEffectContainer;
-(void)_postNotificationForSlideChange:(id)arg1 ;
-(void)_slideDidAppear:(id)arg1 ;
-(void)watcherThread:(id)arg1 ;
-(void)gotoNextSlide;
-(double)relativeTimeForBackgroundAudio;
-(void)removeEffectContainersBeforeTime:(double)arg1 ;
-(double)relativeTimeForLayer:(id)arg1 ;
-(void)gotoText:(id)arg1 ;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2 ;
-(BOOL)isInTransition;
-(id)currentSlide;
-(void)setStopWithVideo:(BOOL)arg1 ;
-(BOOL)nearingEndForSerializer:(id)arg1 ;
-(void)setIsAboutToPlay:(BOOL)arg1 ;
-(void)beginEditingOfText:(id)arg1 ;
-(BOOL)slidesAreReadonly;
-(void)endMorphing;
-(void)touchesMoved:(id)arg1 ;
-(BOOL)displaysFPS;
-(void)didAddEffects:(id)arg1 ;
-(void)didApplyStyle:(id)arg1 ;
-(void)pauseWhenStill;
-(BOOL)isAboutToPlay;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(BOOL)interactivityIsEnabled;
-(void)warmupRenderer;
-(void)setDisplaysFPS:(BOOL)arg1 ;
-(void)beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 switchToDocument:(id)arg4 ;
-(void)setInteractivityIsEnabled:(BOOL)arg1 ;
-(void)setCorrectsForAutorotation:(BOOL)arg1 ;
-(void)updateSizeOfRenderer:(id)arg1 ;
-(void)setupFaceDetection;
-(BOOL)_nearingEndForSerializer:(id)arg1 ;
-(BOOL)_effectRequestedSlides:(id)arg1 ;
-(void)didLiveChanged:(id)arg1 ;
-(void)touchesEnded:(id)arg1 ;
-(BOOL)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(void)requestRendering:(BOOL)arg1 ;
-(void)goForth;
-(void)prevFrame;
-(void)_reauthorForAspectRatioChange;
-(BOOL)stopWithVideo;
-(void)gotoEnd;
-(void)gotoBeginning;
-(void)aspectRatioChangedTo:(id)arg1 ;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2 ;
-(CGImageRef)snapshotAsCGImage;
-(void)setEnableSlideDidChangeNotification:(BOOL)arg1 ;
-(BOOL)correctsForAutorotation;
-(BOOL)rendererSizeIsLocked;
-(void)nextFrame;
-(void)setSlidesAreReadonly:(BOOL)arg1 ;
-(BOOL)enableSlideDidChangeNotification;
-(void)setRendererSizeIsLocked:(BOOL)arg1 ;
-(void)setIsReadonly:(BOOL)arg1 ;
-(BOOL)isAsynchronous;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)goBack;
-(MPDocument *)document;
-(void)cleanup;
-(void)setDocument:(MPDocument *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)pause;
-(double)timeRemaining;
-(BOOL)isReadonly;
-(void)togglePlayback;
-(void)setFramesPerSecond:(double)arg1 ;
-(double)framesPerSecond;
-(MRRenderer *)renderer;
-(void)play;
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1 ;
-(double)volume;
@end

