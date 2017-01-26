/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput, PFVideoAVObjectBuilder;

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _trackOutput;
	PFVideoAVObjectBuilder* _slowmoTimeMap;
	SCD_Struct_VC6 _decodeEnd;
	SCD_Struct_VC6 _sampleDuration;
	SCD_Struct_VC6 _nextSampleTime;
	opaqueCMSampleBufferRef _currentSample;
	opaqueCMSampleBufferRef _nextSample;

}
-(void)dealloc;
-(long long)status;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC15*)arg2 atInterval:(const SCD_Struct_VC6*)arg3 slowmoTimeMap:(id)arg4 ;
-(SCD_Struct_VC6)originalTime:(const SCD_Struct_VC6*)arg1 ;
-(SCD_Struct_VC6)scaledTime:(const SCD_Struct_VC6*)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
@end
