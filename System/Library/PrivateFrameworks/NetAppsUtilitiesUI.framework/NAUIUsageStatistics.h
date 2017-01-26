/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface NAUIUsageStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _nextAllowedUsageEventType;
	NSString* _usageStatisticsDomain;

}

@property (nonatomic,readonly) NSString * usageStatisticsDomain;              //@synthesize usageStatisticsDomain=_usageStatisticsDomain - In the implementation block
+(id)sharedUsageStatisticsForDomain:(id)arg1 ;
+(id)voiceMemoUsageStatistics;
-(id)initWithUsageStatisticsDomain:(id)arg1 ;
-(void)_incrementUsageCountForEventWithUsageStatisticName:(id)arg1 statisticType:(long long)arg2 ;
-(void)_pushDistributionStatisticNamed:(id)arg1 value:(double)arg2 ;
-(NSString *)usageStatisticsDomain;
-(id)_eventKeyForUsageStatisticName:(id)arg1 groupingKey:(id)arg2 ;
-(void)incrementUsageStatisticNamed:(id)arg1 statisticType:(long long)arg2 ;
-(void)pushDistributionStatisticNamed:(id)arg1 value:(double)arg2 ;
@end

