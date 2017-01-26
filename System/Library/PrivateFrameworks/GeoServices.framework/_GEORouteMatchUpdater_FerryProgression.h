/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_FerryProgression : _GEORouteMatchUpdater {

	GEOComposedRouteStep* _boardStep;
	GEOComposedRouteStep* _alightStep;
	SCD_Struct_GE16 _alightLocationCoordinate;
	double _startProgressionDistanceToDestination;
	unsigned long long _progressionCount;

}
-(void)dealloc;
-(unsigned long long)priority;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)initWithRoute:(id)arg1 tripLeg:(id)arg2 ;
@end

