/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIColor;

@interface CIConstantColorGenerator : CIFilter {

	CIColor* inputColor;

}

@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(id)outputImage;
@end

