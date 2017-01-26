/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class MTLCompiler, NSObject, MTLIOMemoryInfo, NSString;

@interface _MTLDevice : NSObject {

	long long limits_init;
	SCD_Struct_MT6* _limits;
	MTLCompiler* _compiler;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MTLIOMemoryInfo* _memoryInfo;
	unsigned long long _globalTraceObjectID;
	int _commandQueueCount;

}

@property (readonly) NSString * name; 
@property (readonly) const SCD_Struct_MT6* limits; 
@property (readonly) unsigned long long globalTraceObjectID;                                 //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (readonly) unsigned long long maxColorAttachments; 
@property (readonly) unsigned long long maxVertexAttributes; 
@property (readonly) unsigned long long maxVertexBuffers; 
@property (readonly) unsigned long long maxVertexTextures; 
@property (readonly) unsigned long long maxVertexSamplers; 
@property (readonly) unsigned long long maxVertexInlineDataSize; 
@property (readonly) unsigned long long maxInterpolants; 
@property (readonly) unsigned long long maxFragmentBuffers; 
@property (readonly) unsigned long long maxFragmentTextures; 
@property (readonly) unsigned long long maxFragmentSamplers; 
@property (readonly) unsigned long long maxFragmentInlineDataSize; 
@property (readonly) unsigned long long maxComputeBuffers; 
@property (readonly) unsigned long long maxComputeTextures; 
@property (readonly) unsigned long long maxComputeSamplers; 
@property (readonly) unsigned long long maxComputeInlineDataSize; 
@property (readonly) unsigned long long maxComputeLocalMemorySizes; 
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup; 
@property (readonly) unsigned long long maxComputeThreadgroupMemory; 
@property (readonly) float maxLineWidth; 
@property (readonly) float maxPointSize; 
@property (readonly) unsigned long long maxVisibilityQueryOffset; 
@property (readonly) unsigned long long maxBufferLength; 
@property (readonly) unsigned long long minConstantBufferAlignmentBytes; 
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes; 
@property (readonly) unsigned long long maxTextureWidth1D; 
@property (readonly) unsigned long long maxTextureWidth2D; 
@property (readonly) unsigned long long maxTextureHeight2D; 
@property (readonly) unsigned long long maxTextureWidth3D; 
@property (readonly) unsigned long long maxTextureHeight3D; 
@property (readonly) unsigned long long maxTextureDepth3D; 
@property (readonly) unsigned long long maxTextureDimensionCube; 
@property (readonly) unsigned long long maxTextureLayers; 
@property (readonly) unsigned long long linearTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long maxFramebufferStorageBits; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned acceleratorPort; 
@property (readonly) MTLCompiler * compiler;                                                 //@synthesize compiler=_compiler - In the implementation block
+(BOOL)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2 ;
-(unsigned long long)globalTraceObjectID;
-(unsigned long long)minConstantBufferAlignmentBytes;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unloadShaderCaches;
-(SCD_Struct_MT7)libraryCacheStats;
-(SCD_Struct_MT7)pipelineCacheStats;
-(unsigned long long)maxColorAttachments;
-(unsigned long long)maxVertexAttributes;
-(unsigned long long)maxVertexBuffers;
-(unsigned long long)maxVertexTextures;
-(unsigned long long)maxVertexSamplers;
-(unsigned long long)maxVertexInlineDataSize;
-(unsigned long long)maxInterpolants;
-(unsigned long long)maxFragmentBuffers;
-(unsigned long long)maxFragmentTextures;
-(unsigned long long)maxFragmentSamplers;
-(unsigned long long)maxFragmentInlineDataSize;
-(unsigned long long)maxComputeBuffers;
-(unsigned long long)maxComputeTextures;
-(unsigned long long)maxComputeSamplers;
-(unsigned long long)maxComputeInlineDataSize;
-(unsigned long long)maxComputeLocalMemorySizes;
-(unsigned long long)maxTotalComputeThreadsPerThreadgroup;
-(unsigned long long)maxComputeThreadgroupMemory;
-(float)maxLineWidth;
-(float)maxPointSize;
-(unsigned long long)maxVisibilityQueryOffset;
-(unsigned long long)maxBufferLength;
-(unsigned long long)minBufferNoCopyAlignmentBytes;
-(unsigned long long)maxTextureWidth1D;
-(unsigned long long)maxTextureWidth2D;
-(unsigned long long)maxTextureHeight2D;
-(unsigned long long)maxTextureWidth3D;
-(unsigned long long)maxTextureHeight3D;
-(unsigned long long)maxTextureDepth3D;
-(unsigned long long)maxTextureDimensionCube;
-(unsigned long long)maxTextureLayers;
-(unsigned long long)linearTextureAlignmentBytes;
-(unsigned long long)iosurfaceTextureAlignmentBytes;
-(unsigned long long)maxFramebufferStorageBits;
-(unsigned)acceleratorPort;
-(MTLCompiler *)compiler;
-(void)initLimits;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long*)arg2 previousStateVariant:(id)arg3 ;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long*)arg2 nextStageVariant:(id)arg3 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long*)arg2 ;
-(void)_purgeDevice;
-(void)validateComputeFunction:(id)arg1 ;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long*)arg4 ;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long*)arg4 ;
-(void)freeFragmentFunctionKey:(void*)arg1 fragmentKeySize:(unsigned long long)arg2 ;
-(void)freeVertexFunctionKey:(void*)arg1 vertexKeySize:(unsigned long long)arg2 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long*)arg3 ;
-(void)freeComputeFunctionKey:(void*)arg1 keySize:(unsigned long long)arg2 ;
-(id)fragmentVariantWithCompilerOutput:(id)arg1 ;
-(NSObject*)computeVariantWithCompilerOutput:(id)arg1 ;
-(id)vertexVariantWithCompilerOutput:(id)arg1 ;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 ;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(NSObject*)arg2 ;
-(SCD_Struct_MT8)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(SCD_Struct_MT9)pipelineFlagsWithComputeVariant:(NSObject*)arg1 ;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(NSObject*)arg1 ;
-(void)_incrementCommandQueueCount;
-(void)_decrementCommandQueueCount;
-(void)compilerPropagatesThreadPriority:(BOOL)arg1 ;
-(unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
-(const SCD_Struct_MT6*)limits;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT10*)arg2 error:(id*)arg3 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)familyName;
-(id)productName;
-(id)vendorName;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultLibrary;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsFeatureSet:(unsigned long long)arg1 ;
-(BOOL)supportsTextureSampleCount:(unsigned long long)arg1 ;
@end

