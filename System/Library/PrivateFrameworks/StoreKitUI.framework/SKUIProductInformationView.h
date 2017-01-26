/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIColorScheme, NSArray, NSMutableArray, UIView, UILabel, NSString;

@interface SKUIProductInformationView : UIView {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInset;
	NSArray* _informationLines;
	NSMutableArray* _imageValues;
	NSMutableArray* _keyLabels;
	UIView* _separatorView;
	UILabel* _titleLabel;
	NSMutableArray* _valueLabels;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSArray * informationLines;                 //@synthesize informationLines=_informationLines - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparatorView; 
@property (nonatomic,retain) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHidesSeparatorView:(BOOL)arg1 ;
-(void)setInformationLines:(NSArray *)arg1 ;
-(double)_keyWidth;
-(BOOL)hidesSeparatorView;
-(NSArray *)informationLines;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end
