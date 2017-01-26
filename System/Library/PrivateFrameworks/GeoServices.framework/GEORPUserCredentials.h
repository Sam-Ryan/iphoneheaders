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

@class NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	NSString* _icloudUserMapsAuthToken;
	NSString* _icloudUserPersonId;

}

@property (nonatomic,readonly) BOOL hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId;                   //@synthesize icloudUserPersonId=_icloudUserPersonId - In the implementation block
@property (nonatomic,readonly) BOOL hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken;              //@synthesize icloudUserMapsAuthToken=_icloudUserMapsAuthToken - In the implementation block
+(id)_credentialsForPrimaryICloudAccount;
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
-(NSString *)icloudUserMapsAuthToken;
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(BOOL)hasIcloudUserMapsAuthToken;
-(NSString *)icloudUserPersonId;
-(BOOL)hasIcloudUserPersonId;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
@end

