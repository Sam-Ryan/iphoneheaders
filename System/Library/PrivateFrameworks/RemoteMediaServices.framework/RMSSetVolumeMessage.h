/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSSetVolumeMessage : PBCodable <NSCopying> {

	int _sessionIdentifier;
	float _volume;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasVolume; 
@property (assign,nonatomic) float volume;                           //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(BOOL)hasSessionIdentifier;
-(BOOL)hasVolume;
-(void)setHasVolume:(BOOL)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(float)volume;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
@end

