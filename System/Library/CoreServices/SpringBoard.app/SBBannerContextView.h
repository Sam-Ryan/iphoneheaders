/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBUIBannerView.h>
#import <SpringBoard/SBVibrantBannerView.h>

@protocol SBUIBannerView;
@class _UIBackdropView, UIImageView, UIView, SBNotificationSeparatorView, SBUIBannerContext, SBBannerViewCallbackManager, UIImage, NSString;

@interface SBBannerContextView : UIView <SBUIBannerView, SBVibrantBannerView> {

	_UIBackdropView* _backdropView;
	UIImageView* _backgroundImageView;
	UIView* _contentContainerView;
	UIView*<SBUIBannerView> _contentView;
	UIView* _accessoryView;
	UIView* _pullDownView;
	UIView* _pullDownContainerView;
	UIView* _secondaryContentView;
	SBNotificationSeparatorView* _separatorView;
	UIView* _highlightView;
	SBUIBannerContext* _context;
	SBBannerViewCallbackManager* _callbacks;
	SBBannerViewCallbackManager* _wrapperCallbacks;
	BOOL _isDismissing;
	CGSize _grabberSize;
	UIView* _grabberView;
	BOOL _hidesGrabberOnPullDown;
	double _minimumHeight;
	struct {
		unsigned providesDefaultElementColors : 1;
		unsigned supportsElementColors : 1;
	}  _contentViewFlags;
	BOOL _grabberVisible;
	BOOL _separatorVisible;
	BOOL _highlighted;
	double _maximumHeight;
	double _pullDownViewHeight;
	double _pullDownBottomOverhangHeight;

}

@property (nonatomic,readonly) _UIBackdropView * backdrop; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (getter=isDismissing,nonatomic,readonly) BOOL dismissing;              //@synthesize isDismissing=_isDismissing - In the implementation block
@property (assign,nonatomic) double maximumHeight;                               //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) BOOL grabberVisible;                                //@synthesize grabberVisible=_grabberVisible - In the implementation block
@property (assign,nonatomic) BOOL separatorVisible;                              //@synthesize separatorVisible=_separatorVisible - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                   //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIView * pullDownView;                              //@synthesize pullDownView=_pullDownView - In the implementation block
@property (assign,nonatomic) double pullDownViewHeight;                          //@synthesize pullDownViewHeight=_pullDownViewHeight - In the implementation block
@property (assign,nonatomic) double pullDownBottomOverhangHeight;                //@synthesize pullDownBottomOverhangHeight=_pullDownBottomOverhangHeight - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIView * secondaryContentView;                      //@synthesize secondaryContentView=_secondaryContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultColorForElement:(long long)arg1 ;
+(id)_defaultGrabberColor;
+(id)_defaultButtonColor;
+(id)_defaultButtonTextColor;
-(id)bannerContext;
-(id)colorForElement:(long long)arg1 ;
-(id)defaultColorForElement:(long long)arg1 ;
-(void)setColor:(id)arg1 forElement:(long long)arg2 ;
-(BOOL)_canPullDown;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(BOOL)isPulledDown;
-(BOOL)isDismissing;
-(void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 ;
-(void)setSeparatorVisible:(BOOL)arg1 ;
-(double)percentPulledDown;
-(void)setPullDownViewHeight:(double)arg1 ;
-(void)setPullDownView:(UIView *)arg1 ;
-(void)setPullDownBottomOverhangHeight:(double)arg1 ;
-(void)setSecondaryContentView:(UIView *)arg1 ;
-(void)replacePullDownViewWithView:(id)arg1 animated:(BOOL)arg2 ;
-(id)_lazyHighlightView;
-(id)_grabberColor;
-(void)_layoutBackgroundView;
-(BOOL)shouldBorrowScreen;
-(id)initWithFrame:(CGRect)arg1 backdropStyle:(long long)arg2 ;
-(void)setGrabberVisible:(BOOL)arg1 ;
-(id)_newGrabberView:(BOOL)arg1 ;
-(void)_layoutContentContainerView;
-(UIView *)secondaryContentView;
-(CGRect)_centeredBoundsForRect:(CGRect)arg1 ;
-(CGSize)_contentSizeThatFits:(CGSize)arg1 ;
-(id)_vibrantContentView;
-(void)_setGrabberColor:(id)arg1 ;
-(void)_layoutPullDownContainerView;
-(void)_layoutBackdropView;
-(void)_layoutGrabber;
-(void)_layoutSeparatorView;
-(void)_updateContentAlpha;
-(CGRect)_centeredBounds;
-(void)_layoutAccessoryView;
-(void)_layoutContentView;
-(double)_pullDownContentAlpha;
-(double)_grabberAlpha;
-(BOOL)grabberVisible;
-(BOOL)separatorVisible;
-(UIView *)pullDownView;
-(double)pullDownViewHeight;
-(double)pullDownBottomOverhangHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)backgroundImage;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(BOOL)highlighted;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(_UIBackdropView *)backdrop;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)_updateHighlightView;
-(double)minimumHeight;
@end

