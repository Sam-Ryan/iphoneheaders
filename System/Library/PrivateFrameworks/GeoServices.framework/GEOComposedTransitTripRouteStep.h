/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@protocol GEOTransitLine, GEOTransitSystem;
@class NSArray, GEOPBTransitStop, GEOTransitVehicleInfo, GEOComposedTransitTripRouteLeg, NSTimeZone, NSDate;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {

	NSArray* _departureTimes;
	NSArray* _arrivalTimes;
	double _departureTimeIntervalMin;
	double _departureTimeIntervalMax;
	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	GEOTransitVehicleInfo* _transitVehicle;
	id<GEOTransitLine> _transitLine;
	id<GEOTransitSystem> _transitSystem;
	NSArray* _routeLineArtwork;
	BOOL _isRail;
	BOOL _isBus;
	BOOL _canPreloadTiles;

}

@property (nonatomic,readonly) GEOComposedTransitTripRouteLeg * tripLeg; 
@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSTimeZone * arrivalTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSDate * arrivalTime; 
@property (nonatomic,readonly) NSArray * departureTimes;                              //@synthesize departureTimes=_departureTimes - In the implementation block
@property (nonatomic,readonly) NSArray * arrivalTimes;                                //@synthesize arrivalTimes=_arrivalTimes - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMin;                       //@synthesize departureTimeIntervalMin=_departureTimeIntervalMin - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMax;                       //@synthesize departureTimeIntervalMax=_departureTimeIntervalMax - In the implementation block
@property (nonatomic,readonly) GEOTransitVehicleInfo * transitVehicle;                //@synthesize transitVehicle=_transitVehicle - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLine> transitLine;                        //@synthesize transitLine=_transitLine - In the implementation block
@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem;                    //@synthesize transitSystem=_transitSystem - In the implementation block
@property (nonatomic,readonly) NSArray * routeLineArtwork;                            //@synthesize routeLineArtwork=_routeLineArtwork - In the implementation block
@property (nonatomic,readonly) BOOL isRail;                                           //@synthesize isRail=_isRail - In the implementation block
@property (nonatomic,readonly) BOOL isBus;                                            //@synthesize isBus=_isBus - In the implementation block
@property (nonatomic,readonly) BOOL canPreloadTilesForThisStep; 
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(NSDate *)departureTime;
-(BOOL)hasDuration;
-(id)destinationStop;
-(id)originStop;
-(NSTimeZone *)arrivalTimeZone;
-(id<GEOTransitLine>)transitLine;
-(NSTimeZone *)departureTimeZone;
-(GEOTransitVehicleInfo *)transitVehicle;
-(NSDate *)arrivalTime;
-(BOOL)isRail;
-(NSArray *)routeLineArtwork;
-(id<GEOTransitSystem>)transitSystem;
-(NSArray *)arrivalTimes;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(NSArray *)departureTimes;
-(BOOL)canPreloadTilesForThisStep;
-(BOOL)isBus;
-(double)departureTimeIntervalMax;
-(GEOComposedTransitTripRouteLeg *)tripLeg;
-(double)departureTimeIntervalMin;
@end

