/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZEffectTiming
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
@optional
-(NSRange*)multiImageSlideRange;
-(void)setMultiImageSlideRange:(NSRange)arg1;
-(id)effectAuthoredAttributes;
-(unsigned long long)effectAuthoredSlideCount;
-(void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2;

@required
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1;
-(double)mainDuration;
-(double)phaseOutDuration;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1;
-(double)lowestDisplayTime;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
-(double)phaseInDuration;

@end

