/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GEODirectionsRequest, GEODirectionsRouteResponse, NSObject;

@interface GEORouteGenerator : NSObject {

	GEODirectionsRequest* _request;
	GEODirectionsRouteResponse* _response;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) GEODirectionsRequest * request;                     //@synthesize request=_request - In the implementation block
@property (nonatomic,retain,readonly) GEODirectionsRouteResponse * response;              //@synthesize response=_response - In the implementation block
+(unsigned long long)routingSharedLibraryCodeVersion;
+(unsigned long long)routingSubgraphDataVersion;
-(void)dealloc;
-(GEODirectionsRequest *)request;
-(GEODirectionsRouteResponse *)response;
-(void)decompressResponse;
-(void)rerouteFromWaypoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 response:(id)arg2 ;
-(id)lookupHubStationOrStopFromMuid:(unsigned long long)arg1 ;
@end

