/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, VOTUIRotorKnob, UILabel, NSTimer;

@interface VOTUIRotorDisplay : UIView {

	_UIBackdropView* _backdropView;
	VOTUIRotorKnob* _rotorKnob;
	UILabel* _titleLabel;
	UILabel* _stagingTitleLabel;
	NSTimer* _fadeTimer;
	BOOL _wasRotorMovementClockwise;

}
-(void)resetRotorPosition;
-(void)setRotorItemCount:(long long)arg1 ;
-(void)updateRotorPosition:(BOOL)arg1 ;
-(void)hide;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
@end

