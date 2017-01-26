/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICellLayout.h>
#import <libobjc.A.dylib/SKUIEditorialLinkViewDelegate.h>

@class SKUIEditorialLinkView, SKUITextBoxView, NSString;

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate> {

	UIEdgeInsets _contentInset;
	double _linkSpacing;
	SKUIEditorialLinkView* _linkView;
	SKUITextBoxView* _textBoxView;
	double _totalHeight;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                    //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) SKUITextBoxView * textBoxView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(BOOL)arg3 ;
-(SKUITextBoxView *)textBoxView;
-(void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2 ;
-(void)resetContentInset;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(id)_textBoxView;
-(void)_initContentInset;
-(id)_linkView;
@end

