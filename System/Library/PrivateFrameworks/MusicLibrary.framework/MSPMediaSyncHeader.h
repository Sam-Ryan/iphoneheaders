/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSPMediaSyncHeader : PBCodable <NSCopying> {

	int _syncType;
	int _totalPackages;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasTotalPackages; 
@property (assign,nonatomic) int totalPackages;                  //@synthesize totalPackages=_totalPackages - In the implementation block
@property (assign,nonatomic) BOOL hasSyncType; 
@property (assign,nonatomic) int syncType;                       //@synthesize syncType=_syncType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTotalPackages:(int)arg1 ;
-(void)setHasTotalPackages:(BOOL)arg1 ;
-(BOOL)hasTotalPackages;
-(int)totalPackages;
-(void)setSyncType:(int)arg1 ;
-(void)setHasSyncType:(BOOL)arg1 ;
-(BOOL)hasSyncType;
-(int)syncType;
@end

