/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDContentAnimation.h>

@class NSArray, CAMediaTimingFunction, TSDContentPath;

@interface TSDContentPathAnimation : TSDContentAnimation {

	NSArray* _contentLocations;
	CAMediaTimingFunction* _timingFunction;
	NSArray* _keyTimes;
	NSArray* _timingFunctions;
	double _duration;

}

@property (nonatomic,copy) NSArray * contentLocations;                            //@synthesize contentLocations=_contentLocations - In the implementation block
@property (nonatomic,copy) TSDContentPath * contentPath; 
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,copy) NSArray * keyTimes;                                    //@synthesize keyTimes=_keyTimes - In the implementation block
@property (nonatomic,copy) NSArray * timingFunctions;                             //@synthesize timingFunctions=_timingFunctions - In the implementation block
-(BOOL)i_canProduceAnimation;
-(id)i_endLocation;
-(id)i_animationWithTransformBlock:(/*^block*/id)arg1 ;
-(void)setContentLocations:(NSArray *)arg1 ;
-(TSDContentPath *)contentPath;
-(void)setContentPath:(TSDContentPath *)arg1 ;
-(NSArray *)contentLocations;
-(void)dealloc;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(NSArray *)keyTimes;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(NSArray *)timingFunctions;
@end

