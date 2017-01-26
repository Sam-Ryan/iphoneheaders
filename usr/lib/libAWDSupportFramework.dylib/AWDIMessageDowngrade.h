/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageDowngrade : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _durationBeforeDowngrade;
	NSString* _guid;
	unsigned _isManualDowngrade;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationBeforeDowngrade; 
@property (assign,nonatomic) unsigned durationBeforeDowngrade;              //@synthesize durationBeforeDowngrade=_durationBeforeDowngrade - In the implementation block
@property (assign,nonatomic) BOOL hasIsManualDowngrade; 
@property (assign,nonatomic) unsigned isManualDowngrade;                    //@synthesize isManualDowngrade=_isManualDowngrade - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setDurationBeforeDowngrade:(unsigned)arg1 ;
-(void)setHasDurationBeforeDowngrade:(BOOL)arg1 ;
-(BOOL)hasDurationBeforeDowngrade;
-(void)setIsManualDowngrade:(unsigned)arg1 ;
-(void)setHasIsManualDowngrade:(BOOL)arg1 ;
-(BOOL)hasIsManualDowngrade;
-(unsigned)durationBeforeDowngrade;
-(unsigned)isManualDowngrade;
@end

