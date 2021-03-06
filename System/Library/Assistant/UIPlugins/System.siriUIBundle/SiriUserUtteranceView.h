/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>
#import <System/AFUIUtteranceCorrectionTextViewDelegate.h>

@protocol SiriUserUtteranceViewDelegate;
@class SiriSpeechRecognizedCorrectionTextView, UILabel, UIView, NSArray, NSString;

@interface SiriUserUtteranceView : UIView <AFUIUtteranceCorrectionTextViewDelegate> {

	SiriSpeechRecognizedCorrectionTextView* _editableText;
	UILabel* _tapToEditLabel;
	UILabel* _leadingQuoteLabel;
	UILabel* _trailingQuoteLabel;
	UIView* _backgroundHighlightView;
	NSArray* _streamingResultsToSetDuringLayout;
	BOOL _editable;
	BOOL _didCorrect;
	id<SiriUserUtteranceViewDelegate> _delegate;
	long long _textAlignment;

}

@property (assign,nonatomic,__weak) id<SiriUserUtteranceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment;                                        //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL editable;                                                  //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) BOOL didCorrect;                                                //@synthesize didCorrect=_didCorrect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)insertionAnimatedZPosition;
-(double)_snippetExtraHeight;
-(void)didFinishRecognition;
-(void)setStreamingText:(id)arg1 ;
-(BOOL)didCorrect;
-(void)utteranceTextDidReceiveReturnKey:(id)arg1 ;
-(void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)utteranceTextDidBecomeFirstResponder:(id)arg1 ;
-(void)utteranceTextDidResignFirstResponder:(id)arg1 ;
-(void)setDidCorrect:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SiriUserUtteranceViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SiriUserUtteranceViewDelegate>)delegate;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(BOOL)canResignFirstResponder;
-(void)setEditable:(BOOL)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)editable;
-(void)_handleTap:(id)arg1 ;
-(void)endEditingAndCorrect:(BOOL)arg1 ;
@end

