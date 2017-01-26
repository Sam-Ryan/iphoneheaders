/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIControl.h>

@class _UIBackdropView, UILabel, MPUSpringAnimationFactory, MusicMediaDetailTintInformation, NSString;

@interface MusicProfileFollowButton : UIControl {

	_UIBackdropView* _backdropView;
	UILabel* _titleLabel;
	BOOL _following;
	double _animationDuration;
	MPUSpringAnimationFactory* _animationFactory;
	MusicMediaDetailTintInformation* _detailTintInformation;
	NSString* _followingText;
	NSString* _initialText;
	double _maximumWidth;
	long long _style;

}

@property (assign,nonatomic) double animationDuration;                                           //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) MPUSpringAnimationFactory * animationFactory;                       //@synthesize animationFactory=_animationFactory - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * detailTintInformation;              //@synthesize detailTintInformation=_detailTintInformation - In the implementation block
@property (assign,nonatomic) BOOL following;                                                     //@synthesize following=_following - In the implementation block
@property (nonatomic,copy) NSString * followingText;                                             //@synthesize followingText=_followingText - In the implementation block
@property (nonatomic,copy) NSString * initialText;                                               //@synthesize initialText=_initialText - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                                //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAnimationDuration:(double)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)maximumWidth;
-(double)animationDuration;
-(MPUSpringAnimationFactory *)animationFactory;
-(void)setAnimationFactory:(MPUSpringAnimationFactory *)arg1 ;
-(void)_updateButtonForStyle;
-(void)_updateButtonSize;
-(void)_updateLabelSize;
-(id)_followingButtonBackgroundColorForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(id)_followingButtonTextColorForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(id)_followingButtonBorderColorForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(void)_updateButtonForHighlighted:(BOOL)arg1 ;
-(void)setFollowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateButtonForCurrentFollowingStateAnimated:(BOOL)arg1 ;
-(void)_updateLabelString;
-(void)_updateForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(id)_followingButtonShadowColorForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(id)_followingButtonTextBlendModeForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(float)_followingButtonBackdropViewAlphaForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(void)setDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setFollowing:(BOOL)arg1 ;
-(void)setFollowingText:(NSString *)arg1 ;
-(void)setInitialText:(NSString *)arg1 ;
-(float)_followingButtonBackdropViewColorTintAlphaForState:(BOOL)arg1 withStyle:(long long)arg2 ;
-(MusicMediaDetailTintInformation *)detailTintInformation;
-(BOOL)following;
-(NSString *)followingText;
-(NSString *)initialText;
@end

