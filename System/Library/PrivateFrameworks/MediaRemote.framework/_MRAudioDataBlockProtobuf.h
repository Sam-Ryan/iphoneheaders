/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAudioBufferProtobuf, _MRAudioTimeProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying> {

	double _gain;
	_MRAudioBufferProtobuf* _buffer;
	_MRAudioTimeProtobuf* _time;
	SCD_Struct_MR1 _has;

}

@property (nonatomic,readonly) BOOL hasBuffer; 
@property (nonatomic,retain) _MRAudioBufferProtobuf * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) BOOL hasTime; 
@property (nonatomic,retain) _MRAudioTimeProtobuf * time;                  //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL hasGain; 
@property (assign,nonatomic) double gain;                                  //@synthesize gain=_gain - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTime:(_MRAudioTimeProtobuf *)arg1 ;
-(_MRAudioTimeProtobuf *)time;
-(id)dictionaryRepresentation;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTime;
-(BOOL)hasBuffer;
-(void)setHasGain:(BOOL)arg1 ;
-(BOOL)hasGain;
-(void)setBuffer:(_MRAudioBufferProtobuf *)arg1 ;
-(_MRAudioBufferProtobuf *)buffer;
@end

