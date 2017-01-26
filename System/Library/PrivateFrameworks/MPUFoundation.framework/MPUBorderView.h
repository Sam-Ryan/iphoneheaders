/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView {

	BOOL _hidesWhenFullyTransparent;
	MPUBorderConfiguration* _borderConfiguration;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenFullyTransparent;                          //@synthesize hidesWhenFullyTransparent=_hidesWhenFullyTransparent - In the implementation block
@property (nonatomic,readonly) double requiredOutsetForDropShadow; 
@property (nonatomic,readonly) UIEdgeInsets resizableImageCapInsets; 
+(double)requiredOutsetForDropShadow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(double)requiredOutsetForDropShadow;
-(MPUBorderConfiguration *)borderConfiguration;
-(UIEdgeInsets)resizableImageCapInsets;
-(BOOL)hidesWhenFullyTransparent;
-(void)setHidesWhenFullyTransparent:(BOOL)arg1 ;
@end

