/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>
#import <MapsLockScreen/MainChromeViewControllerBackdropLightness.h>

@protocol TopBarAlertViewDelegate;
@class UILabel, TopBarAlertButton, UIView, NSMutableArray, NSString, UITapGestureRecognizer;

@interface TopBarAlertView : UIView <MainChromeViewControllerBackdropLightness> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	TopBarAlertButton* _button;
	UIView* _buttonHairline;
	NSMutableArray* _layoutConstraints;
	BOOL _reallyUseWideLayout;
	BOOL _suppressInteractivity;
	BOOL _darkUI;
	BOOL _focusMode;
	BOOL _needsExtraTopPadding;
	BOOL _useWideLayoutWhenPossible;
	BOOL _buttonOnLeft;
	id<TopBarAlertViewDelegate> _delegate;
	NSString* _title;
	NSString* _subtitle;
	NSString* _buttonTitle;
	id _userInfo;
	double _preferredLayoutWidth;
	UITapGestureRecognizer* _tapGestureRecognizer;
	SCD_Struct_To10 _topBarAlertViewMetrics;

}

@property (assign,nonatomic,__weak) id<TopBarAlertViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * buttonTitle;                                       //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,retain) id userInfo;                                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) double preferredLayoutWidth;                                  //@synthesize preferredLayoutWidth=_preferredLayoutWidth - In the implementation block
@property (assign,nonatomic) BOOL suppressInteractivity;                                   //@synthesize suppressInteractivity=_suppressInteractivity - In the implementation block
@property (assign,nonatomic) SCD_Struct_To11 topBarAlertViewMetrics;                       //@synthesize topBarAlertViewMetrics=_topBarAlertViewMetrics - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
@property (assign,getter=isDarkUI,nonatomic) BOOL darkUI;                                  //@synthesize darkUI=_darkUI - In the implementation block
@property (assign,getter=isFocusMode,nonatomic) BOOL focusMode;                            //@synthesize focusMode=_focusMode - In the implementation block
@property (assign,getter=isButtonOnLeft,nonatomic) BOOL buttonOnLeft;                      //@synthesize buttonOnLeft=_buttonOnLeft - In the implementation block
@property (assign,nonatomic) BOOL needsExtraTopPadding;                                    //@synthesize needsExtraTopPadding=_needsExtraTopPadding - In the implementation block
@property (assign,nonatomic) BOOL useWideLayoutWhenPossible;                               //@synthesize useWideLayoutWhenPossible=_useWideLayoutWhenPossible - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUseWideLayoutWhenPossible:(BOOL)arg1 ;
-(double)preferredLayoutWidth;
-(BOOL)suppressInteractivity;
-(BOOL)useWideLayoutWhenPossible;
-(BOOL)needsExtraTopPadding;
-(void)setBackdropLightness:(long long)arg1 animation:(id)arg2 ;
-(void)setButtonTitleFont:(id)arg1 ;
-(void)_resetConstraints;
-(void)setSuppressInteractivity:(BOOL)arg1 ;
-(void)setNeedsExtraTopPadding:(BOOL)arg1 ;
-(id)_subtitleFontOfSize:(double)arg1 ;
-(void)setPreferredLayoutWidth:(double)arg1 ;
-(double)_topBaselineMargin;
-(void)_updateLabel:(id)arg1 toFitWidth:(double)arg2 ;
-(void)updateForDarkUI:(BOOL)arg1 ;
-(UIEdgeInsets)_minButtonMargins;
-(void)setTopBarAlertViewMetrics:(SCD_Struct_To11)arg1 ;
-(SCD_Struct_To11)topBarAlertViewMetrics;
-(void)_setDefaultStyles;
-(void)setButtonOnLeft:(BOOL)arg1 ;
-(void)setButtonBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFitsWidth:(double)arg1 ;
-(void)setButtonHighlightColor:(id)arg1 ;
-(id)_titleFontOfSize:(double)arg1 ;
-(double)_oneLineWidthWithText:(id)arg1 font:(id)arg2 ;
-(double)_labelTrailingMargin;
-(void)setButtonTintColor:(id)arg1 ;
-(BOOL)isButtonOnLeft;
-(double)_bottomBaselineMargin;
-(void)setButtonBorderColor:(id)arg1 ;
-(BOOL)isDarkUI;
-(BOOL)isFocusMode;
-(id)_makeLabel;
-(void)setDarkUI:(BOOL)arg1 ;
-(double)_maxLabelWidthForAvailableWidth:(double)arg1 ;
-(BOOL)_canUseWideLayoutWithMaxLabelWidth:(double)arg1 ;
-(BOOL)_labelsFitInWideLayoutWithWidth:(double)arg1 ;
-(double)_bottomBaselineMarginUsingWideLayout:(BOOL)arg1 ;
-(id)_fontToFitLabelWidth:(double)arg1 withText:(id)arg2 startingWithFont:(id)arg3 stepDownFontSize:(double)arg4 minFontSize:(double)arg5 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 delegate:(id)arg4 userInfo:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TopBarAlertViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<TopBarAlertViewDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(id)userInfo;
-(void)setTextColor:(id)arg1 ;
-(id)preferredFocusedView;
-(CGSize)intrinsicContentSize;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(void)_buttonTapped:(id)arg1 ;
-(void)_refresh;
-(void)setSubtitleFont:(id)arg1 ;
-(void)setTitleFont:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setSubtitleTextColor:(id)arg1 ;
-(void)setFocusMode:(BOOL)arg1 ;
-(void)setTitleTextColor:(id)arg1 ;
@end

