/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <coreduetd/coreduetd-Structs.h>
@class CDD, BrightnessSystemClient, NSMutableDictionary, NSObject;

@interface CDDMitigationMux : NSObject {

	CDD* _cdd;
	BrightnessSystemClient* _blBrightnessRef;
	unsigned _apService;
	unsigned _sgxService;
	unsigned _powerSourceService;
	unsigned _dieTempService;
	NSMutableDictionary* _mitigationCache;
	SCPreferencesRef _preferencesRef;
	NSObject*<OS_dispatch_queue> mitigationQueue;
	NSObject*<OS_dispatch_semaphore> mitigationSem;

}

@property (nonatomic,readonly) CDD * cdd;                                   //@synthesize cdd=_cdd - In the implementation block
@property (readonly) BrightnessSystemClient * blBrightnessRef;              //@synthesize blBrightnessRef=_blBrightnessRef - In the implementation block
@property (readonly) unsigned apService;                                    //@synthesize apService=_apService - In the implementation block
@property (readonly) unsigned sgxService;                                   //@synthesize sgxService=_sgxService - In the implementation block
@property (readonly) unsigned powerSourceService;                           //@synthesize powerSourceService=_powerSourceService - In the implementation block
@property (readonly) unsigned dieTempService;                               //@synthesize dieTempService=_dieTempService - In the implementation block
@property (readonly) NSMutableDictionary * mitigationCache;                 //@synthesize mitigationCache=_mitigationCache - In the implementation block
@property (readonly) SCPreferencesRef preferencesRef;                       //@synthesize preferencesRef=_preferencesRef - In the implementation block
-(CDD *)cdd;
-(id)initWithCDDinstance:(id)arg1 ;
-(void)dumpLight;
-(unsigned)getMatchingService:(const char*)arg1 key:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned)apService;
-(unsigned)dieTempService;
-(CFNumberRef)newLevel:(int)arg1 toFixedCFnumOfType:(long long)arg2 ;
-(BrightnessSystemClient *)blBrightnessRef;
-(unsigned)powerSourceService;
-(unsigned)sgxService;
-(NSMutableDictionary *)mitigationCache;
-(SCPreferencesRef)preferencesRef;
-(BOOL)controlApMitigation:(id)arg1 level:(int)arg2 error:(id*)arg3 ;
-(BOOL)controlBasebandRadioTechnology:(long long)arg1 powerLevel:(int)arg2 error:(id*)arg3 ;
-(BOOL)controlBacklightLevelPercentage:(int)arg1 error:(id*)arg2 ;
-(BOOL)controlBluetoothPowerEnable:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)controlChargeRate:(int)arg1 error:(id*)arg2 ;
-(BOOL)controlGraphicsMaxUtilization:(int)arg1 error:(id*)arg2 ;
-(id)cacheForClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setCacheForClientId:(unsigned long long)arg1 mitigationType:(long long)arg2 mitigationDictionary:(id)arg3 error:(id*)arg4 ;
-(BOOL)flushCacheforClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)shouldApplyMitigationCheck:(unsigned long long)arg1 mitigationType:(long long)arg2 mitigationSubType:(id)arg3 mitigationValue:(id)arg4 mitigationResult:(id*)arg5 ;
-(BOOL)controlRadiosPWRModeEnable:(BOOL)arg1 error:(id*)arg2 ;
-(void)dumpAll;
@end

