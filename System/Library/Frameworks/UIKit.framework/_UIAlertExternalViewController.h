/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, NSMutableArray, UIAlertView;

@interface _UIAlertExternalViewController : UIViewController {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSMutableArray* _buttons;
	UIAlertView* _representedAlert;

}

@property (assign,nonatomic) UIAlertView * representedAlert;              //@synthesize representedAlert=_representedAlert - In the implementation block
-(void)dealloc;
-(id)init;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)_titleAttributedString;
-(id)_messageAttributedString;
-(id)_textAttributes;
-(UIAlertView *)representedAlert;
-(id)_titleAttributes;
-(id)_messageAttributes;
-(id)_messageAttributesSmallText;
-(void)_buttonTapped:(id)arg1 ;
-(void)_dismissIfCapable;
-(id)_buttonWithTitle:(id)arg1 index:(long long)arg2 ;
-(id)_messageAttributedStringSmallText;
-(void)setRepresentedAlert:(UIAlertView *)arg1 ;
@end

