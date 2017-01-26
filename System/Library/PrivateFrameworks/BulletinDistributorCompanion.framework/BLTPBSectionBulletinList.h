/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying> {

	NSMutableArray* _bulletinIdentifiers;
	NSString* _sectionID;

}

@property (nonatomic,retain) NSString * sectionID;                              //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * bulletinIdentifiers;              //@synthesize bulletinIdentifiers=_bulletinIdentifiers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)sectionID;
-(void)addBulletinIdentifier:(id)arg1 ;
-(unsigned long long)bulletinIdentifiersCount;
-(void)clearBulletinIdentifiers;
-(id)bulletinIdentifierAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)bulletinIdentifiers;
-(void)setBulletinIdentifiers:(NSMutableArray *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
@end

