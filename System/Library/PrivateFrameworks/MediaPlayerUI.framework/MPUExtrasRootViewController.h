/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/IKApplication.h>
#import <libobjc.A.dylib/IKAppContextDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/IKAppDeviceConfig.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>

@protocol OS_dispatch_queue, IKAppDataStoring;
@class NSLayoutConstraint, MPUExtrasNavigationController, NSObject, MPUExtrasMainTemplateViewController, MPUExtrasContext, MPUExtrasArtworkDataSource, MPUExtrasFeatureContainerViewController, IKAppContext, UINavigationController, UIView, NSString;

@interface MPUExtrasRootViewController : UIViewController <IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig, MPVideoOverlayDelegate> {

	NSLayoutConstraint* _bottomConstraint;
	MPUExtrasNavigationController* _navigationController;
	NSObject*<OS_dispatch_queue> _imageRequestQueue;
	BOOL _didAttemptRestartAfterAppContextFailure;
	MPUExtrasMainTemplateViewController* _mainTemplateViewController;
	MPUExtrasContext* _context;
	MPUExtrasArtworkDataSource* _artworkDataSource;
	MPUExtrasFeatureContainerViewController* _featureContainer;
	IKAppContext* _applicationContext;
	id<IKAppDataStoring> _localStorage;
	id<IKAppDataStoring> _vendorStorage;

}

@property (nonatomic,readonly) UINavigationController * navigationController;                               //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) MPUExtrasMainTemplateViewController * mainTemplateViewController;              //@synthesize mainTemplateViewController=_mainTemplateViewController - In the implementation block
@property (nonatomic,readonly) UIView * mainMenuBar; 
@property (nonatomic,__weak,readonly) MPUExtrasContext * context;                                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) MPUExtrasArtworkDataSource * artworkDataSource;                                //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
@property (nonatomic,retain) MPUExtrasFeatureContainerViewController * featureContainer;                    //@synthesize featureContainer=_featureContainer - In the implementation block
@property (nonatomic,retain) IKAppContext * applicationContext;                                             //@synthesize applicationContext=_applicationContext - In the implementation block
@property (nonatomic,retain) id<IKAppDataStoring> localStorage;                                             //@synthesize localStorage=_localStorage - In the implementation block
@property (nonatomic,retain) id<IKAppDataStoring> vendorStorage;                                            //@synthesize vendorStorage=_vendorStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentController;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(MPUExtrasContext *)context;
-(void)start;
-(UINavigationController *)navigationController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)initWithContext:(id)arg1 ;
-(id)timeZone;
-(id)appIdentifier;
-(void)setArtworkDataSource:(MPUExtrasArtworkDataSource *)arg1 ;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(CGSize)screenSize;
-(BOOL)isTimeZoneSet;
-(id)systemLanguage;
-(id)storeFrontCountryCode;
-(id)deviceConfigForContext:(id)arg1 ;
-(id)navigationControllerForContext:(id)arg1 ;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(BOOL)shouldIgnoreJSValidation;
-(id)appJSURL;
-(id)vendorIdentifier;
-(id<IKAppDataStoring>)localStorage;
-(id<IKAppDataStoring>)vendorStorage;
-(BOOL)appIsTrusted;
-(id)appLaunchParams;
-(UIView *)mainMenuBar;
-(MPUExtrasMainTemplateViewController *)mainTemplateViewController;
-(id)detectMainDocument:(id)arg1 ;
-(void)_stopOldContextIfNeeded;
-(id)_createDataStorageForIdentifier:(id)arg1 ;
-(void)_setNavigationController:(id)arg1 ;
-(void)_registerIKStylesAndElements;
-(void)_setUpForApplication;
-(void)_attemptRestart;
-(void)_adjustExtrasVisibilityForViewSize:(CGSize)arg1 ;
-(BOOL)_shouldExtrasBeVisibleForViewSize:(CGSize)arg1 ;
-(void)_showExtrasBar:(BOOL)arg1 ;
-(void)setMainTemplateViewController:(MPUExtrasMainTemplateViewController *)arg1 ;
-(BOOL)_setMainDocumentWithViewController:(id)arg1 ;
-(BOOL)_areExtrasVisible;
-(void)popToFeatureOrMain;
-(void)_applyMainTemplateOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_finalizeMainTemplateOffset:(BOOL)arg1 ;
-(MPUExtrasFeatureContainerViewController *)featureContainer;
-(void)setFeatureContainer:(MPUExtrasFeatureContainerViewController *)arg1 ;
-(IKAppContext *)applicationContext;
-(void)setApplicationContext:(IKAppContext *)arg1 ;
-(void)setLocalStorage:(id<IKAppDataStoring>)arg1 ;
-(void)setVendorStorage:(id<IKAppDataStoring>)arg1 ;
-(MPUExtrasArtworkDataSource *)artworkDataSource;
-(void)overlayTappedBackButton:(id)arg1 ;
@end

