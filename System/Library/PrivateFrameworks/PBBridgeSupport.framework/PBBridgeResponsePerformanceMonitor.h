/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary, NSMutableString;

@interface PBBridgeResponsePerformanceMonitor : NSObject {

	NSMutableArray* _measurements;
	NSMutableDictionary* _milestones;
	NSMutableDictionary* _macroActivities;
	NSArray* _remoteMeasurements;
	NSDictionary* _remoteMilestones;
	NSDictionary* _remoteMacroActivities;
	NSMutableString* _logBuffer;

}

@property (nonatomic,readonly) NSMutableArray * measurements;                      //@synthesize measurements=_measurements - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * milestones;                   //@synthesize milestones=_milestones - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * macroActivities;              //@synthesize macroActivities=_macroActivities - In the implementation block
@property (nonatomic,retain) NSArray * remoteMeasurements;                         //@synthesize remoteMeasurements=_remoteMeasurements - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteMilestones;                      //@synthesize remoteMilestones=_remoteMilestones - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteMacroActivities;                 //@synthesize remoteMacroActivities=_remoteMacroActivities - In the implementation block
@property (nonatomic,retain) NSMutableString * logBuffer;                          //@synthesize logBuffer=_logBuffer - In the implementation block
+(id)shareMonitor;
-(NSMutableDictionary *)milestones;
-(void)_logMeasurements;
-(void)_logMacroActivitiesLocal:(BOOL)arg1 ;
-(void)_logMilestones;
-(void)_logLocalMeasurements:(BOOL)arg1 ;
-(void)beginMonitorTransaction;
-(void)endMonitorTransaction;
-(void)addMeasurement:(double)arg1 timeSent:(double)arg2 activityType:(id)arg3 activityIdentifier:(id)arg4 ;
-(void)addMilestone:(double)arg1 activityType:(id)arg2 activityIdentifier:(id)arg3 ;
-(void)beginMacroActivity:(id)arg1 beginTime:(double)arg2 ;
-(double)endMacroActivity:(id)arg1 beginTime:(double)arg2 ;
-(NSMutableDictionary *)macroActivities;
-(NSArray *)remoteMeasurements;
-(void)setRemoteMeasurements:(NSArray *)arg1 ;
-(NSDictionary *)remoteMilestones;
-(void)setRemoteMilestones:(NSDictionary *)arg1 ;
-(NSDictionary *)remoteMacroActivities;
-(void)setRemoteMacroActivities:(NSDictionary *)arg1 ;
-(NSMutableString *)logBuffer;
-(void)setLogBuffer:(NSMutableString *)arg1 ;
-(NSMutableArray *)measurements;
@end

