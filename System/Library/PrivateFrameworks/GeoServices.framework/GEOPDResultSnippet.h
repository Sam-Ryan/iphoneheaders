/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLatLng, GEOPDRating;

@interface GEOPDResultSnippet : PBCodable <NSCopying> {

	NSString* _category;
	GEOLatLng* _center;
	unsigned _distanceDisplayThreshold;
	NSString* _locationString;
	NSString* _name;
	GEOPDRating* _priceRange;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceRange; 
@property (nonatomic,retain) GEOPDRating * priceRange;                       //@synthesize priceRange=_priceRange - In the implementation block
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationString; 
@property (nonatomic,retain) NSString * locationString;                      //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceDisplayThreshold; 
@property (assign,nonatomic) unsigned distanceDisplayThreshold;              //@synthesize distanceDisplayThreshold=_distanceDisplayThreshold - In the implementation block
+(id)resultSnippetForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCenter;
-(BOOL)hasName;
-(void)setLocationString:(NSString *)arg1 ;
-(void)setPriceRange:(GEOPDRating *)arg1 ;
-(void)setDistanceDisplayThreshold:(unsigned)arg1 ;
-(BOOL)hasCategory;
-(void)setHasDistanceDisplayThreshold:(BOOL)arg1 ;
-(BOOL)hasPriceRange;
-(GEOPDRating *)priceRange;
-(NSString *)locationString;
-(BOOL)hasDistanceDisplayThreshold;
-(BOOL)hasLocationString;
-(unsigned)distanceDisplayThreshold;
@end

