/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;
@class GEOTransitStep, NSArray, GEOInstructionSet, GEOPBTransitStop, NSString;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {

	int _maneuver;
	unsigned _startTime;
	unsigned _duration;
	GEOTransitStep* _transitStep;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
	NSArray* _steppingArtwork;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;

}

@property (nonatomic,readonly) int maneuver;                                                                  //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * previousTransitStep; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * nextTransitStep; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * originStop; 
@property (nonatomic,readonly) GEOPBTransitStop * destinationStop; 
@property (nonatomic,readonly) GEOTransitStep * transitStep;                                                  //@synthesize transitStep=_transitStep - In the implementation block
@property (nonatomic,readonly) unsigned long long originTransitEntityMuid; 
@property (nonatomic,readonly) unsigned long long destinationTransitEntityMuid; 
@property (nonatomic,readonly) NSString * originStopIntermediateListName; 
@property (nonatomic,readonly) NSString * destinationStopIntermediateListName; 
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(unsigned)startTime;
-(unsigned)distance;
-(GEOInstructionSet *)instructions;
-(BOOL)hasDuration;
-(int)maneuver;
-(void)_populateIncidentsWithDecoderData:(id)arg1 ;
-(id)previousStop;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(GEOPBTransitStop *)destinationStop;
-(id)_intermediateListNameForStop:(id)arg1 ;
-(NSString *)destinationStopIntermediateListName;
-(id)routeDetailsPrimaryArtwork;
-(id)startingStop;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id)previousAlightingStep;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id)previousBoardingStep;
-(SCD_Struct_GE16)endGeoCoordinate;
-(id)nextAlightingStep;
-(unsigned long long)destinationTransitEntityMuid;
-(unsigned long long)_muidForStop:(id)arg1 ;
-(id)nextBoardingStep;
-(id)endingStop;
-(id)nextStop;
-(GEOPBTransitStop *)originStop;
-(unsigned long long)originTransitEntityMuid;
-(GEOTransitStep *)transitStep;
-(void)_populateArtworksWithDecoderData:(id)arg1 ;
-(NSString *)originStopIntermediateListName;
-(GEOComposedTransitRouteStep *)nextTransitStep;
-(GEOComposedTransitRouteStep *)previousTransitStep;
-(id)routeDetailsSecondaryArtwork;
-(id)_largestEntityAtStop:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)steppingArtwork;
-(SCD_Struct_GE16)startGeoCoordinate;
@end

