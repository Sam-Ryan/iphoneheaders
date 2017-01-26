/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell {

	CNPostalAddressEditorView* _addressEditor;

}

@property (nonatomic,copy) UIColor * editorSeparatorColor; 
@property (nonatomic,retain) CNPostalAddressEditorView * addressEditor;              //@synthesize addressEditor=_addressEditor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)valueChanged:(id)arg1 ;
-(id)valueView;
-(id)constantConstraints;
-(double)rightContentMargin;
-(id)firstResponderItem;
-(void)setEditorSeparatorColor:(UIColor *)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(double)leftValueMargin;
-(CNPostalAddressEditorView *)addressEditor;
-(void)layoutChanged:(id)arg1 ;
-(UIColor *)editorSeparatorColor;
-(void)setAddressEditor:(CNPostalAddressEditorView *)arg1 ;
-(void)setPresentingDelegate:(id)arg1 ;
@end

