/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchExposureLayer : BLRetouchEffectLayer {

	float _currentExposure;
	float* _cubeData;
	float _exposure;

}

@property (assign,nonatomic) float exposure;              //@synthesize exposure=_exposure - In the implementation block
+(id)layerWithExposure:(float)arg1 ;
-(void)dealloc;
-(CGImageRef)newImageFromContextWithEffect:(CGContextRef)arg1 ;
-(id)cubeData;
-(float)exposure;
-(void)setExposure:(float)arg1 ;
@end

