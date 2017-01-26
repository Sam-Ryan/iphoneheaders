/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, GEOPBTransitIncidentEntityFilter, NSString;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	unsigned long long _affectedMuid;
	int _entityType;
	GEOPBTransitIncidentEntityFilter* _filter;
	SCD_Struct_GE7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (assign,nonatomic) BOOL hasAffectedMuid; 
@property (assign,nonatomic) unsigned long long affectedMuid;                        //@synthesize affectedMuid=_affectedMuid - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) int entityType;                                         //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEOPBTransitIncidentEntityFilter * filter;              //@synthesize filter=_filter - In the implementation block
-(unsigned long long)muid;
-(NSSet *)nextStopIDs;
-(BOOL)hasNextStopIDs;
-(BOOL)affectsSequence:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(GEOPBTransitIncidentEntityFilter *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAffectedMuid;
-(void)setEntityType:(int)arg1 ;
-(unsigned long long)affectedMuid;
-(BOOL)hasFilter;
-(void)setHasAffectedMuid:(BOOL)arg1 ;
-(int)entityType;
-(void)setHasEntityType:(BOOL)arg1 ;
-(void)setAffectedMuid:(unsigned long long)arg1 ;
-(BOOL)hasEntityType;
-(GEOPBTransitIncidentEntityFilter *)filter;
@end

