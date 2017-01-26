/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoHandleValueAddedServiceTransactionsRequest : PBRequest <NSCopying> {

	NSMutableArray* _transactionPassIDs;
	NSMutableArray* _transactionsBytes;

}

@property (nonatomic,retain) NSMutableArray * transactionsBytes;               //@synthesize transactionsBytes=_transactionsBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionPassIDs;              //@synthesize transactionPassIDs=_transactionPassIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)transactionsBytesCount;
-(unsigned long long)transactionPassIDsCount;
-(NSMutableArray *)transactionsBytes;
-(NSMutableArray *)transactionPassIDs;
-(void)addTransactionsBytes:(id)arg1 ;
-(void)addTransactionPassIDs:(id)arg1 ;
-(void)clearTransactionsBytes;
-(id)transactionsBytesAtIndex:(unsigned long long)arg1 ;
-(void)clearTransactionPassIDs;
-(id)transactionPassIDsAtIndex:(unsigned long long)arg1 ;
-(void)setTransactionsBytes:(NSMutableArray *)arg1 ;
-(void)setTransactionPassIDs:(NSMutableArray *)arg1 ;
@end

