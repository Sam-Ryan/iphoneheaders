/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR11* _deviceIDs;
	unsigned _errorCode;
	SCD_Struct_MR1 _has;

}

@property (nonatomic,readonly) unsigned long long deviceIDsCount; 
@property (nonatomic,readonly) unsigned* deviceIDs; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                               //@synthesize errorCode=_errorCode - In the implementation block
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
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)errorCode;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)addDeviceIDs:(unsigned)arg1 ;
-(unsigned long long)deviceIDsCount;
-(unsigned)deviceIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearDeviceIDs;
-(void)setDeviceIDs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)deviceIDs;
@end

