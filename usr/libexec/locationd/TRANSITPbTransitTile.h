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

@class TRANSITPbLocationFingerprintsV1, TRANSITPbLocationFingerprints;

@interface TRANSITPbTransitTile : PBCodable <NSCopying> {

	double _generationTimeSecs;
	unsigned long long _marketId;
	unsigned long long _securityKey;
	TRANSITPbLocationFingerprintsV1* _dEPRECATEDFingerprints;
	int _expirationAgeSecs;
	TRANSITPbLocationFingerprints* _fingerprints;
	int _tileX;
	int _tileY;
	int _version;
	SCD_Struct_AL2 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasTileX; 
@property (assign,nonatomic) int tileX;                                                             //@synthesize tileX=_tileX - In the implementation block
@property (assign,nonatomic) BOOL hasTileY; 
@property (assign,nonatomic) int tileY;                                                             //@synthesize tileY=_tileY - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityKey; 
@property (assign,nonatomic) unsigned long long securityKey;                                        //@synthesize securityKey=_securityKey - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationTimeSecs; 
@property (assign,nonatomic) double generationTimeSecs;                                             //@synthesize generationTimeSecs=_generationTimeSecs - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationAgeSecs; 
@property (assign,nonatomic) int expirationAgeSecs;                                                 //@synthesize expirationAgeSecs=_expirationAgeSecs - In the implementation block
@property (nonatomic,readonly) BOOL hasDEPRECATEDFingerprints; 
@property (nonatomic,retain) TRANSITPbLocationFingerprintsV1 * dEPRECATEDFingerprints;              //@synthesize dEPRECATEDFingerprints=_dEPRECATEDFingerprints - In the implementation block
@property (nonatomic,readonly) BOOL hasFingerprints; 
@property (nonatomic,retain) TRANSITPbLocationFingerprints * fingerprints;                          //@synthesize fingerprints=_fingerprints - In the implementation block
@property (assign,nonatomic) BOOL hasMarketId; 
@property (assign,nonatomic) unsigned long long marketId;                                           //@synthesize marketId=_marketId - In the implementation block
-(void)setDEPRECATEDFingerprints:(TRANSITPbLocationFingerprintsV1 *)arg1 ;
-(void)setFingerprints:(TRANSITPbLocationFingerprints *)arg1 ;
-(void)setTileX:(int)arg1 ;
-(void)setHasTileX:(BOOL)arg1 ;
-(BOOL)hasTileX;
-(void)setTileY:(int)arg1 ;
-(void)setHasTileY:(BOOL)arg1 ;
-(BOOL)hasTileY;
-(unsigned long long)securityKey;
-(void)setSecurityKey:(unsigned long long)arg1 ;
-(void)setHasSecurityKey:(BOOL)arg1 ;
-(BOOL)hasSecurityKey;
-(void)setGenerationTimeSecs:(double)arg1 ;
-(void)setHasGenerationTimeSecs:(BOOL)arg1 ;
-(BOOL)hasGenerationTimeSecs;
-(void)setExpirationAgeSecs:(int)arg1 ;
-(void)setHasExpirationAgeSecs:(BOOL)arg1 ;
-(BOOL)hasExpirationAgeSecs;
-(BOOL)hasDEPRECATEDFingerprints;
-(BOOL)hasFingerprints;
-(unsigned long long)marketId;
-(void)setMarketId:(unsigned long long)arg1 ;
-(void)setHasMarketId:(BOOL)arg1 ;
-(BOOL)hasMarketId;
-(double)generationTimeSecs;
-(int)expirationAgeSecs;
-(TRANSITPbLocationFingerprintsV1 *)dEPRECATEDFingerprints;
-(TRANSITPbLocationFingerprints *)fingerprints;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(int)tileX;
-(int)tileY;
@end

