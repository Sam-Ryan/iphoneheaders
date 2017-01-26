/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiProxLeConnectionResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _peerId;
	unsigned _result;
	NSString* _resultString;
	NSString* _sessionId;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerId; 
@property (nonatomic,retain) NSString * peerId;                         //@synthesize peerId=_peerId - In the implementation block
@property (nonatomic,readonly) BOOL hasResultString; 
@property (nonatomic,retain) NSString * resultString;                   //@synthesize resultString=_resultString - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                           //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)result;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)sessionId;
-(BOOL)hasSessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(void)setResult:(unsigned)arg1 ;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasResult;
-(void)setResultString:(NSString *)arg1 ;
-(BOOL)hasResultString;
-(NSString *)resultString;
-(void)setPeerId:(NSString *)arg1 ;
-(BOOL)hasPeerId;
-(NSString *)peerId;
@end

