/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying> {

	long long _version;
	NSMutableArray* _cacheHints;
	SCD_Struct_NT7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * cacheHints;              //@synthesize cacheHints=_cacheHints - In the implementation block
-(void)setCacheHints:(NSMutableArray *)arg1 ;
-(void)addCacheHints:(id)arg1 ;
-(void)clearCacheHints;
-(unsigned long long)cacheHintsCount;
-(id)cacheHintsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cacheHints;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
@end

