/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _DKUserIsCurrentlyAsleepMonitor : _DKMonitor {

	int notifyToken;
	NSObject*<OS_dispatch_source> _is_asleep_timer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> is_asleep_timer;              //@synthesize is_asleep_timer=_is_asleep_timer - In the implementation block
+(id)eventStream;
+(id)currentSleepEventWithValue:(id)arg1 ;
+(id)currentlyAwakeEvent;
+(BOOL)isUsualSleepStartTime:(id)arg1 ;
+(id)currentlySleepingEvent;
-(void)setIs_asleep_timer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setTimerToEvaluateSleepState;
-(NSObject*<OS_dispatch_source>)is_asleep_timer;
-(void)stop;
-(void)start;
@end

