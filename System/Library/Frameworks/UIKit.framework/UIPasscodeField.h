/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableString, NSMutableArray, UIButton, NSString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {

	NSMutableString* _value;
	NSMutableArray* _entryFields;
	NSMutableArray* _entryBackgrounds;
	UIButton* _okButton;
	BOOL _opaqueBackground;
	BOOL _centerHorizontally;
	long long _keyboardType;
	long long _keyboardAppearance;
	int _emptyContentReturnKeyType;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(Class)textFieldClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 emptyContentReturnKeyType:(int)arg3 ;
-(void)okButtonClicked:(id)arg1 ;
-(void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(BOOL)arg2 ;
-(void)_updateFields;
-(void)setTextCentersHorizontally:(BOOL)arg1 ;
-(void)_textDidChange;
-(BOOL)showsOKButton;
-(void)setShowsOKButton:(BOOL)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(int)numberOfEntryFields;
-(void)setNumberOfEntryFields:(int)arg1 ;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(BOOL)textFieldShouldStartEditing:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
@end

