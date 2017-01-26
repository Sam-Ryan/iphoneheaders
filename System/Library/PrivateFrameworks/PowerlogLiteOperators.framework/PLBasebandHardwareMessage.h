/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogLiteOperators/PLBasebandMessage.h>

@interface PLBasebandHardwareMessage : PLBasebandMessage {

	PLBasebandHWStatsHeader* _header;
	PLBasebandHWStatsSystem* _system;
	PLBasebandHWStatsARMPerf* _armPerf;
	PLBasebandHWStatsMDSP* _mdsp;
	PLBasebandHWOnOffComponentStats* _mdm;
	PLBasebandHWStatsADSP* _adsp;
	PLBasebandHWOnOffComponentStats* _adm;
	PLBasebandHWOnOffComponentStats* _gps;
	PLBasebandHWOnOffComponentStats* _usb;
	PLBasebandHWStatsUART* _uart;
	PLBasebandHWOnOffComponentStats* _spi;
	PLBasebandHWStatsRXRSSI* _rx;
	PLBasebandHWStatsTXPower* _tx;
	unsigned _duration;

}

@property (assign) unsigned logDuration;                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned revision; 
@property (assign,nonatomic) PLBasebandHWStatsHeader* header;                   //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsSystem* system;                   //@synthesize system=_system - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsARMPerf* armPerf;                 //@synthesize armPerf=_armPerf - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsMDSP* mdsp;                       //@synthesize mdsp=_mdsp - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* mdm;              //@synthesize mdm=_mdm - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsADSP* adsp;                       //@synthesize adsp=_adsp - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* adm;              //@synthesize adm=_adm - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* gps;              //@synthesize gps=_gps - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* usb;              //@synthesize usb=_usb - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsUART* uart;                       //@synthesize uart=_uart - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* spi;              //@synthesize spi=_spi - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsRXRSSI* rx;                       //@synthesize rx=_rx - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsTXPower* tx;                      //@synthesize tx=_tx - In the implementation block
@property (nonatomic,readonly) unsigned level; 
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)level;
-(PLBasebandHWStatsSystem*)system;
-(void)setUsb:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(PLBasebandHWOnOffComponentStats*)usb;
-(void)setSystem:(PLBasebandHWStatsSystem*)arg1 ;
-(void)setRx:(PLBasebandHWStatsRXRSSI*)arg1 ;
-(void)setTx:(PLBasebandHWStatsTXPower*)arg1 ;
-(unsigned)revision;
-(void)setLogDuration:(unsigned)arg1 ;
-(void)logRawWithLogger:(id)arg1 ;
-(void)logHeaderWithLogger:(id)arg1 ;
-(void)logProcessorWithLogger:(id)arg1 ;
-(void)logModemAppWithLogger:(id)arg1 ;
-(void)logPeripheralsWithLogger:(id)arg1 ;
-(void)logRFWithLogger2:(id)arg1 ;
-(PLBasebandHWStatsRXRSSI*)rx;
-(PLBasebandHWStatsTXPower*)tx;
-(unsigned)logDuration;
-(id)convertUint32ArrayToNSArray:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
-(void)logWithLogger:(id)arg1 ;
-(void)setUart:(PLBasebandHWStatsUART*)arg1 ;
-(void)setSpi:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(void)setAdm:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(void)setGps:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(PLBasebandHWOnOffComponentStats*)adm;
-(id)convertUint8ArrayToNSArray:(char*)arg1 ofSize:(unsigned)arg2 ;
-(id)convertUint16ArrayToNSArray:(unsigned short*)arg1 ofSize:(unsigned)arg2 ;
-(void)setMdsp:(PLBasebandHWStatsMDSP*)arg1 ;
-(PLBasebandHWStatsMDSP*)mdsp;
-(PLBasebandHWOnOffComponentStats*)spi;
-(PLBasebandHWStatsUART*)uart;
-(PLBasebandHWOnOffComponentStats*)gps;
-(void)setArmPerf:(PLBasebandHWStatsARMPerf*)arg1 ;
-(void)setMdm:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(PLBasebandHWStatsARMPerf*)armPerf;
-(PLBasebandHWOnOffComponentStats*)mdm;
-(void)setAdsp:(PLBasebandHWStatsADSP*)arg1 ;
-(PLBasebandHWStatsADSP*)adsp;
-(unsigned)sumHardwareStat:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 inString:(id)arg3 ;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 inString:(id)arg3 inReverse:(BOOL)arg4 ;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 withMultiplier:(float)arg3 inString:(id)arg4 inReverse:(BOOL)arg5 ;
-(id)convertToObjectArray:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
-(void)formatOnOffStates:(PLBasebandHWOnOffComponentStats*)arg1 inString:(id)arg2 ;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 withMultiplier:(float)arg3 inString:(id)arg4 ;
-(id)convertUint64ArrayToNSArray:(unsigned long long*)arg1 ofSize:(unsigned)arg2 ;
-(id)convertUint32ArrayToNSArray:(unsigned*)arg1 ofSize:(unsigned)arg2 andFill:(unsigned)arg3 ;
-(id)convertToObjectArrayPercentage:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
-(void)setHeader:(PLBasebandHWStatsHeader*)arg1 ;
-(PLBasebandHWStatsHeader*)header;
@end

