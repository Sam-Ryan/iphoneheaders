/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitRouteDisplayStrings, NSData, NSMutableArray, GEOPBTransitRoutingIncidentMessage;

@interface GEOTransitSuggestedRoute : PBCodable <NSCopying> {

	SCD_Struct_GE1* _routeBadges;
	unsigned _absEndTime;
	unsigned _absStartTime;
	GEOTransitRouteDisplayStrings* _displayStrings;
	unsigned _rank;
	NSData* _routeHandle;
	NSMutableArray* _routePlanningArtworks;
	NSMutableArray* _sectionOptions;
	NSMutableArray* _sections;
	NSMutableArray* _steps;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime;                                                    //@synthesize absStartTime=_absStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime;                                                      //@synthesize absEndTime=_absEndTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                                   //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle;                                                     //@synthesize routeHandle=_routeHandle - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) unsigned rank;                                                            //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * routePlanningArtworks;                                   //@synthesize routePlanningArtworks=_routePlanningArtworks - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayStrings; 
@property (nonatomic,retain) GEOTransitRouteDisplayStrings * displayStrings;                           //@synthesize displayStrings=_displayStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long routeBadgesCount; 
@property (nonatomic,readonly) int* routeBadges; 
@property (nonatomic,retain) NSMutableArray * sectionOptions;                                          //@synthesize sectionOptions=_sectionOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                                //@synthesize sections=_sections - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(void)setRouteHandle:(NSData *)arg1 ;
-(BOOL)hasRouteHandle;
-(NSData *)routeHandle;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(BOOL)hasTransitIncidentMessage;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(unsigned long long)stepsCount;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)clearSteps;
-(NSMutableArray *)routePlanningArtworks;
-(void)addSection:(id)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAbsEndTime;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(BOOL)hasAbsStartTime;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(unsigned)absStartTime;
-(unsigned)absEndTime;
-(void)clearRouteBadges;
-(unsigned long long)routePlanningArtworksCount;
-(BOOL)hasDisplayStrings;
-(void)clearSectionOptions;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(void)addRoutePlanningArtwork:(id)arg1 ;
-(NSMutableArray *)sectionOptions;
-(int*)routeBadges;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(void)clearRoutePlanningArtworks;
-(void)setRouteBadges:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addRouteBadge:(int)arg1 ;
-(void)setRank:(unsigned)arg1 ;
-(id)stepsAtIndex:(unsigned long long)arg1 ;
-(int)routeBadgeAtIndex:(unsigned long long)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(unsigned long long)routeBadgesCount;
-(void)addSectionOption:(id)arg1 ;
-(void)setSectionOptions:(NSMutableArray *)arg1 ;
-(unsigned)rank;
-(BOOL)hasRank;
-(id)routePlanningArtworkAtIndex:(unsigned long long)arg1 ;
-(void)setRoutePlanningArtworks:(NSMutableArray *)arg1 ;
-(id)sectionOptionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionOptionsCount;
-(void)addSteps:(id)arg1 ;
@end

