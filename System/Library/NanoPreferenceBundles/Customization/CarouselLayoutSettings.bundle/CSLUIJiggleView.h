/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <UIKit/UIView.h>

@interface CSLUIJiggleView : UIView {

	CGPoint _unjitterPoint;
	BOOL _isJiggling;

}

@property (assign,setter=setJiggling:,nonatomic) BOOL isJiggling;              //@synthesize isJiggling=_isJiggling - In the implementation block
+(id)makeTransformAnimation;
+(id)makePositionAnimation;
-(void)startJiggling;
-(BOOL)isJiggling;
-(void)endJiggling;
-(void)setJiggling:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

