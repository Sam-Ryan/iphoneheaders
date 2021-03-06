/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioBuffer.h>

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (nonatomic,readonly) unsigned frameCapacity; 
@property (assign,nonatomic) unsigned frameLength; 
@property (nonatomic,readonly) unsigned long long stride; 
@property (nonatomic,readonly) float* floatChannelData; 
@property (nonatomic,readonly) short* int16ChannelData; 
@property (nonatomic,readonly) int* int32ChannelData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)frameLength;
-(void)setByteLength:(unsigned)arg1 ;
-(void)_initChannelPtrs;
-(float*)floatChannelData;
-(int*)int32ChannelData;
-(unsigned long long)stride;
-(id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned)arg2 ;
-(unsigned)frameCapacity;
-(void)setFrameLength:(unsigned)arg1 ;
-(short*)int16ChannelData;
@end

