/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationKeyframe.h>

@class NSString, NSDictionary;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {

	float mInnerEaseInControl;
	float mInnerEaseOutControl;
	double mDuration;
	NSString* mFunction;
	NSDictionary* mFunctionParameters;
	double mFunctionTimeOffset;
	double mFunctionTimeFactor;

}

@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * function; 
@property (nonatomic,retain) NSDictionary * functionParameters; 
@property (assign,nonatomic) double functionTimeOffset; 
@property (assign,nonatomic) double functionTimeFactor; 
@property (assign,nonatomic) float innerEaseInControl; 
@property (assign,nonatomic) float innerEaseOutControl; 
+(id)keyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4 ;
-(float)innerEaseInControl;
-(void)setFunctionTimeFactor:(double)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setFunctionTimeOffset:(double)arg1 ;
-(void)setFunctionParameters:(NSDictionary *)arg1 ;
-(double)functionTimeOffset;
-(float)innerEaseOutControl;
-(void)setInnerEaseInControl:(float)arg1 ;
-(void)setInnerEaseOutControl:(float)arg1 ;
-(double)functionTimeFactor;
-(NSDictionary *)functionParameters;
-(void)demolish;
-(NSString *)function;
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(id)imprint;
@end
