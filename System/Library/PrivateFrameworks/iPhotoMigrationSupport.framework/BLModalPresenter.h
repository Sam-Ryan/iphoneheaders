/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iPhotoMigrationSupport/iPhotoMigrationSupport-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIKeyInput.h>

@class BLModalPresenterRootViewController, NSMutableArray, NSString;

@interface BLModalPresenter : UIWindow <UIKeyInput> {

	BLModalPresenterRootViewController* _rootViewController;
	NSMutableArray* _controllers;
	CGRect _keyboard;
	long long _lockCount;
	BOOL _keyboardVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
+(id)presenter;
-(void)dealloc;
-(id)init;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)keyboardDidShow:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)keyboardVisible;
-(id)hidden;
-(void)showController:(id)arg1 ;
-(void)orientationWillChange:(id)arg1 ;
-(void)configureForOncreen:(id)arg1 orientation:(long long)arg2 ;
-(void)layoutForOrientation:(long long)arg1 ;
-(CGSize)formSheetSizeForController:(id)arg1 withOrientation:(long long)arg2 ;
-(void)showController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)configureForOffscreen:(id)arg1 orientation:(long long)arg2 ;
-(void)lockKeyboard;
-(void)unlockKeyboard;
-(void)hideController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)orientationDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

