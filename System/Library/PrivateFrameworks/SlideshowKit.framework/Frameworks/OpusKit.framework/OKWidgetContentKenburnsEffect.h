/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetContentEffect.h>

@class OKPanGenerator, CABasicAnimation, NSString;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect {

	OKPanGenerator* _panGenerator;
	CABasicAnimation* _translationXAnimation;
	CABasicAnimation* _translationYAnimation;
	CABasicAnimation* _scaleAnimation;
	double _fromScale;
	double _toScale;
	double _fromX;
	double _toX;
	double _fromY;
	double _toY;
	double _panningCropThreshold;
	double _beginTime;
	NSString* _timingFunction;
	double _speedMitigator;
	double _durationPadding;
	double _panningAmount;
	BOOL _animationIsUnderway;
	double _animationProgressAtStateChange;
	double _animationResumeTime;

}
+(id)supportedSettings;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)stopAnimation;
-(void)startAnimation;
-(id)settingObjectForKey:(id)arg1 ;
-(void)applySettings;
-(void)prepareContentEffectWithView:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(double)remainingPlayDuration;
-(float)_croppedFractionforRectAspectRatio:(float)arg1 photoAspectRatio:(float)arg2 ;
-(void)_applyGeometryForStart:(BOOL)arg1 ;
-(double)_fullDuration;
-(void)_setupAnimation;
@end

