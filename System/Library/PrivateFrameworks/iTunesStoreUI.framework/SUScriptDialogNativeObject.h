/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface SUScriptDialogNativeObject : SUScriptNativeObject <UIActionSheetDelegate, UIAlertViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)dismiss;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)destroyNativeObject;
-(void)showSheet;
-(void)showSheetInViewController:(id)arg1 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_addScriptButton:(id)arg1 toAlert:(id)arg2 atIndex:(long long)arg3 ;
-(id)_newActionSheetForDialog:(id)arg1 ;
-(void)_tearDownForDismissWithButtonIndex:(long long)arg1 ;
@end
