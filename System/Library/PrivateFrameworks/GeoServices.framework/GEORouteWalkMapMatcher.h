/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORouteMapMatcher.h>

@interface GEORouteWalkMapMatcher : GEORouteMapMatcher
-(id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4 ;
-(SCD_Struct_GE178)_matchToRouteFromLocation:(id)arg1 trackedLocation:(id)arg2 distanceLeftToSearch:(double)arg3 ;
-(SCD_Struct_GE178)_determineBestMatch:(const SCD_Struct_GE178*)arg1 trackedLocation:(id)arg2 rawLocation:(id)arg3 ;
-(double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned)arg2 previousMatchGood:(BOOL)arg3 ;
@end

