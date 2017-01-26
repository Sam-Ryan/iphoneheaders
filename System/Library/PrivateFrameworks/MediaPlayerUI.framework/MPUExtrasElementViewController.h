/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MPUExtrasBackgroundViewController, NSMapTable;

@interface MPUExtrasElementViewController : UIViewController {

	MPUExtrasBackgroundViewController* _backgroundViewController;
	NSMapTable* _bannerButtonMap;
	BOOL _wide;

}

@property (assign,getter=isWide,nonatomic) BOOL wide;              //@synthesize wide=_wide - In the implementation block
+(id)_borderView;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_startBackgroundAudio;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(void)_prepareLayout;
-(id)backgroundViewController;
-(BOOL)isWide;
-(unsigned long long)extrasSize;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_didActivateButtonWithItem:(id)arg1 ;
-(id)_installBackdrop:(id)arg1 ;
-(void)setWide:(BOOL)arg1 ;
@end

