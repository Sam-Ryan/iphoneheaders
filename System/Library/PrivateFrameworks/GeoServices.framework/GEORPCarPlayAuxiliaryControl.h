/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCarInfo;

@interface GEORPCarPlayAuxiliaryControl : PBCodable <NSCopying> {

	GEOCarInfo* _carInfo;

}

@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo;              //@synthesize carInfo=_carInfo - In the implementation block
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
-(BOOL)hasCarInfo;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(GEOCarInfo *)carInfo;
@end

