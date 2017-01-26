/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBBannerGestureHandlerDelegate;
#import <SpringBoard/SpringBoard-Structs.h>
@class SBBannerContainerViewController, SBBannerController, SBBannerContextView;

@interface SBBannerGestureHandler : NSObject {

	id<SBBannerGestureHandlerDelegate> _delegate;
	SBBannerContainerViewController* _bannerViewController;
	SBBannerController* _bannerController;

}

@property (assign,nonatomic,__weak) id<SBBannerGestureHandlerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBBannerContextView * bannerView; 
@property (nonatomic,readonly) SBBannerContainerViewController * bannerViewController;              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (nonatomic,__weak,readonly) SBBannerController * bannerController;                        //@synthesize bannerController=_bannerController - In the implementation block
+(id)notificationCenterHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
+(id)pullDownHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerController *)bannerController;
-(BOOL)handleGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5 ;
-(id)initWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerContainerViewController *)bannerViewController;
-(void)setDelegate:(id<SBBannerGestureHandlerDelegate>)arg1 ;
-(id<SBBannerGestureHandlerDelegate>)delegate;
-(void)invalidate;
-(SBBannerContextView *)bannerView;
@end

