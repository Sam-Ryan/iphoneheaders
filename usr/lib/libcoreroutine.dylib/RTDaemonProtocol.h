/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTDaemonProtocol <NSObject>
@required
-(void)setRestorationIdentifier:(id)arg1;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
-(void)stopMonitoringForPredictedApplications;
-(void)setRoutineEnabled:(BOOL)arg1;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1;
-(void)fetchBBPluginSupportedWithReply:(/*^block*/id)arg1;
-(void)clearRoutine;
-(void)fetchPredictedConditionsForAction:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchRoutineModeFromLocation:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchLocationOfInterestAtCurrentLocationWithReply:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestAtCachedLocationWithReply:(/*^block*/id)arg1;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1;
-(void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1;
-(void)startMonitoringNextPredictedLocationsOfInterest;
-(void)stopMonitoringNextPredictedLocationsOfInterest;

@end

