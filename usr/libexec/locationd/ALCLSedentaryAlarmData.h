/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ALCLSedentaryAlarmData : PBCodable <NSCopying> {

	double _firedTime;
	double _timestamp;
	int _type;
	BOOL _didWake;
	BOOL _regularEntry;
	SCD_Struct_AL1 _has;

}

@property (assign,nonatomic) double firedTime;               //@synthesize firedTime=_firedTime - In the implementation block
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL didWake;                   //@synthesize didWake=_didWake - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL regularEntry;              //@synthesize regularEntry=_regularEntry - In the implementation block
-(BOOL)regularEntry;
-(void)setRegularEntry:(BOOL)arg1 ;
-(double)firedTime;
-(void)setFiredTime:(double)arg1 ;
-(void)setDidWake:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)didWake;
@end

