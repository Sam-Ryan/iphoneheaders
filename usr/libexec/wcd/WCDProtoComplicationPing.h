/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:37 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/wcd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <wcd/wcd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WCDProtoComplicationPing : PBCodable <NSCopying> {

	NSString* _communicationID;
	unsigned _version;
	SCD_Struct_WC1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasCommunicationID; 
@property (nonatomic,retain) NSString * communicationID;              //@synthesize communicationID=_communicationID - In the implementation block
-(NSString *)communicationID;
-(void)setCommunicationID:(NSString *)arg1 ;
-(BOOL)hasCommunicationID;
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

