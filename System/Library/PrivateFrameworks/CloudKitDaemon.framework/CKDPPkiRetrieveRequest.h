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

@class NSMutableArray;

@interface CKDPPkiRetrieveRequest : PBRequest <NSCopying> {

	NSMutableArray* _userIds;

}

@property (nonatomic,retain) NSMutableArray * userIds;              //@synthesize userIds=_userIds - In the implementation block
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
-(void)addUserId:(id)arg1 ;
-(unsigned long long)userIdsCount;
-(void)clearUserIds;
-(id)userIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)userIds;
-(void)setUserIds:(NSMutableArray *)arg1 ;
@end

