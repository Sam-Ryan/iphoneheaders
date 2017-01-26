/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying> {

	float _screenSizeHeight;
	float _screenSizeWidth;
	BOOL _absolute;
	BOOL _integratedDisplay;
	SCD_Struct_MR16 _has;

}

@property (assign,nonatomic) BOOL hasAbsolute; 
@property (assign,nonatomic) BOOL absolute;                          //@synthesize absolute=_absolute - In the implementation block
@property (assign,nonatomic) BOOL hasIntegratedDisplay; 
@property (assign,nonatomic) BOOL integratedDisplay;                 //@synthesize integratedDisplay=_integratedDisplay - In the implementation block
@property (assign,nonatomic) BOOL hasScreenSizeWidth; 
@property (assign,nonatomic) float screenSizeWidth;                  //@synthesize screenSizeWidth=_screenSizeWidth - In the implementation block
@property (assign,nonatomic) BOOL hasScreenSizeHeight; 
@property (assign,nonatomic) float screenSizeHeight;                 //@synthesize screenSizeHeight=_screenSizeHeight - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAbsolute:(BOOL)arg1 ;
-(void)setHasAbsolute:(BOOL)arg1 ;
-(BOOL)hasAbsolute;
-(void)setIntegratedDisplay:(BOOL)arg1 ;
-(void)setHasIntegratedDisplay:(BOOL)arg1 ;
-(BOOL)hasIntegratedDisplay;
-(void)setScreenSizeWidth:(float)arg1 ;
-(void)setHasScreenSizeWidth:(BOOL)arg1 ;
-(BOOL)hasScreenSizeWidth;
-(void)setScreenSizeHeight:(float)arg1 ;
-(void)setHasScreenSizeHeight:(BOOL)arg1 ;
-(BOOL)hasScreenSizeHeight;
-(BOOL)absolute;
-(BOOL)integratedDisplay;
-(float)screenSizeWidth;
-(float)screenSizeHeight;
@end

