/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMailMarkupDelegate;
#import <MessageUI/MessageUI-Structs.h>
@class MURemoteViewController;

@interface MFMailMarkup : NSObject {

	MURemoteViewController* markupViewController;
	id<MFMailMarkupDelegate> _delegate;

}

@property (assign,nonatomic) id<MFMailMarkupDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign) MURemoteViewController * markupViewController; 
+(id)markupIcon;
-(void)setDelegate:(id<MFMailMarkupDelegate>)arg1 ;
-(id<MFMailMarkupDelegate>)delegate;
-(void)setMarkupViewController:(MURemoteViewController *)arg1 ;
-(void)_processMarkupURL:(id)arg1 forAttachment:(id)arg2 ;
-(void)exitMarkupWithReplacementAttachment:(id)arg1 targetRect:(CGRect)arg2 ;
-(MURemoteViewController *)markupViewController;
-(void)_requestMarkupURL:(id)arg1 forAttachment:(id)arg2 ;
-(void)_requestMarkupData:(id)arg1 forAttachment:(id)arg2 ;
-(void)_requestMarkupImage:(id)arg1 forAttachment:(id)arg2 ;
-(void)_handleMarkupData:(id)arg1 forAttachment:(id)arg2 ;
-(void)_handleMarkupImage:(id)arg1 forAttachment:(id)arg2 ;
-(id)initWithMarkupDelegate:(id)arg1 ;
-(void)markupAttachment:(id)arg1 ;
-(void)handleReturnedMarkupItems:(id)arg1 forAttachment:(id)arg2 ;
@end
