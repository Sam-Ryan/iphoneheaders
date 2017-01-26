/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAnimationPath.h>

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {

	NSMutableSet* _keyframes;

}
+(id)animationPath;
-(void)copyKeyframes:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 ;
-(void)cleanup;
-(id)fullDebugLog;
-(double)parentPhaseInDuration;
-(double)parentPhaseOutDuration;
-(double)parentMainDuration;
-(void)dump;
-(id)orderedKeyframes;
-(id)keyframes;
-(void)addKeyframes:(id)arg1 ;
-(void)addKeyframe:(id)arg1 ;
-(double)relativeTimeForKeyframe:(id)arg1 ;
-(void)removeKeyframe:(id)arg1 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 ;
-(void)removeKeyframes:(id)arg1 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 forDuration:(double)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 forDuration:(double)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllKeyframes;
-(id)parent;
@end
