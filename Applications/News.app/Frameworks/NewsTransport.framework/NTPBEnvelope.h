/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBEnvelope : PBCodable <NSCopying> {

	NSData* _content;
	int _contentType;
	int _contentTypeMinorVersion;
	int _contentTypePatchVersion;
	int _contentTypeVersion;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) int contentTypeVersion;                       //@synthesize contentTypeVersion=_contentTypeVersion - In the implementation block
@property (assign,nonatomic) int contentType;                              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSData * content;                             //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) BOOL hasContentTypeMinorVersion; 
@property (assign,nonatomic) int contentTypeMinorVersion;                  //@synthesize contentTypeMinorVersion=_contentTypeMinorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasContentTypePatchVersion; 
@property (assign,nonatomic) int contentTypePatchVersion;                  //@synthesize contentTypePatchVersion=_contentTypePatchVersion - In the implementation block
-(void)setContentTypeMinorVersion:(int)arg1 ;
-(void)setHasContentTypeMinorVersion:(BOOL)arg1 ;
-(BOOL)hasContentTypeMinorVersion;
-(void)setContentTypePatchVersion:(int)arg1 ;
-(void)setHasContentTypePatchVersion:(BOOL)arg1 ;
-(BOOL)hasContentTypePatchVersion;
-(int)contentTypeVersion;
-(void)setContentTypeVersion:(int)arg1 ;
-(int)contentTypeMinorVersion;
-(int)contentTypePatchVersion;
-(void)setContentType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)contentType;
-(NSData *)content;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setContent:(NSData *)arg1 ;
@end

