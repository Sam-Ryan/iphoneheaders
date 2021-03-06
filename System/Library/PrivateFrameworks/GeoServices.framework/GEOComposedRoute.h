/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@protocol GEOTransitRoutingIncidentMessage, GEOServerFormattedString;
@class NSHashTable, NSData, NSArray, NSString, GEORoute, GEORouteSet, GEOMapRegion, NSMutableArray, GEOZilchDecoder, GEORouteDriveMapMatcher, GEORouteWalkMapMatcher, GEOTransitDecoderData, GEOTransitSuggestedRoute, GEOComposedWaypoint, GEORouteAttributes, GEOStyleAttributes;

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions> {

	NSHashTable* _observers;
	NSData* _pointData;
	BOOL _usesZilch;
	NSArray* _legs;
	NSArray* _steps;
	NSString* _name;
	NSData* _routeID;
	unsigned _expectedTime;
	unsigned _distance;
	NSArray* _trafficIncidents;
	NSArray* _trafficIncidentOffsets;
	GEORoute* _geoRoute;
	GEORouteSet* _routeSet;
	NSArray* _maneuverDisplaySteps;
	BOOL _maneuverDisplayEnabled;
	unsigned long long _currentDisplayStep;
	unsigned _maneuverDisplayCount;
	double* _pointLengths;
	SCD_Struct_GE83* _currentManeuverDisplayEndPoints;
	unsigned long long _selectedLegIndex;
	unsigned _firstVisiblePoint;
	GEOMapRegion* _boundingMapRegion;
	NSMutableArray* _sections;
	NSMutableArray* _snappedPaths;
	GEOZilchDecoder* _zilchDecoder;
	BOOL _allowsNetworkTileLoad;
	GEORouteDriveMapMatcher* _driveMapMatcher;
	GEORouteWalkMapMatcher* _walkMapMatcher;
	GEOTransitDecoderData* _decoderData;
	GEOTransitSuggestedRoute* _suggestedRoute;
	GEOTransitSuggestedRoute* _originalSuggestedRoute;
	NSArray* _routePlanningArtworks;
	id<GEOTransitRoutingIncidentMessage> _transitRoutingIncidentMessage;
	BOOL _shouldShowSchedule;
	NSArray* _rideSelections;
	NSArray* _currentSectionOptions;
	id<GEOServerFormattedString> _previewDurationFormatString;
	id<GEOServerFormattedString> _pickingDurationFormatString;
	id<GEOServerFormattedString> _planningDescriptionFormatString;
	id<GEOServerFormattedString> _serviceGapFormatString;
	id<GEOServerFormattedString> _overviewSubtitleFormatString;
	id<GEOServerFormattedString> _fareErrorMessageFormatString;
	unsigned long long _transitRouteBadge;
	BOOL _hasCheckedIsWalkingOnlyTransitRoute;
	BOOL _isWalkingOnlyTransitRoute;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;

}

