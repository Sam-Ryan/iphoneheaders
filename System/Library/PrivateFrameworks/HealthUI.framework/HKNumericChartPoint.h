/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSString;

@interface HKNumericChartPoint : NSObject <HKChartPoint> {

	NSDate* _xValue;
	id _yValue;
	id _userInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id)xValue;
-(id)yValue;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3 ;
@end

