/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, SDURLSessionProxyTaskMessage, NSDictionary;

@interface SDURLSessionProxyGetAuthHeadersReply : PBCodable <NSCopying> {

	NSData* _headerData;
	SDURLSessionProxyTaskMessage* _task;
	BOOL _continueLoad;
	SCD_Struct_SD2 _has;

}

@property (setter=_setActualAuthHeaders:,retain) NSDictionary * _actualAuthHeaders; 
@property (nonatomic,readonly) BOOL hasTask; 
@property (nonatomic,retain) SDURLSessionProxyTaskMessage * task;                                //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) BOOL hasHeaderData; 
@property (nonatomic,retain) NSData * headerData;                                                //@synthesize headerData=_headerData - In the implementation block
@property (assign,nonatomic) BOOL hasContinueLoad; 
@property (assign,nonatomic) BOOL continueLoad;                                                  //@synthesize continueLoad=_continueLoad - In the implementation block
-(NSDictionary *)_actualAuthHeaders;
-(void)_setActualAuthHeaders:(id)arg1 ;
-(BOOL)hasTask;
-(void)setContinueLoad:(BOOL)arg1 ;
-(BOOL)continueLoad;
-(BOOL)hasHeaderData;
-(void)setHasContinueLoad:(BOOL)arg1 ;
-(BOOL)hasContinueLoad;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SDURLSessionProxyTaskMessage *)task;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTask:(SDURLSessionProxyTaskMessage *)arg1 ;
-(NSData *)headerData;
-(void)setHeaderData:(NSData *)arg1 ;
@end
