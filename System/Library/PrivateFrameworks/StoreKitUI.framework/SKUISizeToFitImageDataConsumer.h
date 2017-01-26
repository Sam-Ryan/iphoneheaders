/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer {

	CGSize _constraintSize;
	BOOL _custom;
	UIColor* _gradientEndColor;
	double _gradientHeight;

}

@property (assign,nonatomic) CGSize constraintSize;                   //@synthesize constraintSize=_constraintSize - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;              //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (assign,nonatomic) double gradientHeight;                   //@synthesize gradientHeight=_gradientHeight - In the implementation block
+(id)consumerWithConstraintSize:(CGSize)arg1 ;
+(id)consumerWithConstraintSize2:(CGSize)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(CGSize)constraintSize;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(void)setGradientHeight:(double)arg1 ;
-(void)_drawGradientWithContext:(CGContextRef)arg1 imageRect:(CGRect)arg2 ;
-(void)setConstraintSize:(CGSize)arg1 ;
-(UIColor *)gradientEndColor;
-(double)gradientHeight;
@end

