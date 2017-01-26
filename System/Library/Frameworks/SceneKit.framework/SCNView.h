/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@protocol MTLDevice;
@class NSString, SCNRenderer, SCNScene, SCNDisplayLink, SCNJitterer, NSRecursiveLock, UIColor, SCNEventHandler, SCNSpriteKitEventHandler, NSArray, EAGLContext, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode, SCNTechnique;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport> {

	double _currentSystemTime;
	NSString* __ibSceneName;
	unsigned long long __ibPreferredRenderingAPI;
	unsigned _ibNoMultisampling : 1;
	unsigned long long _renderingAPI;
	unsigned _allowsBrowsing : 1;
	unsigned _isOpaque : 1;
	unsigned _firstDrawDone : 1;
	unsigned _appIsDeactivated : 1;
	unsigned _viewIsOffscreen : 1;
	id _delegate;
	SCNRenderer* _renderer;
	SCNScene* _scene;
	SCNDisplayLink* __displayLink;
	SCNJitterer* _jitterer;
	NSRecursiveLock* _lock;
	UIColor* _backgroundColor;
	char* _snapshotImageData;
	unsigned long long _snapshotImageDataLength;
	SCNEventHandler* _eventHandler;
	SCNSpriteKitEventHandler* _spriteKitEventHandler;
	id<MTLDevice> _device;
	NSArray* _controllerGestureRecognizers;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) BOOL allowsCameraControl; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,retain) EAGLContext * eaglContext; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(Class)layerClass;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)deviceForOptions:(id)arg1 ;
+(unsigned long long)renderingAPIForOptions:(id)arg1 ;
+(BOOL)_isMetalSupported;
+(id)_kvoKeysForwardedToRenderer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setContentScaleFactor:(double)arg1 ;
-(NSString *)description;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void*)context;
-(BOOL)isOpaque;
-(id)snapshot;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_controlsOwnScaleFactor;
-(void)lock;
-(void)unlock;
-(void)displayLayer:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(id)renderer;
-(void)_enterForeground:(id)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(void)setPlaying:(BOOL)arg1 ;
-(id)_displayLink;
-(void)_setGestureRecognizers:(id)arg1 ;
-(BOOL)isPlaying;
-(void*)__CFObject;
-(BOOL)_canJitter;
-(id)_authoringEnvironment;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(id)currentRenderPassDescriptor;
-(BOOL)_showsAuthoringEnvironment;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(unsigned long long)renderingAPI;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(SCNNode *)pointOfView;
-(BOOL)_isEditor;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(void)_jitterRedisplay;
-(void)set_showsAuthoringEnvironment:(BOOL)arg1 ;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)showsStatistics;
-(void)setShowsStatistics:(BOOL)arg1 ;
-(unsigned long long)debugOptions;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(unsigned long long)colorPixelFormat;
-(unsigned long long)depthPixelFormat;
-(unsigned long long)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(unsigned long long)antialiasingMode;
-(EAGLContext *)eaglContext;
-(void)setAllowsCameraControl:(BOOL)arg1 ;
-(void)_selectRenderingAPIWithOptions:(id)arg1 ;
-(void)_commonInit:(id)arg1 ;
-(void)set_ibPreferredRenderingAPI:(int)arg1 ;
-(void)set_ibWantsMultisampling:(BOOL)arg1 ;
-(BOOL)_ibWantsMultisampling;
-(void)set_ibSceneName:(id)arg1 ;
-(BOOL)allowsCameraControl;
-(id)_ibSceneName;
-(int)_ibPreferredRenderingAPI;
-(void)_flushDisplayLink;
-(void)_sceneDidUpdate:(id)arg1 ;
-(void)_setNeedsDisplay;
-(id)eventHandler;
-(void)_checkAndUpdateDisplayLinkStateIfNeeded;
-(double)_flipY:(double)arg1 ;
-(void)_updateGestureRecognizers;
-(void)_drawAtTime:(double)arg1 ;
-(void)setPointOfView:(id)arg1 animate:(BOOL)arg2 ;
-(void)resumeDisplayLink;
-(void)pauseDisplayLink;
-(BOOL)_supportsJitteringSyncRedraw;
-(void)eventHandlerWantsRedraw;
-(long long)preferredFramesPerSecond;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)_systemTimeAnimationStarted:(id)arg1 ;
-(void)switchToCameraNamed:(id)arg1 ;
-(void)switchToNextCamera;
-(id)ibSceneName;
-(void)setIbSceneName:(id)arg1 ;
-(BOOL)ibWantsMultisampling;
-(void)setIbWantsMultisampling:(BOOL)arg1 ;
-(int)ibPreferredRenderingAPI;
-(void)setIbPreferredRenderingAPI:(int)arg1 ;
-(void)setEaglContext:(EAGLContext *)arg1 ;
-(SCNScene *)scene;
-(void)setScene:(SCNScene *)arg1 ;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(void)pause:(id)arg1 ;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(BOOL)isJitteringEnabled;
-(void)setJitteringEnabled:(BOOL)arg1 ;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(id<MTLDevice>)device;
-(SCNTechnique *)technique;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(void)play:(id)arg1 ;
@end

