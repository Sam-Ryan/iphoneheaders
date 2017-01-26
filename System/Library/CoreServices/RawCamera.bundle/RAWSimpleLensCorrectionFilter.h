/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:26:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RAWSimpleLensCorrectionFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputDistortionScaleHalfMinorRadius;
	NSNumber* inputDistortionScaleMinorRadius;
	NSNumber* inputDistortionScaleMajorRadius;
	NSNumber* inputDistortionScaleMaxRadius;
	NSNumber* inputDraftMode;
	id inputColorSpace;
	NSNumber* inputFocalLength;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(CGPoint)mapPoint:(CGPoint)arg1 info:(id)arg2 ;
-(CGRect)distortionRegionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

