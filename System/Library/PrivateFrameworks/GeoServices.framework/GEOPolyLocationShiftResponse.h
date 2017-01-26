/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE101* _parameters;
	double _radius;
	int _status;

}

@property (assign,nonatomic) int status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long parametersCount; 
@property (nonatomic,readonly) double* parameters; 
@property (assign,nonatomic) double radius;                                     //@synthesize radius=_radius - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double*)parameters;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)radius;
-(unsigned long long)parametersCount;
-(void)addParameters:(double)arg1 ;
-(double)parametersAtIndex:(unsigned long long)arg1 ;
-(void)clearParameters;
-(void)setParameters:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)setRadius:(double)arg1 ;
@end

