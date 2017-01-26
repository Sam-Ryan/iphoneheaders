/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CLHarvestAppRealtimeAvailabilityTile : PBCodable <NSCopying> {

	NSMutableArray* _venues;

}

@property (nonatomic,retain) NSMutableArray * venues;              //@synthesize venues=_venues - In the implementation block
-(void)addVenues:(id)arg1 ;
-(unsigned long long)venuesCount;
-(void)clearVenues;
-(id)venuesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)venues;
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
-(void)setVenues:(NSMutableArray *)arg1 ;
@end

