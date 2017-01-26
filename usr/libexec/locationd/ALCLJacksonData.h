/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ALCLJacksonData : PBCodable <NSCopying> {

	unsigned _fPal;
	float _lsest;
	unsigned _nPairs;
	float _sumest;
	SCD_Struct_AL4 _has;

}

@property (assign,nonatomic) unsigned nPairs;              //@synthesize nPairs=_nPairs - In the implementation block
@property (assign,nonatomic) BOOL hasLsest; 
@property (assign,nonatomic) float lsest;                  //@synthesize lsest=_lsest - In the implementation block
@property (assign,nonatomic) BOOL hasSumest; 
@property (assign,nonatomic) float sumest;                 //@synthesize sumest=_sumest - In the implementation block
@property (assign,nonatomic) BOOL hasFPal; 
@property (assign,nonatomic) unsigned fPal;                //@synthesize fPal=_fPal - In the implementation block
-(void)setNPairs:(unsigned)arg1 ;
-(void)setLsest:(float)arg1 ;
-(void)setSumest:(float)arg1 ;
-(void)setFPal:(unsigned)arg1 ;
-(void)setHasLsest:(BOOL)arg1 ;
-(BOOL)hasLsest;
-(void)setHasSumest:(BOOL)arg1 ;
-(BOOL)hasSumest;
-(void)setHasFPal:(BOOL)arg1 ;
-(BOOL)hasFPal;
-(unsigned)nPairs;
-(float)lsest;
-(float)sumest;
-(unsigned)fPal;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

