/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKit/PassKit-Structs.h>
@class _UIDynamicValueAnimation, UIPanGestureRecognizer, PKPassGroupView;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {

	_UIDynamicValueAnimation* _panningAnimation;
	UIPanGestureRecognizer* _gestureRecognizer;
	PKPassGroupView* _panningGroupView;
	double _panningViewTargetScale;
	CGPoint _panningViewStartPosition;
	CGPoint _panningViewTargetPosition;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) PKPassGroupView * panningGroupView;                      //@synthesize panningGroupView=_panningGroupView - In the implementation block
@property (assign,nonatomic) CGPoint panningViewStartPosition;                        //@synthesize panningViewStartPosition=_panningViewStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint panningViewTargetPosition;                       //@synthesize panningViewTargetPosition=_panningViewTargetPosition - In the implementation block
@property (assign,nonatomic) double panningViewTargetScale;                           //@synthesize panningViewTargetScale=_panningViewTargetScale - In the implementation block
-(void)dealloc;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)stop;
-(id)initWithGroupView:(id)arg1 ;
-(CGPoint)panningViewStartPosition;
-(void)layoutViewsWithY:(double)arg1 ;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(double)arg1 ;
-(void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPanningGroupView:(PKPassGroupView *)arg1 ;
-(id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3 ;
-(PKPassGroupView *)panningGroupView;
-(CGPoint)panningViewTargetPosition;
-(double)panningViewTargetScale;
@end

