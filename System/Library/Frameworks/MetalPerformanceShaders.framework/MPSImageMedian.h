/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@interface MPSImageMedian : MPSUnaryImageKernel {

	unsigned long long _filterDiameter;

}

@property (nonatomic,readonly) unsigned long long kernelDiameter;              //@synthesize filterDiameter=_filterDiameter - In the implementation block
+(unsigned long long)minKernelDiameter;
+(unsigned long long)maxKernelDiameter;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)sourceRegionForDestinationSize:(SCD_Struct_MP8)arg1 ;
-(long long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const SCD_Struct_MP10*)arg5 ;
-(id)initWithDevice:(id)arg1 kernelDiameter:(unsigned long long)arg2 ;
-(unsigned long long)kernelDiameter;
-(id)initWithDevice:(id)arg1 ;
@end

