/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLine.h>

@protocol GEOTransitSystem;
@class NSString, NSArray, GEOPBTransitLine, GEOStyleAttributes;

@interface _GEOTransitLine : NSObject <GEOTransitLine> {

	GEOPBTransitLine* _line;
	id<GEOTransitSystem> _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)muid;
-(GEOStyleAttributes *)styleAttributes;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(BOOL)showVehicleNumber;
-(BOOL)departuresAreVehicleSpecific;
-(id)initWithLine:(id)arg1 system:(id)arg2 ;
-(NSString *)lineColorString;
-(BOOL)hasLineColorString;
-(unsigned long long)departureTimeDisplayStyle;
-(id<GEOTransitSystem>)system;
@end

