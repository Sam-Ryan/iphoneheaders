/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CRMeta, NSData;

@interface CRAppCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _appLocations;
	CRMeta* _meta;
	NSData* _signature;

}

@property (nonatomic,retain) CRMeta * meta;                              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * appLocations;              //@synthesize appLocations=_appLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
-(unsigned long long)appLocationsCount;
-(void)addAppLocation:(id)arg1 ;
-(NSMutableArray *)appLocations;
-(void)setAppLocations:(NSMutableArray *)arg1 ;
-(void)clearAppLocations;
-(id)appLocationAtIndex:(unsigned long long)arg1 ;
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

