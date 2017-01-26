/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOComposedRoute;


@protocol GEORoutePreloadSession <NSObject>
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (__weak) id<GEORoutePreloadSessionDelegate> delegate; 
@property (assign,nonatomic) unsigned long long networkQuality; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEORoutePreloadSessionDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)stopLoading;
-(GEOComposedRoute *)route;
-(void)setNetworkQuality:(unsigned long long)arg1;
-(void)updateWithRouteMatch:(id)arg1;
-(int)preloadStateForTile:(const GEOTileKey*)arg1;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE16*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
-(unsigned long long)networkQuality;
-(BOOL)loggingEnabled;
-(void)beginLoading;
-(void)preloaderLog:(id)arg1;
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(void)setTraits:(id)arg1;
-(BOOL)fullDebuggingEnabled;

@end

