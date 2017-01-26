/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TSKSheetViewControllerDelegate;
@class UIViewController, NSLayoutConstraint, NSString;

@interface TSKSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate> {

	UIViewController* _contentViewController;
	NSLayoutConstraint* _contentVerticalConstraint;
	BOOL _isContentHidden;
	id<TSKSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<TSKSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContentViewController:(id)arg1 allowTapsOutsideContentView:(BOOL)arg2 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)didTapView;
-(void)dismissSheetAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isShowingForTransitionContext:(id)arg1 ;
-(void)animateShowWithContext:(id)arg1 ;
-(void)animateDismissWithContext:(id)arg1 ;
-(void)setDelegate:(id<TSKSheetViewControllerDelegate>)arg1 ;
-(id<TSKSheetViewControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
@end

