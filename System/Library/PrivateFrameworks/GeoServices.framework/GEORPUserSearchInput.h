/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteEntry, GEOLatLng, GEOPDPlace, NSString;

@interface GEORPUserSearchInput : PBCodable <NSCopying> {

	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOLatLng* _coordinate;
	int _origin;
	GEOPDPlace* _place;
	NSString* _searchString;
	NSString* _singleLineAddressString;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                 //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) BOOL hasSingleLineAddressString; 
@property (nonatomic,retain) NSString * singleLineAddressString;                      //@synthesize singleLineAddressString=_singleLineAddressString - In the implementation block
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place;                                      //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                                  //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                                              //@synthesize origin=_origin - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSearchString;
-(GEOPDPlace *)place;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)hasCoordinate;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(BOOL)hasAutocompleteEntry;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(BOOL)hasOrigin;
-(BOOL)hasPlace;
-(BOOL)hasSingleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(NSString *)singleLineAddressString;
-(void)setHasOrigin:(BOOL)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(GEOLatLng *)coordinate;
@end

