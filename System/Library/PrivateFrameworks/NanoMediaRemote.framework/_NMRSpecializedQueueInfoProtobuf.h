/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRSpecializedQueueInfoProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _specializedQueues;

}

@property (nonatomic,retain) NSMutableArray * specializedQueues;              //@synthesize specializedQueues=_specializedQueues - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addSpecializedQueues:(id)arg1 ;
-(NSMutableArray *)specializedQueues;
-(unsigned long long)specializedQueuesCount;
-(void)clearSpecializedQueues;
-(id)specializedQueuesAtIndex:(unsigned long long)arg1 ;
-(void)setSpecializedQueues:(NSMutableArray *)arg1 ;
@end

