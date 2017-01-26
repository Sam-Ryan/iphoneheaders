/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface SPUISearchBackdropView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _effectView;
	UIView* _tintView;
	BOOL _useFakeBlur;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForTransition;
-(void)setTransitionProgress:(double)arg1 ;
-(void)transitionCompleted;
-(BOOL)useHighQualityGraphics;
-(void)setUseFakeBlur:(BOOL)arg1 ;
@end

