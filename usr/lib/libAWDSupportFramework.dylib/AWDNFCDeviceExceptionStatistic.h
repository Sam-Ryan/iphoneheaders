/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCDeviceExceptionStatistic : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _hwCount;
	unsigned _mwCount;
	unsigned _pllUnlock;
	unsigned _pllUnlockDuringPMICPowerCycle;
	unsigned _restrictedModeCount;
	unsigned _seRemovedEvt0Count;
	unsigned _seRemovedEvt1Count;
	unsigned _seRemovedEvt2Count;
	unsigned _seRemovedEvt3Count;
	unsigned _seRemovedEvt4Count;
	unsigned _seRemovedEvt5Count;
	NSData* _uuidReference;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                              //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasMwCount; 
@property (assign,nonatomic) unsigned mwCount;                                    //@synthesize mwCount=_mwCount - In the implementation block
@property (assign,nonatomic) BOOL hasHwCount; 
@property (assign,nonatomic) unsigned hwCount;                                    //@synthesize hwCount=_hwCount - In the implementation block
@property (assign,nonatomic) BOOL hasRestrictedModeCount; 
@property (assign,nonatomic) unsigned restrictedModeCount;                        //@synthesize restrictedModeCount=_restrictedModeCount - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt0Count; 
@property (assign,nonatomic) unsigned seRemovedEvt0Count;                         //@synthesize seRemovedEvt0Count=_seRemovedEvt0Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt1Count; 
@property (assign,nonatomic) unsigned seRemovedEvt1Count;                         //@synthesize seRemovedEvt1Count=_seRemovedEvt1Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt2Count; 
@property (assign,nonatomic) unsigned seRemovedEvt2Count;                         //@synthesize seRemovedEvt2Count=_seRemovedEvt2Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt3Count; 
@property (assign,nonatomic) unsigned seRemovedEvt3Count;                         //@synthesize seRemovedEvt3Count=_seRemovedEvt3Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt4Count; 
@property (assign,nonatomic) unsigned seRemovedEvt4Count;                         //@synthesize seRemovedEvt4Count=_seRemovedEvt4Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt5Count; 
@property (assign,nonatomic) unsigned seRemovedEvt5Count;                         //@synthesize seRemovedEvt5Count=_seRemovedEvt5Count - In the implementation block
@property (assign,nonatomic) BOOL hasPllUnlock; 
@property (assign,nonatomic) unsigned pllUnlock;                                  //@synthesize pllUnlock=_pllUnlock - In the implementation block
@property (assign,nonatomic) BOOL hasPllUnlockDuringPMICPowerCycle; 
@property (assign,nonatomic) unsigned pllUnlockDuringPMICPowerCycle;              //@synthesize pllUnlockDuringPMICPowerCycle=_pllUnlockDuringPMICPowerCycle - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setMwCount:(unsigned)arg1 ;
-(void)setHasMwCount:(BOOL)arg1 ;
-(BOOL)hasMwCount;
-(void)setHwCount:(unsigned)arg1 ;
-(void)setHasHwCount:(BOOL)arg1 ;
-(BOOL)hasHwCount;
-(void)setRestrictedModeCount:(unsigned)arg1 ;
-(void)setHasRestrictedModeCount:(BOOL)arg1 ;
-(BOOL)hasRestrictedModeCount;
-(void)setSeRemovedEvt0Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt0Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt0Count;
-(void)setSeRemovedEvt1Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt1Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt1Count;
-(void)setSeRemovedEvt2Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt2Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt2Count;
-(void)setSeRemovedEvt3Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt3Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt3Count;
-(void)setSeRemovedEvt4Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt4Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt4Count;
-(void)setSeRemovedEvt5Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt5Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt5Count;
-(void)setPllUnlock:(unsigned)arg1 ;
-(void)setHasPllUnlock:(BOOL)arg1 ;
-(BOOL)hasPllUnlock;
-(void)setPllUnlockDuringPMICPowerCycle:(unsigned)arg1 ;
-(void)setHasPllUnlockDuringPMICPowerCycle:(BOOL)arg1 ;
-(BOOL)hasPllUnlockDuringPMICPowerCycle;
-(unsigned)mwCount;
-(unsigned)hwCount;
-(unsigned)restrictedModeCount;
-(unsigned)seRemovedEvt0Count;
-(unsigned)seRemovedEvt1Count;
-(unsigned)seRemovedEvt2Count;
-(unsigned)seRemovedEvt3Count;
-(unsigned)seRemovedEvt4Count;
-(unsigned)seRemovedEvt5Count;
-(unsigned)pllUnlock;
-(unsigned)pllUnlockDuringPMICPowerCycle;
@end

