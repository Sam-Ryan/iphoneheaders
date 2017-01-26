/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSMutableDictionary, AVAsset;

@interface VCPPhotoAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	CGAffineTransform _transform;
	CVBufferRef _image;
	CVBufferRef _imageLowRes;
	BOOL _isPano;
	NSDictionary* _exif;
	NSMutableDictionary* _analysis;
	NSMutableDictionary* _results;
	AVAsset* _irisAsset;
	unsigned long long _irisAnalyses;
	float _irisPhotoOffsetSec;
	float _irisPhotoExposureSec;
	long long _status;

}

@property (readonly) long long status;              //@synthesize status=_status - In the implementation block
+(BOOL)canAnalyzeUndegraded:(id)arg1 ;
+(id)requestImageForAsset:(id)arg1 withMajorDimension:(double)arg2 ;
+(CGSize)getMaxDecodeSize:(id)arg1 ;
-(void)dealloc;
-(long long)status;
-(id)analyzeAsset:(/*^block*/id)arg1 ;
-(id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(id)rotateUIImageUpright:(id)arg1 withTransform:(CGAffineTransform)arg2 ;
-(int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 objectRect:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(int)downscaleImage:(CVBufferRef)arg1 scaledImage:(_CVBuffer*)arg2 majorDimension:(int)arg3 ;
-(id)initWithUIImage:(id)arg1 exif:(id)arg2 irisMovie:(id)arg3 forAnalysisTypes:(unsigned long long)arg4 ;
@end

