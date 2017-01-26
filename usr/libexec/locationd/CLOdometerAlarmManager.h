/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLIntersiloService.h>
#import <locationd/CLOdometerAlarmManagerProtocol.h>

@class NSMutableArray, CLOdometerAlarm, NSString;

@interface CLOdometerAlarmManager : CLIntersiloService <CLOdometerAlarmManagerProtocol> {

	NSMutableArray* fAlarms;
	unique_ptr<CLLocationController_Type::Client, std::__1::default_delete<CLLocationController_Type::Client> >* fLocationClient;
	unique_ptr<CLGpsController_Type::Client, std::__1::default_delete<CLGpsController_Type::Client> >* fGpsClient;
	CLOdometerAlarm* currentlyScheduled;
	double lastOdometer;

}

@property (assign,nonatomic) double lastOdometer; 
@property (assign,nonatomic) CLOdometerAlarm * currentlyScheduled; 
@property (nonatomic,readonly) CLOdometerAlarm * firstAlarm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(id)getSilo;
-(CLOdometerAlarm *)firstAlarm;
-(CLOdometerAlarm *)currentlyScheduled;
-(void)setCurrentlyScheduled:(CLOdometerAlarm *)arg1 ;
-(double)lastOdometer;
-(void)handleOdometer:(double)arg1 ;
-(void)setLastOdometer:(double)arg1 ;
-(void)handleLocationData:(const NotificationData*)arg1 ;
-(void)handleOdometerData:(const NotificationData*)arg1 ;
-(void)reset;
-(void)beginService;
-(void)endService;
-(id)initInSilo:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(void)reschedule;
@end
