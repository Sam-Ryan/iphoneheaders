/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor;

@interface CISmoothLinearGradient : CIFilter {

	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputPoint0; 
@property (nonatomic,retain) CIVector * inputPoint1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(CIVector *)inputPoint0;
-(CIVector *)inputPoint1;
-(id)_kernel;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
-(void)setInputPoint0:(CIVector *)arg1 ;
-(void)setInputPoint1:(CIVector *)arg1 ;
-(id)outputImage;
@end

