/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface ACMDialog : UIViewController {

	long long _savedStatusBarStyle;

}

@property (readonly) long long statusBarStyle; 
@property (assign) long long savedStatusBarStyle;                 //@synthesize savedStatusBarStyle=_savedStatusBarStyle - In the implementation block
@property (readonly) NSString * backgroundImageName; 
+(id)dialog;
-(void)dealloc;
-(id)init;
-(long long)statusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)modalTransitionStyle;
-(NSString *)backgroundImageName;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)setSavedStatusBarStyle:(long long)arg1 ;
-(long long)savedStatusBarStyle;
-(void)disableControls:(BOOL)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldManuallyChangeStatusBarStyle;
@end

