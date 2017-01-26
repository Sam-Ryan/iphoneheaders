/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CIAztecCodeGenerator : CICodeGenerator {

	NSNumber* inputCorrectionLevel;
	NSNumber* inputLayers;
	NSNumber* inputCompactStyle;

}

@property (nonatomic,copy) NSNumber * inputCorrectionLevel; 
@property (nonatomic,copy) NSNumber * inputLayers; 
@property (nonatomic,copy) NSNumber * inputCompactStyle; 
+(id)customAttributes;
-(void)setInputCompactStyle:(NSNumber *)arg1 ;
-(void)setInputCorrectionLevel:(NSNumber *)arg1 ;
-(NSNumber *)inputCompactStyle;
-(NSNumber *)inputCorrectionLevel;
-(void)setInputLayers:(NSNumber *)arg1 ;
-(NSNumber *)inputLayers;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(CGImageRef)outputCGImage;
@end

