/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UIImageView, CMKTimelapseShutterRingView, UIActivityIndicatorView;

@interface CMKShutterButton : UIButton {

	BOOL _pulsing;
	BOOL _spinning;
	BOOL _showDisabled;
	long long _buttonMode;
	UIView* __outerView;
	UIImageView* __outerImageView;
	CMKTimelapseShutterRingView* __timelapseOuterView;
	UIView* __innerView;
	UIActivityIndicatorView* __progressActivityIndicatorView;
	CMKShutterButtonSpec _spec;

}

@property (assign,nonatomic) long long buttonMode;                                                    //@synthesize buttonMode=_buttonMode - In the implementation block
@property (assign,nonatomic) CMKShutterButtonSpec spec;                                               //@synthesize spec=_spec - In the implementation block
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing;                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning;                                         //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) BOOL showDisabled;                                                       //@synthesize showDisabled=_showDisabled - In the implementation block
@property (nonatomic,readonly) UIView * _outerView;                                                   //@synthesize _outerView=__outerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outerImageView;                                         //@synthesize _outerImageView=__outerImageView - In the implementation block
@property (nonatomic,readonly) CMKTimelapseShutterRingView * _timelapseOuterView;                     //@synthesize _timelapseOuterView=__timelapseOuterView - In the implementation block
@property (nonatomic,readonly) UIView * _innerView;                                                   //@synthesize _innerView=__innerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * _progressActivityIndicatorView;              //@synthesize _progressActivityIndicatorView=__progressActivityIndicatorView - In the implementation block
+(id)shutterButtonWithDesiredSpec:(CMKShutterButtonSpec)arg1 ;
+(id)shutterButton;
+(id)smallShutterButton;
+(id)tinyShutterButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSpinning:(BOOL)arg1 ;
-(void)_commonCMKShutterButtonInitialization;
-(void)setButtonMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setButtonMode:(long long)arg1 ;
-(long long)buttonMode;
-(BOOL)showDisabled;
-(CMKShutterButtonSpec)spec;
-(void)_setSpec:(CMKShutterButtonSpec)arg1 ;
-(void)setShowDisabled:(BOOL)arg1 ;
-(void)_updateOuterAndInnerLayers;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateSpinningAnimations;
-(double)_innerCircleDiameter;
-(BOOL)_shouldUseImageViewForMode:(long long)arg1 ;
-(id)_outerImageForMode:(long long)arg1 ;
-(BOOL)_shouldUseTimelapseOuterViewForMode:(long long)arg1 ;
-(UIView *)_outerView;
-(double)_borderWidthForMode:(long long)arg1 ;
-(UIView *)_innerView;
-(id)_colorForMode:(long long)arg1 ;
-(UIImageView *)_outerImageView;
-(CMKTimelapseShutterRingView *)_timelapseOuterView;
-(BOOL)_isStopMode:(long long)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(BOOL)isPulsing;
-(BOOL)isSpinning;
-(UIActivityIndicatorView *)_progressActivityIndicatorView;
@end

