/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FUChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface FUChartPointNumeric : NSObject <FUChartPoint> {

	NSDate* _xValue;
	NSNumber* _yValue;

}

@property (nonatomic,retain) NSNumber * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * xValue;                       //@synthesize xValue=_xValue - In the implementation block
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(NSString *)description;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 ;
-(float)yValueFloatRepresentation;
-(NSDate *)xValue;
-(NSNumber *)yValue;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
@end
