/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageDescriptor.h>

@interface VCPImageDescriptorHistograms : VCPImageDescriptor {

	float* _featureVector;

}
-(void)dealloc;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(int)computeDistanceWith:(id)arg1 distance:(float*)arg2 ;
-(int)computeFeature:(CVBufferRef)arg1 ;
-(int)computeRegionHistogram:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 histogram:(float*)arg5 ;
@end

