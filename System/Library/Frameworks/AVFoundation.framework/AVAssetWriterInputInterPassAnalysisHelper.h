/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;
	AVAssetWriterInputPassDescription* _initialPassDescription;

}
-(void)dealloc;
-(long long)status;
-(id)initWithConfigurationState:(id)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(BOOL)shouldRespondToInitialPassDescription;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)markCurrentPassAsFinished;
-(id)initWithWritingHelper:(id)arg1 ;
-(void)startPassAnalysis;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)markAsFinished;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM5)arg2 ;
@end
