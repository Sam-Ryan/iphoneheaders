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

@class NSData;

@interface _MRAudioFormatSettingsProtobuf : PBCodable <NSCopying> {

	NSData* _formatSettingsPlistData;

}

@property (nonatomic,readonly) BOOL hasFormatSettingsPlistData; 
@property (nonatomic,retain) NSData * formatSettingsPlistData;               //@synthesize formatSettingsPlistData=_formatSettingsPlistData - In the implementation block
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
-(void)setFormatSettingsPlistData:(NSData *)arg1 ;
-(NSData *)formatSettingsPlistData;
-(BOOL)hasFormatSettingsPlistData;
@end

