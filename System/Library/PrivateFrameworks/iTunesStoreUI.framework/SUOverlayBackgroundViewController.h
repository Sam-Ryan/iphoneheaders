/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SUScalingFlipViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SUOverlayBackgroundDelegate;
@class NSMutableArray, SUScalingFlipView, SUTouchCaptureView, UISwipeGestureRecognizer, SUOverlayViewController, NSArray, NSString;

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate> {

	NSMutableArray* _actionQueue;
	SUScalingFlipView* _activeFlipView;
	BOOL _askingToDismissEverything;
	BOOL _askingToDismissSelection;
	SUTouchCaptureView* _captureView;
	id<SUOverlayBackgroundDelegate> _delegate;
	CGRect _keyboardFrame;
	long long _selectedViewControllerIndex;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	NSMutableArray* _viewControllers;

}

@property (assign,nonatomic) id<SUOverlayBackgroundDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SUOverlayViewController * selectedViewController; 
@property (nonatomic,readonly) NSArray * viewControllers;                                     //@synthesize viewControllers=_viewControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SUOverlayBackgroundDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SUOverlayBackgroundDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(NSArray *)viewControllers;
-(SUOverlayViewController *)selectedViewController;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_swipe:(id)arg1 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)copyChildViewControllersForReason:(long long)arg1 ;
-(BOOL)shouldExcludeFromNavigationHistory;
-(void)keyboardWillHideWithInfo:(id)arg1 ;
-(void)keyboardWillShowWithInfo:(id)arg1 ;
-(id)copyArchivableJetsamContext;
-(void)dismissOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)populateNavigationHistoryWithItems:(id)arg1 ;
-(void)_performNextAction;
-(id)viewControllerForScriptWindowContext:(id)arg1 ;
-(void)presentOverlay:(id)arg1 withTransition:(id)arg2 ;
-(void)scalingFlipViewDidFinish:(id)arg1 ;
-(void)_tearDownFlipView;
-(void)_sendDidDismiss;
-(id)_copyTransitionForTransition:(id)arg1 action:(id)arg2 ;
-(void)_enqueueAction:(id)arg1 ;
-(double)_viewControllerKeyboardOffset;
-(CGRect)_centeredFrameForViewController:(id)arg1 ;
-(double)_viewControllerHorizontalPadding;
-(void)layoutViewControllers;
-(void)_layoutForKeyboardChangeWithInfo:(id)arg1 ;
-(void)_captureViewAction:(id)arg1 ;
-(void)_reloadGestureRecognizers;
-(void)_addViewController:(id)arg1 ;
-(void)_shouldDismissFinishedWithValue:(id)arg1 ;
-(void)_overlayAnimationDidFinish;
-(void)_finishDismissOfViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_finishDismissAction:(id)arg1 ;
-(void)_finishDismissEverythingAction:(id)arg1 ;
-(void)_finishPresentAction:(id)arg1 ;
-(void)_overlayActionDidFinish;
-(void)_removeViewController:(id)arg1 ;
-(void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(CGRect)_frameForSlideFromBottomForViewController:(id)arg1 ;
-(void)_performFlipForAction:(id)arg1 ;
-(void)_performDismissAction:(id)arg1 ;
-(void)_performDismissEverythingAction:(id)arg1 ;
-(void)_performPresentAction:(id)arg1 ;
-(void)overlayPageViewTapped:(id)arg1 ;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(id)_selectedViewController;
@end

