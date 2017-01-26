/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKTableViewCell.h>

@class PKPaymentAuthorizationLayout, UILabel, NSMutableArray, UIView, UIImageView, NSString;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {

	PKPaymentAuthorizationLayout* _layout;
	UILabel* _labelView;
	NSMutableArray* _valueViews;
	UIView* _separatorView;
	UIImageView* _arrowView;
	UIImageView* _alertView;
	NSMutableArray* _constraints;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * value;              //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)_createSubviews;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)addValue:(id)arg1 isPlaceholder:(BOOL)arg2 ;
-(void)setValue:(id)arg1 isPlaceholder:(BOOL)arg2 ;
-(id)_itemCellLabelAttributedStringWithString:(id)arg1 color:(id)arg2 ;
-(id)_createValueView;
@end

