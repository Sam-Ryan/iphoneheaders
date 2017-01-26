/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:31 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SDURLSessionProxyResponse : PBCodable <NSCopying> {

	NSData* _archiveList;
	unsigned _version;
	SCD_Struct_SD2 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasArchiveList; 
@property (nonatomic,retain) NSData * archiveList;               //@synthesize archiveList=_archiveList - In the implementation block
-(id)_initWithActualResponse:(id)arg1 ;
-(id)_actualResponse;
-(void)setArchiveList:(NSData *)arg1 ;
-(NSData *)archiveList;
-(BOOL)hasArchiveList;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
@end

