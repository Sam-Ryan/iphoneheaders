/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>
#import <libobjc.A.dylib/SKUINavigationBarDisplayConfiguring.h>

@protocol MusicClientContextConsumingSKUINavigationBarDisplayConfiguring;
@class UIViewController, NSString;

@interface MusicProductTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring> {

	UIViewController*<MusicClientContextConsuming>*<SKUINavigationBarDisplayConfiguring> _productViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)previewMenuItems;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)setClientContext:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(BOOL)managesNavigationBarContents;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(long long)navigationBarTintAdjustmentMode;
-(id)navigationBarTitleTextTintColor;
-(id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2 ;
@end
