/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor;

@interface VCPMetaTrackDecoder : NSObject {

	AVAssetReader* _reader;
	AVAssetReaderTrackOutput* _readerOutput;
	AVAssetReaderOutputMetadataAdaptor* _readerOutputAdaptor;

}
-(void)dealloc;
-(long long)status;
-(id)copyNextMetadataGroup;
-(id)initWithTrack:(id)arg1 ;
@end

