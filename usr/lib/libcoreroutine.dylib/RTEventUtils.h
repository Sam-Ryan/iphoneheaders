/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, NSObject;

@interface RTEventUtils : NSObject {

	BOOL _accessToEventsGranted;
	EKEventStore* _eventStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) EKEventStore * eventStore;                       //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL accessToEventsGranted;                      //@synthesize accessToEventsGranted=_accessToEventsGranted - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccessToEventsGranted:(BOOL)arg1 ;
-(BOOL)addEventWithTitle:(id)arg1 locationDescription:(id)arg2 location:(id)arg3 startDate:(id)arg4 andEndDate:(id)arg5 ;
-(id)getEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(BOOL)addEventWithTitle:(id)arg1 locationDescription:(id)arg2 startDate:(id)arg3 andEndDate:(id)arg4 ;
-(BOOL)removeEventsWithTitle:(id)arg1 locationDescription:(id)arg2 startDate:(id)arg3 andEndDate:(id)arg4 ;
-(BOOL)accessToEventsGranted;
@end

