/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapTransitNodeBaseImpl.h>
#import <libobjc.A.dylib/GEOMapTransitStop.h>

@protocol GEOMapTransitHall;
@class NSString;

@interface GEOMapTransitStopImpl : GEOMapTransitNodeBaseImpl <GEOMapTransitStop> {

	id<GEOMapTransitHall> _hall;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE56 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE16* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (nonatomic,readonly) unsigned long long hallID; 
-(void)dealloc;
-(id)findHall:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findLinksOut:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findLinksIn:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hallID;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

