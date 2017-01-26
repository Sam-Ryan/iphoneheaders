/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _name;
	NSMutableArray* _packets;
	SCD_Struct_MR1 _has;

}

@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) unsigned long long name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * packets;              //@synthesize packets=_packets - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(unsigned long long)arg1 ;
-(unsigned long long)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)addPackets:(id)arg1 ;
-(unsigned long long)packetsCount;
-(void)clearPackets;
-(id)packetsAtIndex:(unsigned long long)arg1 ;
-(void)setHasName:(BOOL)arg1 ;
-(NSMutableArray *)packets;
-(void)setPackets:(NSMutableArray *)arg1 ;
@end

