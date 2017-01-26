/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning, SFInteractiveDismissControllerDelegate;
@class UIView, UIScreenEdgePanGestureRecognizer, UIViewController, NSString;

@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	unsigned long long _dismissMode;
	long long _interactionState;
	double _timestamps[3];
	double _velocities[3];
	double _accelerations[3];
	UIView* _dimmingView;
	UIScreenEdgePanGestureRecognizer* _edgeSwipeGestureRecognizer;
	UIViewController* _viewControllerToBeDismissed;
	UIView* _edgeSwipeView;
	id<SFInteractiveDismissControllerDelegate> _delegate;
	unsigned long long _sampleCount;
	double _totalDistance;
	double _skipTimeStamp;
	double _previousTimeStamp;
	double _previousDisplacement;
	double _previousVelocity;
	double _previousAcceleration;
	double _averageVelocity;
	double _averageAcceleration;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * edgeSwipeGestureRecognizer;              //@synthesize edgeSwipeGestureRecognizer=_edgeSwipeGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewControllerToBeDismissed;                        //@synthesize viewControllerToBeDismissed=_viewControllerToBeDismissed - In the implementation block
@property (nonatomic,retain) UIView * edgeSwipeView;                                                       //@synthesize edgeSwipeView=_edgeSwipeView - In the implementation block
@property (assign,nonatomic,__weak) id<SFInteractiveDismissControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long sampleCount;                                               //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) double totalDistance;                                                         //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) double skipTimeStamp;                                                         //@synthesize skipTimeStamp=_skipTimeStamp - In the implementation block
@property (assign,nonatomic) double previousTimeStamp;                                                     //@synthesize previousTimeStamp=_previousTimeStamp - In the implementation block
@property (assign,nonatomic) double previousDisplacement;                                                  //@synthesize previousDisplacement=_previousDisplacement - In the implementation block
@property (assign,nonatomic) double previousVelocity;                                                      //@synthesize previousVelocity=_previousVelocity - In the implementation block
@property (assign,nonatomic) double previousAcceleration;                                                  //@synthesize previousAcceleration=_previousAcceleration - In the implementation block
@property (assign,nonatomic) double averageVelocity;                                                       //@synthesize averageVelocity=_averageVelocity - In the implementation block
@property (assign,nonatomic) double averageAcceleration;                                                   //@synthesize averageAcceleration=_averageAcceleration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SFInteractiveDismissControllerDelegate>)arg1 ;
-(id)init;
-(id<SFInteractiveDismissControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(double)_translationCoefficient;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3 ;
-(BOOL)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double*)arg3 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(double)totalDistance;
-(void)setTotalDistance:(double)arg1 ;
-(double)skipTimeStamp;
-(void)setSkipTimeStamp:(double)arg1 ;
-(double)previousTimeStamp;
-(void)setPreviousTimeStamp:(double)arg1 ;
-(double)previousDisplacement;
-(void)setPreviousDisplacement:(double)arg1 ;
-(double)previousVelocity;
-(void)setPreviousVelocity:(double)arg1 ;
-(double)previousAcceleration;
-(void)setPreviousAcceleration:(double)arg1 ;
-(double)averageVelocity;
-(void)setAverageVelocity:(double)arg1 ;
-(double)averageAcceleration;
-(void)setAverageAcceleration:(double)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)setViewControllerToBeDismissed:(UIViewController *)arg1 ;
-(UIView *)edgeSwipeView;
-(void)setEdgeSwipeView:(UIView *)arg1 ;
-(void)swiped:(id)arg1 ;
-(void)_animateDismissalCancelTransition;
-(void)_animateDismissalCompleteTransition;
-(double)_percentComplete:(id)arg1 ;
-(CGPoint)translationForStatistics;
-(CGPoint)velocityForStatistics;
-(void)_presentAnimateTransition:(id)arg1 ;
-(void)_dismissAnimateTransition:(id)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)edgeSwipeGestureRecognizer;
-(UIViewController *)viewControllerToBeDismissed;
@end

