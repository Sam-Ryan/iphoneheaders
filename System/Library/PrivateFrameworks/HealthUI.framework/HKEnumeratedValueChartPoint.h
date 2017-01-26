/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSArray, NSDate, NSString;

@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint> {

	NSArray* _indices;
	NSDate* _xValue;
	id _userInfo;

}

@property (nonatomic,retain) NSArray * indices;                     //@synthesize indices=_indices - In the implementation block
@property (assign,nonatomic) NSDate * xValue;                       //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,retain) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(NSArray *)indices;
-(void)setIndices:(NSArray *)arg1 ;
-(NSDate *)xValue;
-(id)yValue;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)minYValue;
-(id)maxYValue;
-(void)setXValue:(NSDate *)arg1 ;
@end

