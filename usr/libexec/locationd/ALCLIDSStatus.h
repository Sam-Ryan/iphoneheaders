/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ALCLIDSStatus : PBCodable <NSCopying> {

	unsigned _connectionStatus;
	NSString* _pairedModelId;

}

@property (assign,nonatomic) unsigned connectionStatus;              //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasPairedModelId; 
@property (nonatomic,retain) NSString * pairedModelId;               //@synthesize pairedModelId=_pairedModelId - In the implementation block
-(void)setPairedModelId:(NSString *)arg1 ;
-(BOOL)hasPairedModelId;
-(void)setConnectionStatus:(unsigned)arg1 ;
-(NSString *)pairedModelId;
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
-(unsigned)connectionStatus;
@end

