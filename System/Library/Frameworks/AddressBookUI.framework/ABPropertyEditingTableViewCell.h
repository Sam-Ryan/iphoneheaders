/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/ABStyleProviding.h>

@protocol ABPropertyEditingTableViewCellDelegate;
@class UITextField, NSString;

@interface ABPropertyEditingTableViewCell : UITableViewCell <ABStyleProviding> {

	int _property;
	UITextField* _textField;
	NSString* _placeholder;
	id<ABPropertyEditingTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic) int property; 
@property (assign,nonatomic) BOOL usesLargeFont; 
@property (nonatomic,copy) NSString * placeholder;                                             //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) id<ABPropertyEditingTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ABPropertyEditingTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<ABPropertyEditingTableViewCellDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)canResignFirstResponder;
-(NSString *)placeholder;
-(id)initWithReuseIdentifier:(id)arg1 property:(int)arg2 delegate:(id)arg3 ;
-(void)_resizeAndCenterTextField;
-(BOOL)usesLargeFont;
-(void)setUsesLargeFont:(BOOL)arg1 ;
-(void)setProperty:(int)arg1 ;
-(id)styleProvider;
-(int)property;
@end

