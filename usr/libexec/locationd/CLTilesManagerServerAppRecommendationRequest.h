/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLTilesManagerServerAppRecommendationRequest : NSObject {

	BOOL _includeRegionalApps;
	float _radiusMeters;
	double _lat;
	double _lon;
	/*^block*/id _handler;
	double _timestamp;

}

@property (assign,nonatomic) double lat;                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lon;                            //@synthesize lon=_lon - In the implementation block
@property (assign,nonatomic) float radiusMeters;                    //@synthesize radiusMeters=_radiusMeters - In the implementation block
@property (assign,nonatomic) BOOL includeRegionalApps;              //@synthesize includeRegionalApps=_includeRegionalApps - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(double)lon;
-(float)radiusMeters;
-(void)setLon:(double)arg1 ;
-(void)setRadiusMeters:(float)arg1 ;
-(void)setIncludeRegionalApps:(BOOL)arg1 ;
-(BOOL)includeRegionalApps;
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(double)lat;
-(void)setLat:(double)arg1 ;
@end

