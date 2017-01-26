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

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {

	NSString* _environmentDisplayName;
	NSString* _environmentReleaseName;
	NSMutableArray* _urls;

}

@property (nonatomic,readonly) BOOL hasEnvironmentDisplayName; 
@property (nonatomic,retain) NSString * environmentDisplayName;              //@synthesize environmentDisplayName=_environmentDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL hasEnvironmentReleaseName; 
@property (nonatomic,retain) NSString * environmentReleaseName;              //@synthesize environmentReleaseName=_environmentReleaseName - In the implementation block
@property (nonatomic,retain) NSMutableArray * urls;                          //@synthesize urls=_urls - In the implementation block
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
-(void)setEnvironmentReleaseName:(NSString *)arg1 ;
-(void)setEnvironmentDisplayName:(NSString *)arg1 ;
-(void)clearUrls;
-(void)addUrl:(id)arg1 ;
-(BOOL)hasEnvironmentDisplayName;
-(NSString *)environmentDisplayName;
-(void)setUrls:(NSMutableArray *)arg1 ;
-(unsigned long long)urlsCount;
-(BOOL)hasEnvironmentReleaseName;
-(NSMutableArray *)urls;
-(NSString *)environmentReleaseName;
-(id)urlAtIndex:(unsigned long long)arg1 ;
@end

