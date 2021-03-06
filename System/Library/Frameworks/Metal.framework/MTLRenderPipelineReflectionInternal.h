/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, NSDictionary;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT8 _flags;
	NSArray* _vertexBuiltInArguments;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;
	NSDictionary* _performanceStatistics;

}
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(SCD_Struct_MT8)arg6 ;
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)performanceStatistics;
-(id)vertexBuiltInArguments;
-(void)dealloc;
-(id)description;
-(id)vertexArguments;
-(id)fragmentArguments;
@end

