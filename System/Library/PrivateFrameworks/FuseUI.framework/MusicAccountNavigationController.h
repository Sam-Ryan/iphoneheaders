/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicNavigationController.h>
#import <libobjc.A.dylib/MusicJSAccountNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@class MusicClientContext, NSString, SKUIClientContext;

@interface MusicAccountNavigationController : MusicNavigationController <MusicJSAccountNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming> {

	BOOL _registeredWithModalNavigationStackRegistry;
	MusicClientContext* _clientContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(BOOL)automaticallyInstallAccountBarButtonItem;
+(BOOL)automaticallyInstallSearchBarButtonItem;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)_setRegisteredWithModalNavigationStackRegistry:(BOOL)arg1 ;
-(void)jsAccountNativeViewController:(id)arg1 setAccountDocument:(id)arg2 options:(id)arg3 ;
-(void)jsDidCloseAccountNativeViewController:(id)arg1 ;
@end
