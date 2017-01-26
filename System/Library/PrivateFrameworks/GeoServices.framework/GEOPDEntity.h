/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDEntity : PBCodable <NSCopying> {

	NSMutableArray* _altFaxs;
	NSMutableArray* _altTelephones;
	NSMutableArray* _altUrls;
	NSString* _fax;
	NSMutableArray* _localizedCategorys;
	NSMutableArray* _names;
	NSMutableArray* _spokenNames;
	NSString* _telephone;
	int _type;
	NSString* _url;
	BOOL _isDisputed;
	BOOL _isPermanentlyClosed;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                             //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,retain) NSMutableArray * altTelephones;                   //@synthesize altTelephones=_altTelephones - In the implementation block
@property (nonatomic,readonly) BOOL hasFax; 
@property (nonatomic,retain) NSString * fax;                                   //@synthesize fax=_fax - In the implementation block
@property (nonatomic,retain) NSMutableArray * altFaxs;                         //@synthesize altFaxs=_altFaxs - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableArray * altUrls;                         //@synthesize altUrls=_altUrls - In the implementation block
@property (assign,nonatomic) BOOL hasIsPermanentlyClosed; 
@property (assign,nonatomic) BOOL isPermanentlyClosed;                         //@synthesize isPermanentlyClosed=_isPermanentlyClosed - In the implementation block
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed;                                  //@synthesize isDisputed=_isDisputed - In the implementation block
@property (nonatomic,retain) NSMutableArray * names;                           //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenNames;                     //@synthesize spokenNames=_spokenNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategorys;              //@synthesize localizedCategorys=_localizedCategorys - In the implementation block
+(id)entityForPlaceData:(id)arg1 ;
-(id)bestLocalizedName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)url;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSString *)telephone;
-(void)setTelephone:(NSString *)arg1 ;
-(BOOL)hasTelephone;
-(void)setIsDisputed:(BOOL)arg1 ;
-(BOOL)isDisputed;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(BOOL)hasIsDisputed;
-(BOOL)hasUrl;
-(void)setAltTelephones:(NSMutableArray *)arg1 ;
-(void)addAltUrl:(id)arg1 ;
-(void)setAltUrls:(NSMutableArray *)arg1 ;
-(id)localizedCategoryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)spokenNames;
-(NSMutableArray *)altTelephones;
-(unsigned long long)localizedCategorysCount;
-(void)addLocalizedCategory:(id)arg1 ;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)names;
-(void)clearNames;
-(void)setFax:(NSString *)arg1 ;
-(void)setHasIsPermanentlyClosed:(BOOL)arg1 ;
-(void)clearAltTelephones;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)clearLocalizedCategorys;
-(BOOL)hasIsPermanentlyClosed;
-(NSMutableArray *)altUrls;
-(void)addSpokenName:(id)arg1 ;
-(void)setAltFaxs:(NSMutableArray *)arg1 ;
-(void)addAltTelephone:(id)arg1 ;
-(id)spokenNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)altFaxsCount;
-(void)setSpokenNames:(NSMutableArray *)arg1 ;
-(BOOL)isPermanentlyClosed;
-(id)altTelephoneAtIndex:(unsigned long long)arg1 ;
-(void)setIsPermanentlyClosed:(BOOL)arg1 ;
-(unsigned long long)spokenNamesCount;
-(void)clearAltUrls;
-(void)clearAltFaxs;
-(BOOL)hasFax;
-(NSMutableArray *)altFaxs;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(void)addAltFax:(id)arg1 ;
-(id)altUrlAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)altTelephonesCount;
-(id)altFaxAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedCategorys;
-(unsigned long long)altUrlsCount;
-(NSString *)fax;
-(void)clearSpokenNames;
-(void)addName:(id)arg1 ;
-(unsigned long long)namesCount;
@end

