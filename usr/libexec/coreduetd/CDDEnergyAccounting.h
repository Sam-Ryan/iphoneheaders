/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CDD, CDDComplicationMapper, NSMutableArray, NSMutableDictionary, NSObject, NSDate, CDAdmissionControlLogWriter, NSString;

@interface CDDEnergyAccounting : NSObject {

	CDD* _cdd;
	CDDComplicationMapper* _complicationMapper;
	NSMutableArray* energyTrack;
	NSMutableDictionary* clientConsumption;
	NSMutableDictionary* clientActivity;
	unsigned long long lastGasGaugeReading;
	NSObject*<OS_dispatch_queue> energyQueue;
	NSObject*<OS_dispatch_source> powerLogReportTimer;
	NSMutableDictionary* pllAcumulator;
	unsigned long long discEnergyConsumed;
	NSMutableDictionary* complicationsEnergyConsumedMap;
	unsigned long long sequenceTracker;
	NSMutableDictionary* seqTracker;
	NSDate* pllLastQuery;
	BOOL plSymbolsFound;
	NSMutableDictionary* cacheChildWeight;
	NSDate* cacheUsedTime;
	CDAdmissionControlLogWriter* _cdAdmissionLog;
	BOOL _initialReadingComplete;
	NSString* _pllReportID;

}

@property (nonatomic,readonly) CDD * cdd;              //@synthesize cdd=_cdd - In the implementation block
-(CDD *)cdd;
-(id)initWithCDDinstance:(id)arg1 ;
-(void)powerlogLiteAccountingRaw;
-(void)updateEnergyUsageRaw;
-(id)lookupChildBundleWeight:(unsigned long long)arg1 attribute:(unsigned long long)arg2 ;
-(BOOL)hasEqualChildWeight:(id)arg1 another:(id)arg2 ;
-(id)eventToDictionary:(id)arg1 ;
-(id)descrambleTicket:(id)arg1 ;
-(void)handleEventStartedRaw:(unsigned long long)arg1 attribute:(unsigned long long)arg2 value:(id)arg3 ;
-(void)accountForConsumption:(unsigned long long)arg1 ;
-(void)handleEventStoppedRaw:(unsigned long long)arg1 attribute:(unsigned long long)arg2 value:(id)arg3 update:(BOOL)arg4 ;
-(unsigned long long)energyBudgetPerDay;
-(unsigned long long)energyReadingStart:(unsigned long long)arg1 attribute:(unsigned long long)arg2 value:(id)arg3 discretionary:(short)arg4 dictionary:(id)arg5 ;
-(unsigned long long)energyReadingStop:(unsigned long long)arg1 attribute:(unsigned long long)arg2 value:(id)arg3 updateType:(short)arg4 updateonly:(BOOL)arg5 meterToken:(unsigned long long)arg6 dictionary:(id)arg7 ;
@end

