/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/FindMyiPhoneLockScreen.lockbundle/FindMyiPhoneLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, UIView, UILabel, UIButton, NSLayoutConstraint;

@interface LockScreenView : UIView {

	BOOL _callButtonEnabled;
	NSString* _messageText;
	NSString* _phoneNumber;
	NSString* _footnoteText;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UILabel* _phoneNumberLabel;
	UIButton* _callButton;
	UILabel* _footnoteLabel;
	NSLayoutConstraint* _titleTopConstraint;
	NSLayoutConstraint* _titleLeadingConstraint;
	NSLayoutConstraint* _titleTrailingConstraint;
	NSLayoutConstraint* _messageTopConstraint;
	NSLayoutConstraint* _titleToMessageConstraint;
	NSLayoutConstraint* _messageToPhoneNumConstraint;
	NSLayoutConstraint* _phoneNumToCallButtonBottomConstraint;
	NSLayoutConstraint* _phoneNumBottomConstraint;
	NSLayoutConstraint* _callButtonBottomConstraint;

}

@property (nonatomic,retain) NSString * messageText;                                                 //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * footnoteText;                                                //@synthesize footnoteText=_footnoteText - In the implementation block
@property (assign,nonatomic) BOOL callButtonEnabled;                                                 //@synthesize callButtonEnabled=_callButtonEnabled - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                 //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                 //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * phoneNumberLabel;                                             //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,retain) UIButton * callButton;                                                  //@synthesize callButton=_callButton - In the implementation block
@property (nonatomic,retain) UILabel * footnoteLabel;                                                //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTopConstraint;                                //@synthesize titleTopConstraint=_titleTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLeadingConstraint;                            //@synthesize titleLeadingConstraint=_titleLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTrailingConstraint;                           //@synthesize titleTrailingConstraint=_titleTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageTopConstraint;                              //@synthesize messageTopConstraint=_messageTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToMessageConstraint;                          //@synthesize titleToMessageConstraint=_titleToMessageConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageToPhoneNumConstraint;                       //@synthesize messageToPhoneNumConstraint=_messageToPhoneNumConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * phoneNumToCallButtonBottomConstraint;              //@synthesize phoneNumToCallButtonBottomConstraint=_phoneNumToCallButtonBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * phoneNumBottomConstraint;                          //@synthesize phoneNumBottomConstraint=_phoneNumBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * callButtonBottomConstraint;                        //@synthesize callButtonBottomConstraint=_callButtonBottomConstraint - In the implementation block
-(void)setPhoneNumberLabel:(UILabel *)arg1 ;
-(void)setTitleTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageToPhoneNumConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPhoneNumBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleToMessageConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCallButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCallButtonEnabled:(BOOL)arg1 ;
-(UILabel *)phoneNumberLabel;
-(NSLayoutConstraint *)titleTopConstraint;
-(NSLayoutConstraint *)titleTrailingConstraint;
-(NSLayoutConstraint *)phoneNumToCallButtonBottomConstraint;
-(BOOL)callButtonEnabled;
-(void)setCallButton:(UIButton *)arg1 ;
-(void)setPhoneNumToCallButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)phoneNumBottomConstraint;
-(NSLayoutConstraint *)callButtonBottomConstraint;
-(NSLayoutConstraint *)titleToMessageConstraint;
-(UIButton *)callButton;
-(NSLayoutConstraint *)titleLeadingConstraint;
-(NSLayoutConstraint *)messageTopConstraint;
-(NSLayoutConstraint *)messageToPhoneNumConstraint;
-(UIView *)containerView;
-(void)awakeFromNib;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(NSString *)phoneNumber;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(UILabel *)footnoteLabel;
-(NSString *)footnoteText;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setFootnoteText:(NSString *)arg1 ;
@end

