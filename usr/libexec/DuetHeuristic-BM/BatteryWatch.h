/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:07 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/DuetHeuristic-BM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession, CDBudget, NSDate;

@interface BatteryWatch : NSObject {

	NSObject*<OS_dispatch_queue> batteryWatchQueue;
	CDSession* duetSes;
	CDBudget* notificationDelivered;
	unsigned long long batteryNotified;
	double batteryWatchThreshold;
	double batteryNotificationThreshold;
	double batteryTargetTime;
	double lastFullness;
	double drainRate;
	NSDate* lastReceived;

}
-(void)loadOperatingParameters:(id)arg1 classConfig:(id)arg2 productConfig:(id)arg3 ;
-(void)watchBatteryOnState:(long long)arg1 current:(long long)arg2 connected:(BOOL)arg3 ;
-(id)init:(id)arg1 ;
@end

