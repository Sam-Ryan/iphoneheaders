/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSArray;

@interface VCPImageBlurAnalyzer : VCPImageAnalyzer {

	float _sharpnessBlocks[16];
	NSArray* _faces;
	NSArray* _objects;
	float _sharpness;
	float _irisSharpness;

}

@property (readonly) float sharpness;                  //@synthesize sharpness=_sharpness - In the implementation block
@property (readonly) float irisSharpness;              //@synthesize irisSharpness=_irisSharpness - In the implementation block
-(float)sharpness;
-(float)computeObjectSharpness:(CVBufferRef)arg1 ;
-(void)computeLocalSharpness:(CVBufferRef)arg1 ;
-(float)computeFaceSharpness:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 ;
-(void)spatialPooling;
-(float)computeRegionSharpness:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
-(id)initWithFaceResults:(id)arg1 objectRect:(id)arg2 ;
-(float)irisSharpness;
@end

