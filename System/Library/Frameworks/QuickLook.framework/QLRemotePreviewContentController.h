/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/QLPreviewContentControllerProtocol.h>
#import <libobjc.A.dylib/QLPrintPageRendererDataSource.h>

@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;
@class QLPreviewController, NSMapTable, QLPrintPageRenderer, _UIRemoteView, NSString;

@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource> {

	QLPreviewController* _previewController;
	id<QLPreviewContentDataSource> _dataSource;
	id<QLPreviewContentDelegate> _delegate;
	long long _currentPreviewItemIndex;
	long long _numberOfPreviewItems;
	NSMapTable* _previewItemsForProxys;
	NSMapTable* _proxysForPreviewItems;
	QLPrintPageRenderer* _printPageRenderer;
	_UIRemoteView* _fullScreenView;
	BOOL _statusBarWasHidden;
	BOOL _isHostingFullScreenWindow;

}

@property (assign) QLPreviewController * previewController;                //@synthesize previewController=_previewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<QLPreviewContentDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) id<QLPreviewContentDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) int previewMode; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDataSource:(id<QLPreviewContentDataSource>)arg1 ;
-(void)setDelegate:(id<QLPreviewContentDelegate>)arg1 ;
-(void)dealloc;
-(id<QLPreviewContentDataSource>)dataSource;
-(id<QLPreviewContentDelegate>)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(QLPreviewController *)previewController;
-(void)setBlockRemoteImages:(BOOL)arg1 ;
-(id)printPageRenderer;
-(void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(/*^block*/id)arg2 ;
-(void)checkCurrentPreviewItem;
-(long long)numberOfPreviewItems;
-(void)setPreviewController:(QLPreviewController *)arg1 ;
-(void)stopLoadingCurrentPreviewItem;
-(void)enterBackground;
-(void)becomeForeground;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(void)configureWithParameters:(id)arg1 ;
-(void)willChangeContentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)forceResignFirstResponder;
-(void)togglePlayState;
-(void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(/*^block*/id)arg1 ;
-(void)setOrbMode:(unsigned long long)arg1 ;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(long long)numberOfPagesInPrintPageRenderer:(id)arg1 ;
-(void)printPageRenderer:(id)arg1 prepareForDrawingPages:(NSRange)arg2 ;
-(id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(long long)arg2 printingDone:(BOOL*)arg3 ;
-(void)_previewContentControllerGetPreviewItemAtIndex:(long long)arg1 sourceUUID:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1 ;
-(void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1 ;
-(void)_contentWasTappedInPreviewContentController;
-(void)_overlayWasTappedInPreviewContentController;
-(void)_showContentsWasTappedInPreviewContentController;
-(void)_dismissGestureUpdateWithState:(long long)arg1 trackingInformation:(id)arg2 ;
-(void)_previewContentControllerWillMoveToItemAtIndex:(long long)arg1 ;
-(void)_previewContentControllerDidMoveToItemAtIndex:(long long)arg1 ;
-(void)_previewContentControllerReceivedTapOnURL:(id)arg1 ;
-(void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3 ;
-(void)_previewContentControllerPrefersWhitePointAdaptiveStyle:(long long)arg1 atIndex:(long long)arg2 ;
-(void)_setAVState:(id)arg1 forPreviewItem:(id)arg2 ;
-(void)_willEnterFullScreenWithContext:(id)arg1 ;
-(void)_didExitFullScreen;
-(void)_updateNavigationBarVerticalOffset;
-(void)setNumberOfPreviewItems:(long long)arg1 ;
-(id)_proxyForPreviewItem:(id)arg1 ;
-(id)_previewItemFromProxy:(id)arg1 ;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
-(void)setCurrentPreviewItemIndex:(long long)arg1 ;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)refreshCurrentPreviewItem;
-(long long)currentPreviewItemIndex;
@end

