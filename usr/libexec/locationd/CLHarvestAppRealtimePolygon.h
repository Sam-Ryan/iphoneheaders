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

@interface CLHarvestAppRealtimePolygon : PBCodable <NSCopying> {

	SCD_Struct_CL8* _latitudes;
	SCD_Struct_CL8* _longitudes;

}

@property (nonatomic,readonly) unsigned long long latitudesCount; 
@property (nonatomic,readonly) double* latitudes; 
@property (nonatomic,readonly) unsigned long long longitudesCount; 
@property (nonatomic,readonly) double* longitudes; 
-(unsigned long long)latitudesCount;
-(void)clearLatitudes;
-(double)latitudeAtIndex:(unsigned long long)arg1 ;
-(void)addLatitude:(double)arg1 ;
-(unsigned long long)longitudesCount;
-(void)clearLongitudes;
-(double)longitudeAtIndex:(unsigned long long)arg1 ;
-(void)addLongitude:(double)arg1 ;
-(double*)latitudes;
-(void)setLatitudes:(double*)arg1 count:(unsigned long long)arg2 ;
-(double*)longitudes;
-(void)setLongitudes:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
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

