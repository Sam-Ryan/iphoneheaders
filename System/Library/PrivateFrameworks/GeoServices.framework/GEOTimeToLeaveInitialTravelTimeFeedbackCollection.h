/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeToLeaveInitialTravelTimeFeedbackCollection : PBCodable <NSCopying> {

	int _travelTime;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) int travelTime;                  //@synthesize travelTime=_travelTime - In the implementation block
-(int)bucketValueForTravelTime:(double)arg1 ;
-(id)initWithTravelTime:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTime;
-(int)travelTime;
-(void)setTravelTime:(int)arg1 ;
@end

