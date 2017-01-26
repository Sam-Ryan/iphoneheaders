/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@protocol ADPrerollTopBarDelegate;
@class UIStatusBar, ADPrerollButton, ADProgressView;

@interface ADPrerollTopBar : UIView {

	id<ADPrerollTopBarDelegate> _delegate;
	BOOL _isFullscreen;
	BOOL _layoutForExpandedSize;
	UIStatusBar* _statusBar;
	ADPrerollButton* _doneButton;
	ADProgressView* _progressView;
	ADPrerollButton* _scaleToFillButton;

}

@property (assign,nonatomic,__weak) id<ADPrerollTopBarDelegate> delegate; 
@property (assign,nonatomic) BOOL isFullscreen;                                        //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) BOOL layoutForExpandedSize;                               //@synthesize layoutForExpandedSize=_layoutForExpandedSize - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                  //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) ADPrerollButton * doneButton;                             //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) ADProgressView * progressView;                            //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) ADPrerollButton * scaleToFillButton;                      //@synthesize scaleToFillButton=_scaleToFillButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ADPrerollTopBarDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<ADPrerollTopBarDelegate>)delegate;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(void)setProgressView:(ADProgressView *)arg1 ;
-(ADProgressView *)progressView;
-(void)setDoneButton:(ADPrerollButton *)arg1 ;
-(ADPrerollButton *)doneButton;
-(BOOL)isFullscreen;
-(void)_doneButtonTapped:(id)arg1 ;
-(double)requiredHeight;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
-(void)setScaleToFillButton:(ADPrerollButton *)arg1 ;
-(ADPrerollButton *)scaleToFillButton;
-(void)_scaleToFillButtonTapped:(id)arg1 ;
-(void)_scaleToFitButtonTapped:(id)arg1 ;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)setLayoutForExpandedSize:(BOOL)arg1 ;
-(BOOL)layoutForExpandedSize;
@end

