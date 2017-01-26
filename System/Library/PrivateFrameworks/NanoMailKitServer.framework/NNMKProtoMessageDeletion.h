/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoMessageDeletion : PBCodable <NSCopying> {

	unsigned _deletionState;
	NSString* _messageId;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasDeletionState; 
@property (assign,nonatomic) unsigned deletionState;              //@synthesize deletionState=_deletionState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(BOOL)hasMessageId;
-(void)setDeletionState:(unsigned)arg1 ;
-(void)setHasDeletionState:(BOOL)arg1 ;
-(BOOL)hasDeletionState;
-(unsigned)deletionState;
@end

