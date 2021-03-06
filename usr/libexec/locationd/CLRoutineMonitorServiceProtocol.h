/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLRoutineMonitorServiceProtocol <CLIntersiloServiceProtocol>
@required
-(void)startMonitoringVisitsForClient:(byref id)arg1;
-(void)stopMonitoringVisitsForClient:(byref id)arg1;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchRoutineModeFromLocation:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(/*^block*/id)arg2;

@end

