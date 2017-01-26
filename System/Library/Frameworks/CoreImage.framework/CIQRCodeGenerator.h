/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSString;

@interface CIQRCodeGenerator : CICodeGenerator {

	NSString* inputCorrectionLevel;

}

@property (nonatomic,copy) NSString * inputCorrectionLevel; 
+(id)customAttributes;
-(void)setInputCorrectionLevel:(NSString *)arg1 ;
-(NSString *)inputCorrectionLevel;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(CGImageRef)outputCGImage;
@end
