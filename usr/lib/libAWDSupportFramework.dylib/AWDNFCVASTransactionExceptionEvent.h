/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCVASTransactionExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _commandType;
	unsigned _swStatus;
	NSData* _uuidReference;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCommandType; 
@property (assign,nonatomic) unsigned commandType;                      //@synthesize commandType=_commandType - In the implementation block
@property (assign,nonatomic) BOOL hasSwStatus; 
@property (assign,nonatomic) unsigned swStatus;                         //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setSwStatus:(unsigned)arg1 ;
-(void)setHasSwStatus:(BOOL)arg1 ;
-(BOOL)hasSwStatus;
-(unsigned)swStatus;
-(void)setCommandType:(unsigned)arg1 ;
-(void)setHasCommandType:(BOOL)arg1 ;
-(BOOL)hasCommandType;
-(unsigned)commandType;
@end

