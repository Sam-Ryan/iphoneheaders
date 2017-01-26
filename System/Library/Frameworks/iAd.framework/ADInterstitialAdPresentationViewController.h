/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewController.h>

@class ADInterstitialAd, ADCountdownButton;

@interface ADInterstitialAdPresentationViewController : UIViewController {

	ADInterstitialAd* _interstitialAd;
	ADCountdownButton* _closeButton;

}

@property (nonatomic,__weak,readonly) ADInterstitialAd * interstitialAd; 
@property (nonatomic,retain) ADCountdownButton * closeButton;                         //@synthesize closeButton=_closeButton - In the implementation block
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(ADCountdownButton *)closeButton;
-(void)setCloseButton:(ADCountdownButton *)arg1 ;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
@end
