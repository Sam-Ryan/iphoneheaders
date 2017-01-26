/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFModernAtomView.h>

@protocol MFCorecipientsIndicatorAtomDelegate;
@class NSArray;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView {

	BOOL _touchesWereCancelled;
	id<MFCorecipientsIndicatorAtomDelegate> _delegate;
	NSArray* _recipients;

}

@property (assign,nonatomic) id<MFCorecipientsIndicatorAtomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                          //@synthesize recipients=_recipients - In the implementation block
-(void)setDelegate:(id<MFCorecipientsIndicatorAtomDelegate>)arg1 ;
-(id)init;
-(id<MFCorecipientsIndicatorAtomDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithRecipients:(id)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
@end