@property (nonatomic,retain) NSData * routeID;                                                                         //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) GEORouteSet * routeSet;                                                                   //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) BOOL usesZilch;                                                                         //@synthesize usesZilch=_usesZilch - In the implementation block
@property (assign,nonatomic) GEOComposedWaypoint * origin;                                                             //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) GEOComposedWaypoint * destination;                                                        //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes; 
@property (nonatomic,readonly) BOOL isNavigable; 
@property (nonatomic,readonly) NSData * directionsResponseID; 
@property (nonatomic,readonly) NSArray * steps;                                                                        //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) NSArray * legs;                                                                         //@synthesize legs=_legs - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * advisoryNotices; 
@property (nonatomic,retain) NSArray * trafficIncidents;                                                               //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
@property (nonatomic,retain) NSArray * trafficIncidentOffsets;                                                         //@synthesize trafficIncidentOffsets=_trafficIncidentOffsets - In the implementation block
@property (nonatomic,readonly) void* controlPoints; 
@property (nonatomic,readonly) unsigned long long stepsCount; 
@property (nonatomic,readonly) GEORoute * geoRoute;                                                                    //@synthesize geoRoute=_geoRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                                                    //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) unsigned distance;                                                                      //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL maneuverDisplayEnabled;                                                              //@synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long currentDisplayStep;                                                    //@synthesize currentDisplayStep=_currentDisplayStep - In the implementation block
@property (nonatomic,retain) NSArray * maneuverDisplaySteps;                                                           //@synthesize maneuverDisplaySteps=_maneuverDisplaySteps - In the implementation block
@property (nonatomic,readonly) unsigned maneuverDisplayCount;                                                          //@synthesize maneuverDisplayCount=_maneuverDisplayCount - In the implementation block
@property (assign,nonatomic) unsigned long long selectedLegIndex;                                                      //@synthesize selectedLegIndex=_selectedLegIndex - In the implementation block
@property (assign,nonatomic) unsigned firstVisiblePoint;                                                               //@synthesize firstVisiblePoint=_firstVisiblePoint - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * suggestedRoute;                                                //@synthesize suggestedRoute=_suggestedRoute - In the implementation block
@property (nonatomic,readonly) GEOTransitDecoderData * decoderData;                                                    //@synthesize decoderData=_decoderData - In the implementation block
@property (nonatomic,readonly) GEOTransitSuggestedRoute * originalSuggestedRoute;                                      //@synthesize originalSuggestedRoute=_originalSuggestedRoute - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfSuggestedRoute; 
@property (nonatomic,copy,readonly) NSArray * routePlanningArtworks;                                                   //@synthesize routePlanningArtworks=_routePlanningArtworks - In the implementation block
@property (nonatomic,retain,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;              //@synthesize transitRoutingIncidentMessage=_transitRoutingIncidentMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRideClusters; 
@property (nonatomic,readonly) NSArray * rideSelections;                                                               //@synthesize rideSelections=_rideSelections - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString;                               //@synthesize previewDurationFormatString=_previewDurationFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString;                               //@synthesize pickingDurationFormatString=_pickingDurationFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString;                           //@synthesize planningDescriptionFormatString=_planningDescriptionFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> serviceGapFormatString;                                    //@synthesize serviceGapFormatString=_serviceGapFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> overviewSubtitleFormatString;                              //@synthesize overviewSubtitleFormatString=_overviewSubtitleFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> fareErrorMessageFormatString;                              //@synthesize fareErrorMessageFormatString=_fareErrorMessageFormatString - In the implementation block
@property (nonatomic,readonly) BOOL isWalkingOnlyTransitRoute;                                                         //@synthesize isWalkingOnlyTransitRoute=_isWalkingOnlyTransitRoute - In the implementation block
@property (nonatomic,readonly) unsigned long long transitRouteBadge;                                                   //@synthesize transitRouteBadge=_transitRouteBadge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSchedule;                                                                  //@synthesize shouldShowSchedule=_shouldShowSchedule - In the implementation block
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) NSArray * routeNames; 
@property (nonatomic,readonly) int routeType; 
@property (nonatomic,readonly) NSArray * sections;                                                                     //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;                                                       //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (assign,nonatomic) BOOL allowsNetworkTileLoad;                                                               //@synthesize allowsNetworkTileLoad=_allowsNetworkTileLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGImageRef)_mapKitImage;
-(id)instructionsForStep:(id)arg1 ;
-(id)firstDepartureTimeOfNextRouteStepAfterCurrentStep;
-(id)initWithCompanionRoute:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(GEOComposedWaypoint *)origin;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(NSData *)directionsResponseID;
-(void)setRouteID:(NSData *)arg1 ;
-(NSData *)routeID;
-(int)transportType;
-(GEORouteAttributes *)routeAttributes;
-(GEOStyleAttributes *)styleAttributes;
-(BOOL)isNavigable;
-(GEOTransitDecoderData *)decoderData;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(int)routeType;
-(unsigned long long)trafficColorsCount;
-(unsigned)expectedTime;
-(unsigned)historicTravelTime;
-(unsigned*)trafficColorOffsets;
-(unsigned)distance;
-(NSArray *)routeNames;
-(void)setExpectedTime:(unsigned)arg1 ;
-(NSArray *)advisoryNotices;
-(unsigned long long)stepsCount;
-(NSArray *)steps;
-(unsigned long long)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(unsigned*)trafficColors;
-(BOOL)hasExpectedTime;
-(unsigned long long)trafficColorOffsetsCount;
-(BOOL)hasHistoricTravelTime;
-(void)setRouteSet:(GEORouteSet *)arg1 ;
-(id)initWithSuggestedRoute:(id)arg1 decoderData:(id)arg2 ;
-(BOOL)isSnapping;
-(id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(BOOL)arg5 maxDistance:(double)arg6 ;
-(unsigned long long)legIndexForPointIndex:(unsigned long long)arg1 ;
-(void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4 ;
-(void)clearSnappedPathsForObserver:(id)arg1 ;
-(id)_mapMatcherForTransportType:(int)arg1 ;
-(unsigned long long)legIndexForStepIndex:(unsigned long long)arg1 ;
-(id)getStationForHall:(id)arg1 ;
-(BOOL)allowsNetworkTileLoad;
-(void)clearPoints;
-(id)stepForPointIndex:(unsigned)arg1 ;
-(double)distanceBetweenLocation:(SCD_Struct_GE16)arg1 nextPointIndex:(unsigned)arg2 toPointIndex:(unsigned)arg3 ;
-(SCD_Struct_GE16)pointAtRouteCoordinate:(PolylineCoordinate)arg1 ;
-(id)legForStepIndex:(unsigned long long)arg1 ;
-(void)_rebuildRouteForRideChange;
-(id)routeMatchAtDistance:(double)arg1 from:(id)arg2 trackedLocation:(id)arg3 stopAtEndOfTunnel:(BOOL)arg4 stopAtEndOfManeuver:(BOOL)arg5 date:(id)arg6 ;
-(BOOL)shouldShowSchedule;
-(void)notifyTrafficUpdated;
-(void)setSelectedLegIndex:(unsigned long long)arg1 ;
-(void)setShouldShowSchedule:(BOOL)arg1 ;
-(void)initRideSelections;
-(void)forEachSnappedPath:(/*^block*/id)arg1 ;
-(id)getHallForStop:(id)arg1 ;
-(id)legForPointIndex:(unsigned)arg1 ;
-(BOOL)hasRideClusters;
-(double)distanceBetweenRoutePointIndex:(unsigned)arg1 toPointIndex:(unsigned)arg2 ;
-(id)initWithRoute:(id)arg1 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(SCD_Struct_GE56*)arg3 rectsCount:(unsigned long long)arg4 ;
-(BOOL)isStopInTerminalStructure:(id)arg1 ;
-(BOOL)isWalkingOnlyTransitRoute;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRouteCoordinate:(PolylineCoordinate)arg2 ;
-(void)setupRoadSegmentIdsForRouteHintFromMatch:(id)arg1 distanceAhead:(double)arg2 roadSegmentIdGenerator:(/*^block*/id)arg3 handler:(/*^block*/id)arg4 ;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(NSArray *)routePlanningArtworks;
-(id<GEOServerFormattedString>)serviceGapFormatString;
-(id<GEOServerFormattedString>)overviewSubtitleFormatString;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2 ;
-(id<GEOServerFormattedString>)fareErrorMessageFormatString;
-(void)_populateArtworkForSuggestedRoute:(id)arg1 decoderData:(id)arg2 ;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 ;
-(unsigned long long)transitRouteBadge;
-(id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(BOOL)arg5 ;
-(void)setAllowsNetworkTileLoad:(BOOL)arg1 ;
-(id)getSnappedPathsForVisibleRect:(SCD_Struct_GE56)arg1 rectsToSnap:(SCD_Struct_GE56*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4 ;
-(GEOTransitSuggestedRoute *)suggestedRoute;
-(double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2 ;
-(void)setSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(BOOL)supportsSnapping;
-(GEOTransitSuggestedRoute *)originalSuggestedRoute;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(GEORoute *)geoRoute;
-(PolylineCoordinate)routeCoordinateAtDistance:(double)arg1 beforeRouteCoordinate:(PolylineCoordinate)arg2 ;
-(unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1 ;
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(double)distanceFromPoint:(PolylineCoordinate)arg1 toPoint:(PolylineCoordinate)arg2 ;
-(double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 ;
-(NSArray *)rideSelections;
-(BOOL)checkDrivingArrivalForCoordinate:(SCD_Struct_GE16)arg1 coordinateOnRoute:(SCD_Struct_GE16)arg2 routePointIndex:(unsigned)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(BOOL)arg6 checkDistanceAlongRoute:(BOOL)arg7 checkRoadAccessPoints:(BOOL)arg8 isOnRoute:(BOOL)arg9 ;
-(unsigned long long)_tripIndexForTripLeg:(id)arg1 ;
-(BOOL)usesZilch;
-(id)getSnappedPathsForLocation:(SCD_Struct_GE16)arg1 observer:(id)arg2 ;
-(void)setCurrentDisplayStep:(unsigned long long)arg1 ;
-(unsigned long long)selectedLegIndex;
-(GEOMapRegion *)boundingMapRegion;
-(void)setFirstVisiblePoint:(unsigned)arg1 ;
-(double)distanceBetweenStep:(id)arg1 andStep:(id)arg2 ;
-(PolylineCoordinate)_findRouteCoordinateWithOffset:(float)arg1 aPos:(const Matrix<float, 2, 1>*)arg2 aCoord:(const PolylineCoordinate*)arg3 bCoord:(const PolylineCoordinate*)arg4 pointOnSegment:(const Matrix<float, 2, 1>*)arg5 bounds:(const SCD_Struct_GE56*)arg6 ;
-(double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(unsigned)firstVisiblePoint;
-(SCD_Struct_GE83)maneuverDisplayEndpointsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLocationCoordinate:(SCD_Struct_GE16)arg1 withinDistance:(double)arg2 alongRoute:(double)arg3 withTransportType:(int)arg4 ;
-(void)setTrafficIncidentOffsets:(NSArray *)arg1 ;
-(GEORouteSet *)routeSet;
-(NSArray *)trafficIncidentOffsets;
-(void)_initializeManeuverDisplaySteps;
-(void)setTrafficIncidents:(NSArray *)arg1 ;
-(void)selectRide:(unsigned long long)arg1 forTripLeg:(id)arg2 ;
-(NSArray *)trafficIncidents;
-(unsigned long long)indexOfSuggestedRoute;
-(SCD_Struct_GE16)locationAtDistance:(double)arg1 from:(id)arg2 ;
-(NSArray *)legs;
-(void)selectRide:(unsigned long long)arg1 forBoardStep:(id)arg2 ;
-(void)setIsWalkingOnlyTransitRoute:(BOOL)arg1 ;
-(int)formOfWayAt:(unsigned)arg1 ;
-(double)approximateRoadWidthAtPointIndex:(unsigned)arg1 ;
-(void)_updateSectionOptions;
-(id)boardStepForSection:(id)arg1 ;
-(id)sectionOptionForTripLeg:(id)arg1 ;
-(SCD_Struct_GE16)pointAt:(unsigned long long)arg1 ;
-(void)maneuverDisplayHasChanged;
-(void)_snapPaths:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLegs:(NSArray *)arg1 ;
-(void)setUsesZilch:(BOOL)arg1 ;
-(id)sectionOptionForTripIndex:(unsigned long long)arg1 ;
-(unsigned)maneuverDisplayCount;
-(BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned)arg1 end:(unsigned)arg2 ;
-(id)zilchDataFromStepIndex:(unsigned long long)arg1 ;
-(NSArray *)maneuverDisplaySteps;
-(id)pointData;
-(unsigned)pointCount;
-(void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned)arg3 ;
-(id)_nextOptionForOption:(id)arg1 rideIndex:(unsigned long long)arg2 ;
-(double)courseAtRouteCoordinateIndex:(unsigned)arg1 ;
-(void)_addPaths:(id)arg1 forObserver:(id)arg2 ;
-(void)setPointData:(id)arg1 ;
-(void)setManeuverDisplayEnabled:(BOOL)arg1 ;
-(id)getStationForStop:(id)arg1 ;
-(void)setManeuverDisplaySteps:(NSArray *)arg1 ;
-(BOOL)maneuverDisplayEnabled;
-(unsigned long long)numberOfTransitStops;
-(unsigned long long)currentDisplayStep;
-(BOOL)_needsCornerOffsetAt:(unsigned)arg1 ;
-(int)transportTypeForStep:(id)arg1 ;
-(void)setBoundingMapRegion:(GEOMapRegion *)arg1 ;
-(void*)controlPoints;
@end

