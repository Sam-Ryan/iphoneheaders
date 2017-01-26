/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, NSDictionary, NSDate, PLXPCListenerOperatorComposition, NSMutableDictionary;

@interface PLCoalitionAgent : PLAgent {

	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	NSDictionary* _lastCoalitionDictionary;
	NSDictionary* _lastCoalitionObjectDictionary;
	NSDate* _lastDate;
	NSDate* _currentDate;
	PLEntryNotificationOperatorComposition* _processmonitorCallback;
	PLXPCListenerOperatorComposition* _coalitionReapNotification;
	NSMutableDictionary* _reapedCoalitions;
	NSMutableDictionary* _coalitionIDToCoalitionNameMapping;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;                 //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (retain) NSDictionary * lastCoalitionDictionary;                                       //@synthesize lastCoalitionDictionary=_lastCoalitionDictionary - In the implementation block
@property (retain) NSDictionary * lastCoalitionObjectDictionary;                                 //@synthesize lastCoalitionObjectDictionary=_lastCoalitionObjectDictionary - In the implementation block
@property (retain) NSDate * lastDate;                                                            //@synthesize lastDate=_lastDate - In the implementation block
@property (retain) NSDate * currentDate;                                                         //@synthesize currentDate=_currentDate - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * processmonitorCallback;              //@synthesize processmonitorCallback=_processmonitorCallback - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * coalitionReapNotification;                 //@synthesize coalitionReapNotification=_coalitionReapNotification - In the implementation block
@property (retain) NSMutableDictionary * reapedCoalitions;                                       //@synthesize reapedCoalitions=_reapedCoalitions - In the implementation block
@property (retain) NSMutableDictionary * coalitionIDToCoalitionNameMapping;                      //@synthesize coalitionIDToCoalitionNameMapping=_coalitionIDToCoalitionNameMapping - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventIntervalDefinitionCoalitionUsage;
+(id)entryEventPointDefinitionCoalitionDrop;
+(id)entryEventPointDefinitionCoalitionSnapshot;
-(id)init;
-(void)log;
-(NSDate *)currentDate;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(void)setProcessmonitorCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)processmonitorCallback;
-(void)logEventIntervalUsage;
-(void)handleReapNotifications:(id)arg1 ;
-(void)setCoalitionReapNotification:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)timedCoalitionInfo;
-(id)buildPLEntry:(coalition_resource_usage*)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3 withDate:(id)arg4 withCoalitionId:(unsigned long long)arg5 ;
-(NSDictionary *)lastCoalitionDictionary;
-(NSDate *)lastDate;
-(id)buildPLEntryDiffWithStartEntry:(id)arg1 withEndEntry:(id)arg2 withLastDate:(id)arg3 ;
-(NSMutableDictionary *)reapedCoalitions;
-(NSDictionary *)lastCoalitionObjectDictionary;
-(BOOL)shouldLogCoalitionObject:(id)arg1 withEndObject:(id)arg2 ;
-(id)buildPLEntryDiffWithStartObject:(id)arg1 withEndObject:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4 ;
-(void)setReapedCoalitions:(NSMutableDictionary *)arg1 ;
-(id)reapedCoalitionsPLEntryDiff;
-(void)addAccountingEventsFromCoalitions:(id)arg1 ;
-(double)getCPUVoucherTimeFromEntry:(id)arg1 ;
-(double)getGPUTimeFromEntry:(id)arg1 ;
-(void)getCoalitionInfo;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)coalitionIDToCoalitionNameMapping;
-(id)buildPLCoalitionDataObject:(coalition_resource_usage*)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3 withDate:(id)arg4 withCoalitionId:(unsigned long long)arg5 ;
-(void)logCoalitionObjectDifference:(id)arg1 ;
-(void)logCoalitionObjectSnapshot:(id)arg1 ;
-(void)setLastCoalitionObjectDictionary:(NSDictionary *)arg1 ;
-(void)setLastDate:(NSDate *)arg1 ;
-(id)buildPLCoalitionDataObjectFromReapedNotification:(id)arg1 ;
-(void)debugCoalitionAgent;
-(void)printCoalitionResourceUsage:(coalition_resource_usage*)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3 ;
-(void)logCoalitionSnapshot:(id)arg1 ;
-(id)filterCoalitionDiffEntries:(id)arg1 ;
-(void)logCoalitionDifference:(id)arg1 ;
-(void)setLastCoalitionDictionary:(NSDictionary *)arg1 ;
-(PLXPCListenerOperatorComposition *)coalitionReapNotification;
-(void)setCoalitionIDToCoalitionNameMapping:(NSMutableDictionary *)arg1 ;
@end

