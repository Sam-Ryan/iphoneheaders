/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMedicalIDEditorCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol HKMedicalIDEditorCellHeightChangeDelegate;
@class UILabel, UITextView, NSString;

@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell <UITextViewDelegate> {

	UILabel* _labelLabel;
	double _lastSeenTextViewContentHeight;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	id<HKMedicalIDEditorCellHeightChangeDelegate> _heightChangeDelegate;
	UIEdgeInsets _textViewExtraMargins;

}

@property (nonatomic,readonly) UITextView * textView;                                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSString * placeholder; 
@property (assign,nonatomic,__weak) id<HKMedicalIDEditorCellHeightChangeDelegate> heightChangeDelegate;              //@synthesize heightChangeDelegate=_heightChangeDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textViewExtraMargins;                                                      //@synthesize textViewExtraMargins=_textViewExtraMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showsLabelAndValue;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)placeholder;
-(UITextView *)textView;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)commitEditing;
-(void)_labelTapped:(id)arg1 ;
-(UIEdgeInsets)textViewExtraMargins;
-(id<HKMedicalIDEditorCellHeightChangeDelegate>)heightChangeDelegate;
-(void)setHeightChangeDelegate:(id<HKMedicalIDEditorCellHeightChangeDelegate>)arg1 ;
-(void)setTextViewExtraMargins:(UIEdgeInsets)arg1 ;
@end

