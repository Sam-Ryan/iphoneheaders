/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/_SBFVibrantTableViewCell.h>
#import <SpringBoard/SBDateLabelDelegate.h>
#import <SpringBoard/SBModalLayoutCaching.h>

@protocol NCNotificationDateLabel;
@class UIView, UIImageView, UILabel, UIButton, UIViewController, UIImage, NSString, UIColor;

@interface SBNotificationCell : _SBFVibrantTableViewCell <SBDateLabelDelegate, SBModalLayoutCaching> {

	UIView* _realContentView;
	UIImageView* _iconImageView;
	UILabel* _primaryLabel;
	UILabel* _subtitleLabel;
	UILabel* _secondaryLabel;
	UILabel* _relevanceDateLabel;
	UILabel*<NCNotificationDateLabel> _eventDateLabel;
	UIButton* _actionButton;
	UIImageView* _attachmentView;
	CGSize _attachmentSize;
	long long _layoutMode;
	UIViewController* _secondaryContentViewController;
	BOOL _secondaryTextNumberOfLinesIsUpperBound;
	unsigned long long _secondaryTextNumberOfLines;
	double _secondaryTextHeight;
	UIImage* _icon;

}

@property (nonatomic,readonly) UIView * realContentView;                                     //@synthesize realContentView=_realContentView - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,retain) UIImage * icon;                                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIView * iconView;                                            //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,readonly) UILabel * primaryLabel;                                       //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                     //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * relevanceDateLabel; 
@property (nonatomic,retain) UILabel*<NCNotificationDateLabel> eventDateLabel; 
@property (nonatomic,retain) UIButton * actionButton;                                        //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIViewController * secondaryContentViewController;              //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryTextNumberOfLines;                //@synthesize secondaryTextNumberOfLines=_secondaryTextNumberOfLines - In the implementation block
@property (nonatomic,readonly) BOOL secondaryTextNumberOfLinesIsUpperBound;                  //@synthesize secondaryTextNumberOfLinesIsUpperBound=_secondaryTextNumberOfLinesIsUpperBound - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextColor; 
@property (nonatomic,retain) UIColor * subtitleTextColor; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (nonatomic,retain) UIColor * relevanceDateColor; 
@property (nonatomic,retain) UIColor * eventDateColor; 
@property (assign,nonatomic) double primaryTextAlpha; 
@property (assign,nonatomic) double subtitleTextAlpha; 
@property (assign,nonatomic) double secondaryTextAlpha; 
@property (assign,nonatomic) double relevanceDateAlpha; 
@property (assign,nonatomic) double eventDateAlpha; 
@property (assign,nonatomic) double iconAlpha; 
@property (assign,nonatomic) double attachmentAlpha; 
@property (assign,nonatomic) double secondaryTextHeight;                                     //@synthesize secondaryTextHeight=_secondaryTextHeight - In the implementation block
@property (nonatomic,readonly) UIView * attachmentView;                                      //@synthesize attachmentView=_attachmentView - In the implementation block
@property (nonatomic,readonly) BOOL shouldVerticallyCenterContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long layoutMode;                                           //@synthesize layoutMode=_layoutMode - In the implementation block
+(id)defaultFontForPrimaryText;
+(id)defaultFontForSecondaryText;
+(id)preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 ;
+(id)defaultColorForRelevanceDate;
+(id)defaultFontForRelevanceDate;
+(id)defaultColorForEventDate;
+(id)defaultFontForEventDate;
+(id)defaultColorForPrimaryText;
+(id)defaultFontForSubtitleText;
+(id)defaultColorForSubtitleText;
+(id)defaultColorForSecondaryText;
+(void)setupRelevanceDateLabel:(id)arg1 ;
+(void)setupEventDateLabel:(id)arg1 ;
+(double)contentWidthWithRowWidth:(double)arg1 andAttachmentSize:(CGSize)arg2 forLayoutMode:(long long)arg3 ;
+(double)firstLineBaselineOffsetFromTop;
+(double)firstLineBaselineOffsetFromTopNoIcon;
+(double)actionButtonPaddingLeft;
+(double)paddingBetweenTitleAndRelevanceDate;
+(double)secondLineBaselineOffsetFromFirstLine;
-(void)setLayoutMode:(long long)arg1 ;
-(BOOL)shouldVerticallyCenterContent;
-(void)setSecondaryContentViewController:(UIViewController *)arg1 ;
-(UILabel *)relevanceDateLabel;
-(void)setRelevanceDateLabel:(UILabel *)arg1 ;
-(UILabel*<NCNotificationDateLabel>)eventDateLabel;
-(void)setEventDateLabel:(UILabel*<NCNotificationDateLabel>)arg1 ;
-(void)setSecondaryTextNumberOfLines:(unsigned long long)arg1 treatAsUpperBound:(BOOL)arg2 ;
-(UIColor *)relevanceDateColor;
-(void)setRelevanceDateColor:(UIColor *)arg1 ;
-(UIColor *)eventDateColor;
-(void)setEventDateColor:(UIColor *)arg1 ;
-(void)setAttachmentImage:(id)arg1 ;
-(double)primaryTextAlpha;
-(void)setPrimaryTextAlpha:(double)arg1 ;
-(double)subtitleTextAlpha;
-(void)setSubtitleTextAlpha:(double)arg1 ;
-(double)secondaryTextAlpha;
-(void)setSecondaryTextAlpha:(double)arg1 ;
-(double)relevanceDateAlpha;
-(void)setRelevanceDateAlpha:(double)arg1 ;
-(double)eventDateAlpha;
-(void)setEventDateAlpha:(double)arg1 ;
-(double)iconAlpha;
-(void)setIconAlpha:(double)arg1 ;
-(double)attachmentAlpha;
-(void)setAttachmentAlpha:(double)arg1 ;
-(unsigned long long)secondaryTextNumberOfLines;
-(BOOL)secondaryTextNumberOfLinesIsUpperBound;
-(UIView *)realContentView;
-(UILabel *)primaryLabel;
-(double)secondaryTextHeight;
-(void)setSecondaryTextHeight:(double)arg1 ;
-(UIViewController *)secondaryContentViewController;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setIcon:(UIImage *)arg1 ;
-(UILabel *)secondaryLabel;
-(UIImage *)icon;
-(UIView *)iconView;
-(NSString *)secondaryText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)dateLabelDidChange:(id)arg1 ;
-(UIButton *)actionButton;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(CGRect)contentBounds;
-(UIColor *)subtitleTextColor;
-(void)setSubtitleTextColor:(UIColor *)arg1 ;
-(UIView *)attachmentView;
-(void)setActionButton:(UIButton *)arg1 ;
-(long long)layoutMode;
-(NSString *)primaryText;
@end

