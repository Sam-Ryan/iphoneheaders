/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDiscBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;

}
+(id)customAttributes;
-(id)_CICombine_results;
-(id)outputImageOriginal;
-(id)outputImageEnhanced;
-(id)outputImage;
@end

