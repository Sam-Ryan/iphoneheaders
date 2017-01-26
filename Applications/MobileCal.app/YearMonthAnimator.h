/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class CalendarModel, YearMonthTransitionView, NSString;

@interface YearMonthAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	BOOL _reverse;
	CalendarModel* _model;
	YearMonthTransitionView* _transitionView;

}

@property (nonatomic,retain) CalendarModel * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL reverse;                                          //@synthesize reverse=_reverse - In the implementation block
@property (nonatomic,retain) YearMonthTransitionView * transitionView;              //@synthesize transitionView=_transitionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReverse:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 reverse:(BOOL)arg2 ;
-(void)setTransitionView:(YearMonthTransitionView *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(CalendarModel *)model;
-(YearMonthTransitionView *)transitionView;
-(void)setModel:(CalendarModel *)arg1 ;
-(BOOL)reverse;
@end
