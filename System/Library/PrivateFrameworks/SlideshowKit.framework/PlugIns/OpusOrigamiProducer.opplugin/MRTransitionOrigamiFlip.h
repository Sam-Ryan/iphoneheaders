/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRTransition.h>

@class MROrigamiAnimationPath;

@interface MRTransitionOrigamiFlip : MRTransition {

	MROrigamiAnimationPath* mBigSwing;
	MROrigamiAnimationPath* mSideSwing;

}
-(id)initWithTransitionID:(id)arg1 ;
-(BOOL)controlsLayersTime;
-(BOOL)supportsDirectionOverride;
-(void)_setupSwingTimings;
-(void)_cleanupSwingTimings;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)cleanup;
-(void)setAttributes:(id)arg1 ;
@end

