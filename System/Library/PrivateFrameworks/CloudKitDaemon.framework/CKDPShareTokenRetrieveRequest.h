/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPShareIdentifier, NSData;

@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying> {

	NSString* _routingKey;
	CKDPShareIdentifier* _shareId;
	NSData* _shortTokenHash;

}

@property (nonatomic,readonly) BOOL hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;                      //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                    //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasShareId;
-(BOOL)hasShortTokenHash;
-(CKDPShareIdentifier *)shareId;
-(NSData *)shortTokenHash;
-(BOOL)hasRoutingKey;
@end

