/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDBezierPathSource.h>
#import <TSReading/TSDSmartPathSource.h>

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource> {

	int mType;
	double mOutsetFrom;
	double mOutsetTo;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) double outsetFrom; 
@property (assign,nonatomic) double outsetTo; 
@property (readonly) unsigned long long numberOfControlKnobs; 
+(id)pathSourceAtAngleOfSize:(CGSize)arg1 forType:(int)arg2 ;
+(id)pathSourceOfLength:(double)arg1 ;
-(void)bend;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(BOOL)isLineSegment;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(id)initWithBezierPath:(id)arg1 ;
-(void)p_setBezierPath:(id)arg1 ;
-(double)outsetFrom;
-(double)outsetTo;
-(void)setOutsetFrom:(double)arg1 ;
-(void)setOutsetTo:(double)arg1 ;
-(long long)pathElementIndexForKnobTag:(unsigned long long)arg1 ;
-(CGPoint)fixedPointForControlKnobChange;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)bezierPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
@end

