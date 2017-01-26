/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_CDBatterySaverProtocol.h>
#import <coreduetd/_DKNotificationReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, _DKKnowledgeStore, NSUserDefaults, NSTimer, NSString;

@interface CDBatterySaverDaemon : NSXPCListener <NSXPCListenerDelegate, _CDBatterySaverProtocol, _DKNotificationReceiver> {

	NSObject*<OS_dispatch_queue> _dataQueue;
	int _enabled;
	double _batteryPercentage;
	BOOL _pluggedIn;
	double _autoDisableThreshold;
	double _allowDiscretionaryThreshold;
	BOOL _autoDisableWhenPluggedIn;
	NSDate* _stateChangeDate;
	double _batteryChargeWhenEnabled;
	BOOL _dippedBelow;
	_DKKnowledgeStore* _historyStore;
	NSUserDefaults* _defaults;
	NSTimer* _timer;
	NSDate* _timerDeadline;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(id)sharedInstance;
+(id)entitlements;
-(void)receiveNotificationEvent:(id)arg1 ;
-(BOOL)shouldDenyDiscretionaryWork:(unsigned long long)arg1 ;
-(id)readDateFromDefaults;
-(BOOL)readStateFromDefaults;
-(void)saveDefaults:(BOOL)arg1 date:(id)arg2 batterylevel:(double)arg3 ;
-(void)updateDiscretionaryMode;
-(void)aggd_generate_report_from:(id)arg1 to:(id)arg2 ;
-(double)getBatteryChargeWhenEnabled;
-(BOOL)getDippedBelow;
-(BOOL)autoDisableCheck;
-(int)toggleState:(BOOL)arg1 withDate:(id)arg2 withBatteryLevel:(double)arg3 ;
-(int)yesterdayMinutesInLPM;
-(void)setupTimer;
-(void)dailyAggdTimer:(id)arg1 ;
-(void)lostModeCheck;
-(void)autoEnableCheck;
-(BOOL)autoDisableBatterySaver;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)inBatterySaverMode;
-(void)setMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)readPreferences;
@end
