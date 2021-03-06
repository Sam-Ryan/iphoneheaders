/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerCameraMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _cameraBackOnDuration;
	unsigned _cameraFrontOnDuration;
	unsigned _cameraTorchOnDuration;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCameraFrontOnDuration; 
@property (assign,nonatomic) unsigned cameraFrontOnDuration;              //@synthesize cameraFrontOnDuration=_cameraFrontOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCameraBackOnDuration; 
@property (assign,nonatomic) unsigned cameraBackOnDuration;               //@synthesize cameraBackOnDuration=_cameraBackOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCameraTorchOnDuration; 
@property (assign,nonatomic) unsigned cameraTorchOnDuration;              //@synthesize cameraTorchOnDuration=_cameraTorchOnDuration - In the implementation block
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
-(void)setCameraFrontOnDuration:(unsigned)arg1 ;
-(void)setHasCameraFrontOnDuration:(BOOL)arg1 ;
-(BOOL)hasCameraFrontOnDuration;
-(void)setCameraBackOnDuration:(unsigned)arg1 ;
-(void)setHasCameraBackOnDuration:(BOOL)arg1 ;
-(BOOL)hasCameraBackOnDuration;
-(void)setCameraTorchOnDuration:(unsigned)arg1 ;
-(void)setHasCameraTorchOnDuration:(BOOL)arg1 ;
-(BOOL)hasCameraTorchOnDuration;
-(unsigned)cameraFrontOnDuration;
-(unsigned)cameraBackOnDuration;
-(unsigned)cameraTorchOnDuration;
@end

