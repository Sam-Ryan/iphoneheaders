/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FUChartDataGroupDataSource <NSObject>
@optional
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;

@required
-(unsigned long long)numberOfDataSetsInGroup:(id)arg1;
-(unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;

@end

