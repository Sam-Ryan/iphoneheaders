/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {

	unsigned long long _bounceNo;
	NSData* _encryptedBasename;
	NSString* _etag;
	NSString* _extension;
	NSString* _recordID;
	NSData* _recordProtectionInfo;
	NSString* _zoneName;
	NSData* _zoneProtectionInfo;
	SCD_Struct_BR1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedBasename; 
@property (nonatomic,retain) NSData * encryptedBasename;                  //@synthesize encryptedBasename=_encryptedBasename - In the implementation block
@property (assign,nonatomic) BOOL hasBounceNo; 
@property (assign,nonatomic) unsigned long long bounceNo;                 //@synthesize bounceNo=_bounceNo - In the implementation block
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) NSString * extension;                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfo; 
@property (nonatomic,retain) NSData * recordProtectionInfo;               //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                         //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfo; 
@property (nonatomic,retain) NSData * zoneProtectionInfo;                 //@synthesize zoneProtectionInfo=_zoneProtectionInfo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)extension;
-(void)setExtension:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(BOOL)hasRecordID;
-(void)setEncryptedBasename:(NSData *)arg1 ;
-(void)setRecordProtectionInfo:(NSData *)arg1 ;
-(void)setZoneProtectionInfo:(NSData *)arg1 ;
-(BOOL)hasEncryptedBasename;
-(void)setBounceNo:(unsigned long long)arg1 ;
-(void)setHasBounceNo:(BOOL)arg1 ;
-(BOOL)hasBounceNo;
-(BOOL)hasExtension;
-(BOOL)hasRecordProtectionInfo;
-(BOOL)hasZoneName;
-(BOOL)hasZoneProtectionInfo;
-(NSData *)encryptedBasename;
-(unsigned long long)bounceNo;
-(NSData *)recordProtectionInfo;
-(NSData *)zoneProtectionInfo;
-(NSString *)zoneName;
@end

