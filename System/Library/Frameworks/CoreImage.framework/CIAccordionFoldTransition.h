/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIAccordionFoldTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputBottomHeight;
	NSNumber* inputNumberOfFolds;
	NSNumber* inputFoldShadowAmount;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputBottomHeight; 
@property (nonatomic,retain) NSNumber * inputNumberOfFolds; 
@property (nonatomic,retain) NSNumber * inputFoldShadowAmount; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(CIImage *)inputTargetImage;
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(id)_kernelWarpS;
-(id)_kernelWarpT;
-(id)_kernelMix;
-(NSNumber *)inputBottomHeight;
-(void)setInputBottomHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputNumberOfFolds;
-(void)setInputNumberOfFolds:(NSNumber *)arg1 ;
-(NSNumber *)inputFoldShadowAmount;
-(void)setInputFoldShadowAmount:(NSNumber *)arg1 ;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

