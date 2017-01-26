/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE88* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	NSString* _baseURL;
	int _checksumType;
	NSMutableArray* _countryRegionWhitelists;
	NSString* _localizationURL;
	int _scale;
	NSMutableArray* _sentinelTiles;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	unsigned _timeToLiveSeconds;
	int _updateBehavior;
	unsigned _version;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) int style;                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned version;                                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                            //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* availableTiles; 
@property (nonatomic,retain) NSMutableArray * sentinelTiles;                        //@synthesize sentinelTiles=_sentinelTiles - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                            //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;                   //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior;                                    //@synthesize updateBehavior=_updateBehavior - In the implementation block
@property (nonatomic,retain) NSMutableArray * countryRegionWhitelists;              //@synthesize countryRegionWhitelists=_countryRegionWhitelists - In the implementation block
@property (assign,nonatomic) BOOL hasChecksumType; 
@property (assign,nonatomic) int checksumType;                                      //@synthesize checksumType=_checksumType - In the implementation block
+(id)buildDisputedBordersQueryStringForCountry:(id)arg1 region:(id)arg2 ;
-(unsigned)maximumZoomLevelInRect:(SCD_Struct_GE56)arg1 ;
-(id)disputedBordersQueryStringForCountry:(id)arg1 region:(id)arg2 ;
-(void)_resetBestLanguage;
-(BOOL)isDisputedBordersWhitelistedForCountry:(id)arg1 region:(id)arg2 ;
-(id)dataForGenericTileType:(int)arg1 configuration:(id)arg2 ;
-(id)_bestLanguageWithOverrideLocale:(id)arg1 ;
-(unsigned)largestZoomLevelLEQ:(unsigned)arg1 inRect:(SCD_Struct_GE56)arg2 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)isEquivalentTileSet:(id)arg1 ;
-(unsigned)maximumZoomLevelForMapPoint:(SCD_Struct_GE16)arg1 ;
-(unsigned)minimumZoomLevelInRect:(SCD_Struct_GE56)arg1 ;
-(id)_bestCountryRegionWhitelistMatchForCountry:(id)arg1 region:(id)arg2 ;
-(int)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setScale:(int)arg1 ;
-(int)scale;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)baseURL;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasUpdateBehavior:(BOOL)arg1 ;
-(NSMutableArray *)countryRegionWhitelists;
-(void)clearSupportedLanguages;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setChecksumType:(int)arg1 ;
-(NSString *)localizationURL;
-(int)checksumType;
-(NSMutableArray *)supportedLanguages;
-(void)clearCountryRegionWhitelists;
-(void)setCountryRegionWhitelists:(NSMutableArray *)arg1 ;
-(BOOL)hasLocalizationURL;
-(BOOL)hasChecksumType;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(unsigned long long)countryRegionWhitelistsCount;
-(id)countryRegionWhitelistAtIndex:(unsigned long long)arg1 ;
-(void)setHasChecksumType:(BOOL)arg1 ;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)addCountryRegionWhitelist:(id)arg1 ;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasBaseURL;
-(int)updateBehavior;
-(unsigned long long)supportedLanguagesCount;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(BOOL)hasUpdateBehavior;
-(void)clearAvailableTiles;
-(SCD_Struct_GE88*)availableTiles;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(unsigned)timeToLiveSeconds;
-(void)setAvailableTiles:(SCD_Struct_GE88*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasTimeToLiveSeconds;
-(unsigned long long)availableTilesCount;
-(SCD_Struct_GE88)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(void)addAvailableTiles:(SCD_Struct_GE88)arg1 ;
-(void)setSentinelTiles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sentinelTiles;
-(void)clearSentinelTiles;
-(id)sentinelTileAtIndex:(unsigned long long)arg1 ;
-(void)addSentinelTile:(id)arg1 ;
-(unsigned long long)sentinelTilesCount;
@end

