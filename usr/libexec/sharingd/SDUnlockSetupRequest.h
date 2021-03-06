/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SDUnlockSetupRequest : PBRequest <NSCopying> {

	NSData* _longTermKey;
	unsigned _sessionID;
	unsigned _version;
	SCD_Struct_SD10 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasLongTermKey; 
@property (nonatomic,retain) NSData * longTermKey;               //@synthesize longTermKey=_longTermKey - In the implementation block
-(void)setLongTermKey:(NSData *)arg1 ;
-(BOOL)hasLongTermKey;
-(NSData *)longTermKey;
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
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setSessionID:(unsigned)arg1 ;
-(unsigned)sessionID;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
@end

