/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PBCodable : NSObject <PQLValuable, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * data; 
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)options;
-(id)nmr_valueForPotentiallyUndefinedKey:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)redact;
-(id)_redact:(id)arg1 ;
-(BOOL)_isRedactable:(id)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)_hasIvar:(objc_ivarRef)arg1 ;
-(id)mr_valueForPotentiallyUndefinedKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)formattedText;
@end

