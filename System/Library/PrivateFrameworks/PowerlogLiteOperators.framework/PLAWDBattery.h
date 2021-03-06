/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition;

@interface PLAWDBattery : PLAWDAuxMetrics {

	BOOL _prevDeviceCharging;
	BOOL _prevDisplayON;
	PLEntryNotificationOperatorComposition* _batteryEventCallback;
	PLEntryNotificationOperatorComposition* _displayEventCallback;
	double _prevCapacity;
	double _prevVoltage;
	long long _dispOnOffCnt;
	double _prevDispTimeStamp;
	long long _batterySubmitCnt;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryEventCallback;              //@synthesize batteryEventCallback=_batteryEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * displayEventCallback;              //@synthesize displayEventCallback=_displayEventCallback - In the implementation block
@property (assign) double prevCapacity;                                                        //@synthesize prevCapacity=_prevCapacity - In the implementation block
@property (assign) double prevVoltage;                                                         //@synthesize prevVoltage=_prevVoltage - In the implementation block
@property (assign) BOOL prevDeviceCharging;                                                    //@synthesize prevDeviceCharging=_prevDeviceCharging - In the implementation block
@property (assign) BOOL prevDisplayON;                                                         //@synthesize prevDisplayON=_prevDisplayON - In the implementation block
@property (assign) long long dispOnOffCnt;                                                     //@synthesize dispOnOffCnt=_dispOnOffCnt - In the implementation block
@property (assign) double prevDispTimeStamp;                                                   //@synthesize prevDispTimeStamp=_prevDispTimeStamp - In the implementation block
@property (assign) long long batterySubmitCnt;                                                 //@synthesize batterySubmitCnt=_batterySubmitCnt - In the implementation block
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitionAwdBattery;
-(void)handleBatteryCallback:(id)arg1 ;
-(void)handleDisplayCallback:(id)arg1 ;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)initBatteryStats;
-(void)setBatteryEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setDisplayEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setBatterySubmitCnt:(long long)arg1 ;
-(void)setPrevDisplayON:(BOOL)arg1 ;
-(void)setDispOnOffCnt:(long long)arg1 ;
-(void)setPrevDispTimeStamp:(double)arg1 ;
-(void)setPrevCapacity:(double)arg1 ;
-(void)setPrevVoltage:(double)arg1 ;
-(void)setPrevDeviceCharging:(BOOL)arg1 ;
-(void)resetBatteryTable;
-(BOOL)isDeviceCharging:(id)arg1 ;
-(BOOL)prevDeviceCharging;
-(double)prevVoltage;
-(double)prevCapacity;
-(BOOL)prevDisplayON;
-(double)prevDispTimeStamp;
-(long long)dispOnOffCnt;
-(void)addEntryToBatteryTable:(id)arg1 withValue:(double)arg2 ;
-(void)processEnergyConsumedAndAddEntry:(double)arg1 withVoltage:(double)arg2 ;
-(void)finalizeBatteryTable;
-(long long)batterySubmitCnt;
-(void)reInitBatteryStats;
-(PLEntryNotificationOperatorComposition *)batteryEventCallback;
-(PLEntryNotificationOperatorComposition *)displayEventCallback;
@end

