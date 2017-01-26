/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLTextureInfo, TSDGLShader;

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject {

	BOOL _didTeardown;
	CGRect _outgoingTextBounds;
	CGRect _incomingTextBounds;
	tquat<float> _outgoingTextColor;
	tquat<float> _incomingTextColor;
	CGAffineTransform _outgoingTextureEdgeInsetsAdjustmentMatrix;
	CGAffineTransform _incomingTextureEdgeInsetsAdjustmentMatrix;
	SCD_Struct_TS521 _textureAdjustment;
	BOOL _didSetupTextureAdjustment;
	BOOL _isTextStyleIdenticalExceptSize;
	TSDGLTextureInfo* _outgoingTextureInfo;
	TSDGLTextureInfo* _incomingTextureInfo;
	TSDGLShader* _shader;

}

@property (nonatomic,readonly) TSDGLTextureInfo * outgoingTextureInfo;              //@synthesize outgoingTextureInfo=_outgoingTextureInfo - In the implementation block
@property (nonatomic,readonly) TSDGLTextureInfo * incomingTextureInfo;              //@synthesize incomingTextureInfo=_incomingTextureInfo - In the implementation block
@property (nonatomic,readonly) TSDGLShader * shader;                                //@synthesize shader=_shader - In the implementation block
@property (assign,nonatomic) BOOL isTextStyleIdenticalExceptSize;                   //@synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize - In the implementation block
+(void)didEndUsingShaders;
+(id)willBeginUsingShadersWithMotionBlur:(BOOL)arg1 motionBlurIgnoreTextureOpacity:(BOOL)arg2 ;
-(BOOL)isTextStyleIdenticalExceptSize;
-(void)setIsTextStyleIdenticalExceptSize:(BOOL)arg1 ;
-(CGContextRef)newContextFromTexture:(id)arg1 ;
-(CGRect)p_actualPixelBoundsOfTexturedRectangle:(id)arg1 ;
-(id)initWithOutgoingTextureName:(unsigned)arg1 outgoingTextureSize:(CGSize)arg2 outgoingTextBounds:(CGRect)arg3 outgoingColor:(tquat<float>)arg4 incomingTextureName:(unsigned)arg5 incomingTextureSize:(CGSize)arg6 incomingTextBounds:(CGRect)arg7 incomingColor:(tquat<float>)arg8 GLState:(id)arg9 motionBlur:(BOOL)arg10 motionBlurIgnoreTextureOpacity:(BOOL)arg11 ;
-(CGAffineTransform)p_affineTransformWithTextureAdjustment:(SCD_Struct_TS521)arg1 textureSize:(CGSize)arg2 ;
-(double)p_errorFromApplyingTextureAdjustment:(SCD_Struct_TS521)arg1 toOutgoingValue:(double)arg2 incomingValue:(double)arg3 sample:(unsigned long long)arg4 sampleCount:(unsigned long long)arg5 ;
-(SCD_Struct_TS521)textureMatchingTextureAdjustment;
-(BOOL)p_fillScanlineCenters:(CGPoint*)arg1 scanlineMinMaxZeroes:(CGPoint*)arg2 samples:(unsigned long long)arg3 fromTexture:(unsigned)arg4 textureSize:(CGSize)arg5 ;
-(double)p_errorFromApplyingTextureAdjustment:(SCD_Struct_TS521)arg1 toOutgoingScanlineCenters:(CGPoint*)arg2 outgoingScanlineZeroes:(CGPoint*)arg3 incomingScanlineCenters:(CGPoint*)arg4 incomingScanlineZeroes:(CGPoint*)arg5 samples:(unsigned long long)arg6 ;
-(void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(CATransform3D)arg2 outgoingTextureMatrix:(CGAffineTransform)arg3 incomingTextureMatrix:(CGAffineTransform)arg4 ;
-(id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2 GLState:(id)arg3 motionBlur:(BOOL)arg4 motionBlurIgnoreTextureOpacity:(BOOL)arg5 ;
-(void)setupIfNecessary;
-(void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(CATransform3D)arg2 generateTextureMatrices:(BOOL)arg3 ;
-(TSDGLTextureInfo *)outgoingTextureInfo;
-(TSDGLTextureInfo *)incomingTextureInfo;
-(void)dealloc;
-(TSDGLShader *)shader;
-(void)teardown;
@end

