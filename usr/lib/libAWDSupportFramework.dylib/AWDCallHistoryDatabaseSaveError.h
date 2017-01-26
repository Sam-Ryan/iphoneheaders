/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _domain;
	unsigned _error;
	NSString* _table;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasTable; 
@property (nonatomic,retain) NSString * table;                          //@synthesize table=_table - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)table;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDomain:(BOOL)arg1 ;
-(BOOL)hasDomain;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasError;
-(void)setTable:(NSString *)arg1 ;
-(BOOL)hasTable;
-(void)setError:(unsigned)arg1 ;
-(unsigned)error;
-(void)setDomain:(unsigned)arg1 ;
@end

