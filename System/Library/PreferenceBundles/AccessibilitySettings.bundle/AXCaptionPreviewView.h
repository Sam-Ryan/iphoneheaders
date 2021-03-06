/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIControl.h>

@protocol AXCaptionPreviewDelegate;
@class UIView, AXCaptionSubtitlePreviewView, UIButton, UIImageView, NSTimer, UIImage, AXThreadTimer;

@interface AXCaptionPreviewView : UIControl {

	UIView* _whiteBottomBorder;
	AXCaptionSubtitlePreviewView* _subtitle;
	UIButton* _expandCollapseButton;
	BOOL _isExpanded;
	UIView* _cloudContainer;
	UIImageView* _cloudView1;
	UIImageView* _cloudView2;
	NSTimer* _cloudTimer;
	long long _cloudIndex;
	long long _viewIndex;
	double _movementEndTime;
	BOOL _animationsRunning;
	BOOL _fadeInProgress;
	BOOL _cloud1MoveInProgress;
	BOOL _cloud2MoveInProgress;
	UIImage* _contractImage;
	UIImage* _contractPressedImage;
	UIImage* _expandImage;
	UIImage* _expandPressedImage;
	AXThreadTimer* _updateSettingsTimer;
	BOOL transitioningToSmallerView;
	BOOL transitioningToBiggerView;
	id<AXCaptionPreviewDelegate> previewDelegate;
	CGPoint originalCenter;
	CGRect visibleFrame;
	CGRect originalFrame;

}

@property (assign,nonatomic) id<AXCaptionPreviewDelegate> previewDelegate; 
@property (assign,nonatomic) CGRect originalFrame; 
@property (assign,nonatomic) CGPoint originalCenter; 
@property (nonatomic,readonly) CGRect visibleFrame; 
@property (assign,nonatomic) BOOL isExpanded;                                           //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) BOOL transitioningToSmallerView; 
@property (assign,nonatomic) BOOL transitioningToBiggerView; 
-(void)_previewTapped:(id)arg1 ;
-(BOOL)inTable;
-(id)cloudImages;
-(BOOL)transitioningToSmallerView;
-(void)setTransitioningToSmallerView:(BOOL)arg1 ;
-(void)setOriginalFrame:(CGRect)arg1 ;
-(void)_expandPressed:(id)arg1 ;
-(void)_updateSubtitle:(id)arg1 ;
-(void)updateExpandButtonPosition;
-(void)stopBackgroundAnimation;
-(id)captionCell;
-(double)_xOffset;
-(BOOL)transitioningToBiggerView;
-(void)setTransitioningToBiggerView:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(CGRect)visibleFrame;
-(void)showNextImage;
-(id)nextSlide;
-(id)currentSlide;
-(id<AXCaptionPreviewDelegate>)previewDelegate;
-(void)setPreviewDelegate:(id<AXCaptionPreviewDelegate>)arg1 ;
-(CGPoint)originalCenter;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(CGRect)originalFrame;
-(void)_updateButtonStyle;
@end

