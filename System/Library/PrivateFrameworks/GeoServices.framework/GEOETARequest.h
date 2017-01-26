/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOAutomobileOptions, NSMutableArray, GEOETARequestAttributes, GEOWaypoint, GEOWaypointTyped, GEORouteSummaryAttributes, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions;

@interface GEOETARequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	SCD_Struct_GE61 _timepoint;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOAutomobileOptions* _automobileOptions;
	NSMutableArray* _destinationWaypointTypeds;
	NSMutableArray* _destinations;
	unsigned _distanceLimitMeters;
	GEOETARequestAttributes* _etaRequestAttributes;
	GEOWaypoint* _origin;
	GEOWaypointTyped* _originWaypointTyped;
	GEORouteSummaryAttributes* _routeSummaryAttributes;
	NSMutableArray* _serviceTags;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	GEOTransitOptions* _transitOptions;
	int _transportType;
	GEOWalkingOptions* _walkingOptions;
	BOOL _allowPartialResults;
	BOOL _includeDistance;
	BOOL _includeHistoricTravelTime;
	BOOL _isFromAPI;
	BOOL _useLiveTrafficAsFallback;
	SCD_Struct_GE103 _has;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE64 timepoint;                                           //@synthesize timepoint=_timepoint - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOWaypoint * origin;                                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;                                       //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                                      //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasAllowPartialResults; 
@property (assign,nonatomic) BOOL allowPartialResults;                                            //@synthesize allowPartialResults=_allowPartialResults - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeDistance; 
@property (assign,nonatomic) BOOL includeDistance;                                                //@synthesize includeDistance=_includeDistance - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceLimitMeters; 
@property (assign,nonatomic) unsigned distanceLimitMeters;                                        //@synthesize distanceLimitMeters=_distanceLimitMeters - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * originWaypointTyped;                              //@synthesize originWaypointTyped=_originWaypointTyped - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;                          //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                            //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                  //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                                  //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI;                                                      //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaRequestAttributes; 
@property (nonatomic,retain) GEOETARequestAttributes * etaRequestAttributes;                      //@synthesize etaRequestAttributes=_etaRequestAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteSummaryAttributes; 
@property (nonatomic,retain) GEORouteSummaryAttributes * routeSummaryAttributes;                  //@synthesize routeSummaryAttributes=_routeSummaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
-(id)initWithQuickETARequest:(id)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(BOOL)useLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOWaypoint *)origin;
-(void)setOrigin:(GEOWaypoint *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)destinations;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceTags;
-(BOOL)isFromAPI;
-(GEORouteSummaryAttributes *)routeSummaryAttributes;
-(void)addServiceTag:(id)arg1 ;
-(void)clearServiceTags;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)setRouteSummaryAttributes:(GEORouteSummaryAttributes *)arg1 ;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRouteSummaryAttributes;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(BOOL)hasIsFromAPI;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasOrigin;
-(SCD_Struct_GE64)timepoint;
-(void)clearDestinations;
-(void)setEtaRequestAttributes:(GEOETARequestAttributes *)arg1 ;
-(void)setDistanceLimitMeters:(unsigned)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setAllowPartialResults:(BOOL)arg1 ;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(void)setTimepoint:(SCD_Struct_GE64)arg1 ;
-(void)addDestination:(id)arg1 ;
-(unsigned long long)destinationWaypointTypedsCount;
-(NSMutableArray *)destinationWaypointTypeds;
-(void)setHasDistanceLimitMeters:(BOOL)arg1 ;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEtaRequestAttributes;
-(void)setHasAllowPartialResults:(BOOL)arg1 ;
-(BOOL)hasWalkingOptions;
-(GEOWaypointTyped *)originWaypointTyped;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(unsigned long long)destinationsCount;
-(void)clearDestinationWaypointTypeds;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasTransitOptions;
-(id)destinationAtIndex:(unsigned long long)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setOriginWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(unsigned)distanceLimitMeters;
-(BOOL)includeDistance;
-(BOOL)hasIncludeDistance;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(BOOL)allowPartialResults;
-(BOOL)hasAutomobileOptions;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(BOOL)hasAllowPartialResults;
-(GEOETARequestAttributes *)etaRequestAttributes;
-(BOOL)hasTimepoint;
-(void)setIncludeDistance:(BOOL)arg1 ;
-(BOOL)hasDistanceLimitMeters;
-(BOOL)hasOriginWaypointTyped;
-(void)setHasIncludeDistance:(BOOL)arg1 ;
-(GEOWalkingOptions *)walkingOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setDestinations:(NSMutableArray *)arg1 ;
@end

