/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution5X5 : CIFilter {

	CIImage* inputImage;
	CIVector* inputWeights;
	NSNumber* inputBias;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputWeights; 
@property (nonatomic,retain) NSNumber * inputBias; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(CIVector *)inputWeights;
-(void)setInputWeights:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputBias;
-(void)setInputBias:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

