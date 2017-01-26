/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDAttribution : PBCodable <NSCopying> {

	NSString* _actionUrlComponent;
	NSMutableArray* _attributionUrls;
	NSString* _externalComponentId;
	NSString* _externalItemId;
	NSString* _vendorId;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId;                           //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId;                     //@synthesize externalItemId=_externalItemId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalComponentId; 
@property (nonatomic,retain) NSString * externalComponentId;                //@synthesize externalComponentId=_externalComponentId - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionUrls;              //@synthesize attributionUrls=_attributionUrls - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent;                 //@synthesize actionUrlComponent=_actionUrlComponent - In the implementation block
+(id)attributionForPlaceDataEncyclopedia:(id)arg1 ;
+(id)attributionForPlaceDataEntity:(id)arg1 ;
+(id)attributionForPlaceDataReview:(id)arg1 ;
+(id)attributionForPlaceDataPhotos:(id)arg1 ;
-(id)_attributionKey;
-(BOOL)_isYelp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)actionUrlComponent;
-(BOOL)hasExternalItemId;
-(BOOL)hasActionUrlComponent;
-(void)clearAttributionUrls;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)setAttributionUrls:(NSMutableArray *)arg1 ;
-(BOOL)hasVendorId;
-(NSString *)externalComponentId;
-(NSString *)externalItemId;
-(NSMutableArray *)attributionUrls;
-(void)addAttributionUrl:(id)arg1 ;
-(NSString *)vendorId;
-(id)attributionUrlAtIndex:(unsigned long long)arg1 ;
-(void)setExternalComponentId:(NSString *)arg1 ;
-(unsigned long long)attributionUrlsCount;
-(BOOL)hasExternalComponentId;
-(void)setActionUrlComponent:(NSString *)arg1 ;
@end

