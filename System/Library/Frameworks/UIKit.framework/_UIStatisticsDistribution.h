/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIStatistics.h>

@interface _UIStatisticsDistribution : _UIStatistics
-(void)resetDistribution;
-(void)resetDistributionToValue:(double)arg1 ;
-(void)recordDistributionValue:(double)arg1 ;
-(BOOL)isTimingForObject:(id)arg1 ;
-(void)startTimingForObject:(id)arg1 ;
-(void)cancelTimingForObject:(id)arg1 ;
-(void)recordTimingForObject:(id)arg1 ;
@end

