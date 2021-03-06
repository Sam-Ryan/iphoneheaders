/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapTransitHall <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@required
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)stationID;

@end

