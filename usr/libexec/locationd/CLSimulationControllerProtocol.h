/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSimulationControllerProtocol <CLIntersiloServiceProtocol>
@required
-(void)setSimulationScenarioURL:(id)arg1;
-(void)setSimulationType:(int)arg1;
-(void)setIntermediateLocationDistance:(double)arg1;
-(void)setTravellingSpeed:(double)arg1;
-(void)clearPendingLocations;
-(void)addPendingLocationsArray:(id)arg1;
-(void)startSimulation;
-(void)stopSimulation;
-(void)setRepeatBehavior:(int)arg1;
-(void)setLocationInterval:(double)arg1;
-(void)shutdown;

@end

