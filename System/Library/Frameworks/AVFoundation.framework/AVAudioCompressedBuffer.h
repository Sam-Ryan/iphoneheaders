/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (nonatomic,readonly) unsigned packetCapacity; 
@property (assign,nonatomic) unsigned packetCount; 
@property (nonatomic,readonly) long long maximumPacketSize; 
@property (nonatomic,readonly) void* data; 
@property (nonatomic,readonly) AudioStreamPacketDescription* packetDescriptions; 
-(void*)data;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 ;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 maximumPacketSize:(long long)arg3 ;
-(unsigned)packetCapacity;
-(long long)maximumPacketSize;
-(unsigned)packetCount;
-(void)setPacketCount:(unsigned)arg1 ;
-(AudioStreamPacketDescription*)packetDescriptions;
@end

