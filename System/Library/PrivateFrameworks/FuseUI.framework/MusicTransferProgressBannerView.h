/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIView;

@interface MusicTransferProgressBannerView : UIControl {

	BOOL _didInitialHighlightForTouch;
	UILabel* _label;
	float _progress;
	UIView* _progressView;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) float progress;                 //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)label;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
@end

