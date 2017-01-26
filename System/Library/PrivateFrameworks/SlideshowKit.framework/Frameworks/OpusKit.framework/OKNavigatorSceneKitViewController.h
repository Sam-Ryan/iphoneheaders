/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKNavigatorViewController.h>

@class SCNNode, NSDictionary, SCNScene, SCNView, OKWidgetCameraNode, OKPageSceneViewController;

@interface OKNavigatorSceneKitViewController : OKNavigatorViewController {

	SCNNode* _navigatorRootNode;
	NSDictionary* _nodeActionBindings;
	SCNScene* _scene;
	SCNView* _sceneKitView;
	OKWidgetCameraNode* _cameraNode;

}

@property (nonatomic,retain) OKWidgetCameraNode * cameraNode;                                                  //@synthesize cameraNode=_cameraNode - In the implementation block
@property (nonatomic,retain) SCNView * sceneKitView;                                                           //@synthesize sceneKitView=_sceneKitView - In the implementation block
@property (nonatomic,retain) SCNScene * scene;                                                                 //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SCNNode * navigatorRootNode;                                                      //@synthesize navigatorRootNode=_navigatorRootNode - In the implementation block
@property (nonatomic,retain,readonly) OKPageSceneViewController * currentPageSceneViewController; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)commonInit;
-(BOOL)prepareForDisplay;
-(void)layoutDidChange;
-(void)setNavigatorRootNode:(SCNNode *)arg1 ;
-(SCNNode *)navigatorRootNode;
-(SCNScene *)scene;
-(void)setScene:(SCNScene *)arg1 ;
-(SCNView *)sceneKitView;
-(void)setSceneKitView:(SCNView *)arg1 ;
-(OKWidgetCameraNode *)cameraNode;
-(void)setCameraNode:(OKWidgetCameraNode *)arg1 ;
-(void)createProxyForWidgetNodesActionBindings:(id)arg1 ;
-(id)widgetNodeForName:(id)arg1 recursively:(BOOL)arg2 ;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)setSettingCamera:(id)arg1 ;
-(id)pageViewControllerForPageWithName:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)updatePageViewController;
-(OKPageSceneViewController *)currentPageSceneViewController;
-(void)adjustPositionForPage:(id)arg1 ;
-(void)adjustCameraPositionForPage:(id)arg1 ;
-(BOOL)isRootSceneNavigator;
-(void)triggerActionBindingOnWidgetNode:(id)arg1 ;
-(void)setSettingSceneMaterialProperty:(id)arg1 ;
@end

