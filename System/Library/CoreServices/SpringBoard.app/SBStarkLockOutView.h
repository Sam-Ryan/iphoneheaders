/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBStarkSessionConfiguring;
@class UILabel, UIImageView, UIButton, UITapGestureRecognizer, NSArray;

@interface SBStarkLockOutView : UIView {

	id<SBStarkSessionConfiguring> _configuration;
	UILabel* _titleLabel;
	double _titleAscender;
	double _titleDescender;
	UIImageView* _imageView;
	CGSize _imageSize;
	UILabel* _messageLabel;
	double _messageAscender;
	double _messageDescender;
	UIButton* _backToOEMButton;
	UITapGestureRecognizer* _backToOEMGestureRecognizer;
	NSArray* _baselineSeparations;

}

@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIButton * backToOEMButton;              //@synthesize backToOEMButton=_backToOEMButton - In the implementation block
-(id)_titleFontOfSize:(double)arg1 ;
-(id)_messageFontOfSize:(double)arg1 ;
-(void)_backToOEM;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 title:(id)arg3 image:(id)arg4 message:(id)arg5 baselineSeparations:(id)arg6 ;
-(void)_sizeTitleToFitInFrame:(CGRect)arg1 ;
-(void)_sizeMessageToFitInFrame:(CGRect)arg1 ;
-(UIButton *)backToOEMButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusedItem;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(UIImageView *)imageView;
@end

