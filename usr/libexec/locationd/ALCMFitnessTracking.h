/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ALCMFitnessTracking : PBCodable <NSCopying> {

	int _powerSource;
	BOOL _fitnessTrackingEnabled;
	SCD_Struct_AL1 _has;

}

@property (assign,nonatomic) BOOL fitnessTrackingEnabled;              //@synthesize fitnessTrackingEnabled=_fitnessTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPowerSource; 
@property (assign,nonatomic) int powerSource;                          //@synthesize powerSource=_powerSource - In the implementation block
-(void)setFitnessTrackingEnabled:(BOOL)arg1 ;
-(void)setHasPowerSource:(BOOL)arg1 ;
-(BOOL)hasPowerSource;
-(BOOL)fitnessTrackingEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)powerSource;
-(void)setPowerSource:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
