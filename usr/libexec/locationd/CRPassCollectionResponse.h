/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CRPassCollectionResponse : PBCodable <NSCopying> {

	NSString* _msg;
	BOOL _success;

}

@property (assign,nonatomic) BOOL success;                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasMsg; 
@property (nonatomic,retain) NSString * msg;              //@synthesize msg=_msg - In the implementation block
-(void)setMsg:(NSString *)arg1 ;
-(BOOL)hasMsg;
-(NSString *)msg;
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
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
@end

