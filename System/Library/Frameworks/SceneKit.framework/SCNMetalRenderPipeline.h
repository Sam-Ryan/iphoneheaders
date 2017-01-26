/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLRenderPipelineState;
#import <SceneKit/SceneKit-Structs.h>
@class NSArray;

@interface SCNMetalRenderPipeline : NSObject {

	SCD_Struct_SC16 _sceneBuffer;
	_C3DFXProgram* _program;
	_C3DFXPass* _pass;
	unsigned _buffersUsageMask[2];
	unsigned _texturesUsageMask[2];
	unsigned _samplersUsageMask[2];
	id<MTLRenderPipelineState> _state;
	NSArray* _frameBufferBindings;
	NSArray* _nodeBufferBindings;
	NSArray* _passBufferBindings;
	NSArray* _shadableBufferBindings;

}

@property (nonatomic,retain) id<MTLRenderPipelineState> state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSArray * frameBufferBindings;                    //@synthesize frameBufferBindings=_frameBufferBindings - In the implementation block
@property (nonatomic,copy) NSArray * nodeBufferBindings;                     //@synthesize nodeBufferBindings=_nodeBufferBindings - In the implementation block
@property (nonatomic,copy) NSArray * passBufferBindings;                     //@synthesize passBufferBindings=_passBufferBindings - In the implementation block
@property (nonatomic,copy) NSArray * shadableBufferBindings;                 //@synthesize shadableBufferBindings=_shadableBufferBindings - In the implementation block
@property (nonatomic,readonly) unsigned vertexBuffersUsageMask; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id<MTLRenderPipelineState>)state;
-(void)setState:(id<MTLRenderPipelineState>)arg1 ;
-(void)_computeUsageForArguments:(id)arg1 stage:(int)arg2 ;
-(unsigned)vertexBuffersUsageMask;
-(NSArray *)frameBufferBindings;
-(void)setFrameBufferBindings:(NSArray *)arg1 ;
-(NSArray *)nodeBufferBindings;
-(void)setNodeBufferBindings:(NSArray *)arg1 ;
-(NSArray *)passBufferBindings;
-(void)setPassBufferBindings:(NSArray *)arg1 ;
-(NSArray *)shadableBufferBindings;
-(void)setShadableBufferBindings:(NSArray *)arg1 ;
@end

