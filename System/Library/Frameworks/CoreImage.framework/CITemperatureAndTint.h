/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CITemperatureAndTint : CIFilter {

	CIImage* inputImage;
	CIVector* inputNeutral;
	CIVector* inputTargetNeutral;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputNeutral; 
@property (nonatomic,retain) CIVector * inputTargetNeutral; 
+(id)customAttributes;
-(CIVector *)inputNeutral;
-(void)setInputNeutral:(CIVector *)arg1 ;
-(CIVector *)inputTargetNeutral;
-(void)setInputTargetNeutral:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

