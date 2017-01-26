/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitRoutingIncidentMessage;
@class NSArray, NSMutableArray, GEODirectionsRequest, GEOComposedRoute, NSSet;

@interface GEORouteSet : NSObject {

	NSArray* _waypoints;
	int _mainTransportType;
	NSMutableArray* _pages;
	GEODirectionsRequest* _originalRequest;
	NSMutableArray* _routes;
	NSMutableArray* _routesAndGaps;
	NSMutableArray* _routesAndContingencies;
	GEOComposedRoute* _preferredRoute;
	NSMutableArray* _advisoryNotices;
	NSMutableArray* _incidentsOffRoute;
	id<GEOTransitRoutingIncidentMessage> _transitRoutingIncidentMessage;
	BOOL _transitModePreferencesIgnored;
	NSSet* _supportedTransportTypesForSubsequentRequests;

}

@property (nonatomic,readonly) NSArray * waypoints;                                                             //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) int mainTransportType;                                                           //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                                                //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndContingencies;                                                //@synthesize routesAndContingencies=_routesAndContingencies - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndGaps;                                                         //@synthesize routesAndGaps=_routesAndGaps - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * preferredRoute;                                               //@synthesize preferredRoute=_preferredRoute - In the implementation block
@property (nonatomic,readonly) BOOL transitModePreferencesIgnored;                                              //@synthesize transitModePreferencesIgnored=_transitModePreferencesIgnored - In the implementation block
@property (nonatomic,readonly) BOOL allTransitRoutesBlockedByIncident; 
@property (nonatomic,readonly) NSArray * incidentsOffRoute;                                                     //@synthesize incidentsOffRoute=_incidentsOffRoute - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;              //@synthesize transitRoutingIncidentMessage=_transitRoutingIncidentMessage - In the implementation block
@property (nonatomic,readonly) NSSet * supportedTransportTypesForSubsequentRequests;                            //@synthesize supportedTransportTypesForSubsequentRequests=_supportedTransportTypesForSubsequentRequests - In the implementation block
@property (nonatomic,readonly) GEODirectionsRequest * originalRequest;                                          //@synthesize originalRequest=_originalRequest - In the implementation block
-(void)dealloc;
-(NSArray *)routes;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(int)mainTransportType;
-(NSArray *)waypoints;
-(BOOL)allTransitRoutesBlockedByIncident;
-(NSArray *)routesAndContingencies;
-(NSArray *)routesAndGaps;
-(GEOComposedRoute *)preferredRoute;
-(BOOL)transitModePreferencesIgnored;
-(id)_pageForRoute:(id)arg1 ;
-(NSSet *)supportedTransportTypesForSubsequentRequests;
-(id)responseForRoute:(id)arg1 ;
-(id)routeAttributes:(id)arg1 ;
-(id)initWithWaypoints:(id)arg1 transport:(int)arg2 ;
-(id)styleAttributes:(id)arg1 ;
-(void)_prependNewPage:(id)arg1 ;
-(id)displayHints:(id)arg1 ;
-(id)alternateStartRoutesLookup:(id)arg1 ;
-(void)_appendNewPage:(id)arg1 ;
-(double)requestTime:(id)arg1 ;
-(id)requestForRoute:(id)arg1 ;
-(id)directionsResponseID:(id)arg1 ;
-(unsigned long long)indexOfSuggestedRoute:(id)arg1 ;
-(GEODirectionsRequest *)originalRequest;
-(NSArray *)incidentsOffRoute;
-(void)addRoutesForReroute:(id)arg1 ;
-(id)transitOptions:(id)arg1 ;
-(void)_clearRoutes;
-(void)_clearWeakReferences;
-(BOOL)isNavigable:(id)arg1 ;
-(void)addRoutesForRequest:(id)arg1 response:(id)arg2 ;
@end

