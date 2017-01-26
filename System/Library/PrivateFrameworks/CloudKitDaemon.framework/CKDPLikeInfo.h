/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPLikeInfo : PBCodable <NSCopying> {

	int _likeCount;
	BOOL _likedByCurrentUser;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasLikeCount; 
@property (assign,nonatomic) int likeCount;                           //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) BOOL hasLikedByCurrentUser; 
@property (assign,nonatomic) BOOL likedByCurrentUser;                 //@synthesize likedByCurrentUser=_likedByCurrentUser - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)likeCount;
-(void)setLikeCount:(int)arg1 ;
-(void)setHasLikeCount:(BOOL)arg1 ;
-(BOOL)hasLikeCount;
-(void)setLikedByCurrentUser:(BOOL)arg1 ;
-(void)setHasLikedByCurrentUser:(BOOL)arg1 ;
-(BOOL)hasLikedByCurrentUser;
-(BOOL)likedByCurrentUser;
@end

