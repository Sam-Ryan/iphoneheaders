/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsComputePipelineState.h>

@protocol MTLFunction;
@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {

	id<MTLFunction> _function;
	MTLComputePipelineDescriptor* _descriptor;
	MTLComputePipelineReflection* _reflection;

}

@property (nonatomic,readonly) id<MTLFunction> function;                               //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
-(id<MTLFunction>)function;
-(id)description;
-(MTLComputePipelineDescriptor *)descriptor;
-(id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(id)getParameter:(id)arg1 ;
-(MTLComputePipelineReflection *)reflection;
@end

