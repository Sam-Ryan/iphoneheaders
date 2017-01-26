/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe2D : MCAnimationKeyframe {

	CGPoint mPoint;
	CGPoint mC1;
	CGPoint mC2;

}

@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) CGPoint c1; 
@property (assign,nonatomic) CGPoint c2; 
+(id)keyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setC2:(CGPoint)arg1 ;
-(void)setC1:(CGPoint)arg1 ;
-(CGPoint)c2;
-(CGPoint)c1;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(id)imprint;
@end
