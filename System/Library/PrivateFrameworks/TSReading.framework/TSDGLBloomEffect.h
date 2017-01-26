/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLShader;

@interface TSDGLBloomEffect : NSObject {

	CGSize _effectSize;
	CGSize _blurBufferSize;
	TSDGLFrameBuffer* _colorFramebuffer;
	TSDGLFrameBuffer* _blurFramebuffer;
	TSDGLDataBuffer* _dataBuffer;
	TSDGLDataBuffer* _blurTransferDataBuffer;
	TSDGLDataBuffer* _blurDataBuffer;
	TSDGLShader* _blurHorizontalShader;
	TSDGLShader* _blurVerticalShader;
	TSDGLShader* _bloomShader;
	TSDGLShader* _fboTransferShader;
	int _oldViewportRect[4];
	BOOL _oldViewportRectInitialized;

}
-(void)bindFramebuffer;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)p_setupBuffers;
-(void)p_setupShaders;
-(void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 ;
-(id)initWithEffectSize:(CGSize)arg1 blurScale:(double)arg2 ;
-(void)drawBloomEffectWithMVPMatrix:(CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3 ;
-(void)dealloc;
-(void)teardown;
@end

