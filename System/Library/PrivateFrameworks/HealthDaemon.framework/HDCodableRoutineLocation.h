/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface HDCodableRoutineLocation : PBCodable <NSCopying> {

	double _confidence;
	double _latitude;
	double _longitude;
	double _uncertainty;
	NSData* _geoData;
	int _locationOfInterestType;
	NSString* _uuid;
	NSMutableArray* _visits;
	SCD_Struct_HD36 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                             //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                            //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) double uncertainty;                          //@synthesize uncertainty=_uncertainty - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasLocationOfInterestType; 
@property (assign,nonatomic) int locationOfInterestType;                  //@synthesize locationOfInterestType=_locationOfInterestType - In the implementation block
@property (nonatomic,readonly) BOOL hasGeoData; 
@property (nonatomic,retain) NSData * geoData;                            //@synthesize geoData=_geoData - In the implementation block
@property (nonatomic,retain) NSMutableArray * visits;                     //@synthesize visits=_visits - In the implementation block
-(id)initWithLocationOfInterest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setLatitude:(double)arg1 ;
-(BOOL)hasLongitude;
-(void)setLongitude:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)hasUuid;
-(double)latitude;
-(double)longitude;
-(void)setGeoData:(NSData *)arg1 ;
-(BOOL)hasGeoData;
-(NSData *)geoData;
-(double)uncertainty;
-(void)setUncertainty:(double)arg1 ;
-(NSMutableArray *)visits;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(int)locationOfInterestType;
-(void)setLocationOfInterestType:(int)arg1 ;
-(void)addVisits:(id)arg1 ;
-(unsigned long long)visitsCount;
-(void)clearVisits;
-(id)visitsAtIndex:(unsigned long long)arg1 ;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(BOOL)hasUncertainty;
-(void)setHasLocationOfInterestType:(BOOL)arg1 ;
-(BOOL)hasLocationOfInterestType;
@end

