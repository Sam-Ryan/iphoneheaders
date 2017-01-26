/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPPkiRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _publicKeys;

}

@property (nonatomic,retain) NSMutableArray * publicKeys;              //@synthesize publicKeys=_publicKeys - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addPublicKey:(id)arg1 ;
-(unsigned long long)publicKeysCount;
-(void)clearPublicKeys;
-(id)publicKeyAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)publicKeys;
-(void)setPublicKeys:(NSMutableArray *)arg1 ;
@end

