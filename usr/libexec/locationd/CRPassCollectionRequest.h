/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CRMeta, NSMutableArray, NSData;

@interface CRPassCollectionRequest : PBRequest <NSCopying> {

	CRMeta* _meta;
	NSMutableArray* _passLocations;
	NSData* _signature;

}

@property (nonatomic,retain) CRMeta * meta;                               //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * passLocations;              //@synthesize passLocations=_passLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
-(void)addPassLocation:(id)arg1 ;
-(NSMutableArray *)passLocations;
-(unsigned long long)passLocationsCount;
-(void)setPassLocations:(NSMutableArray *)arg1 ;
-(void)clearPassLocations;
-(id)passLocationAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setMeta:(CRMeta *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(NSData *)signature;
-(CRMeta *)meta;
@end

