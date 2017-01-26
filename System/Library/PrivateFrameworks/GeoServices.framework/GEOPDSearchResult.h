/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOMapRegion;

@interface GEOPDSearchResult : PBCodable <NSCopying> {

	NSMutableArray* _disambiguationLabels;
	GEOMapRegion* _displayMapRegion;
	BOOL _isChainResultSet;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;                    //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * disambiguationLabels;              //@synthesize disambiguationLabels=_disambiguationLabels - In the implementation block
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet;                              //@synthesize isChainResultSet=_isChainResultSet - In the implementation block
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
-(BOOL)isChainResultSet;
-(void)addDisambiguationLabel:(id)arg1 ;
-(BOOL)hasIsChainResultSet;
-(unsigned long long)disambiguationLabelsCount;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(void)clearDisambiguationLabels;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(GEOMapRegion *)displayMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(NSMutableArray *)disambiguationLabels;
@end
