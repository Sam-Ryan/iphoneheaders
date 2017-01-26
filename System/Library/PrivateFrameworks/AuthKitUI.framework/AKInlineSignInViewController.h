/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol AKInlineSignInViewControllerDelegate;
@class AKAppleIDAuthenticationController, NSString, AKAppleIDAuthenticationInAppContext, UIView, AKTextField, UIButton, UIActivityIndicatorView;

@interface AKInlineSignInViewController : UIViewController <UITextFieldDelegate> {

	BOOL _usesDarkMode;
	BOOL _isAuthInProgress;
	BOOL _usesVibrancy;
	long long _blurEffectStyle;
	AKAppleIDAuthenticationController* _authenticationController;
	NSString* _secondaryButtonTitle;
	NSString* _tertiaryButtonTitle;
	AKAppleIDAuthenticationInAppContext* _context;
	BOOL _wantsAuthenticationProgress;
	NSString* _primaryButtonTitle;
	id<AKInlineSignInViewControllerDelegate> _delegate;
	UIView* _loginFieldsContainer;
	AKTextField* _appleIDField;
	AKTextField* _passwordField;
	UIButton* _signInButton;
	UIButton* _iforgotButton;
	UIButton* _createAppleIDButton;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic) long long blurEffectStyle; 
@property (assign,nonatomic) BOOL usesVibrancy; 
@property (assign,nonatomic) BOOL usesDarkMode; 
@property (readonly) NSString * primaryButtonTitle;                                             //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (copy) NSString * secondaryButtonTitle; 
@property (copy) NSString * tertiaryButtonTitle; 
@property (assign) BOOL wantsAuthenticationProgress;                                            //@synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress - In the implementation block
@property (retain) AKAppleIDAuthenticationInAppContext * context; 
@property (__weak) id<AKInlineSignInViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) AKAppleIDAuthenticationController * authenticationController; 
@property (retain) UIView * loginFieldsContainer;                                               //@synthesize loginFieldsContainer=_loginFieldsContainer - In the implementation block
@property (retain) AKTextField * appleIDField;                                                  //@synthesize appleIDField=_appleIDField - In the implementation block
@property (retain) AKTextField * passwordField;                                                 //@synthesize passwordField=_passwordField - In the implementation block
@property (retain) UIButton * signInButton;                                                     //@synthesize signInButton=_signInButton - In the implementation block
@property (retain) UIButton * iforgotButton;                                                    //@synthesize iforgotButton=_iforgotButton - In the implementation block
@property (retain) UIButton * createAppleIDButton;                                              //@synthesize createAppleIDButton=_createAppleIDButton - In the implementation block
@property (retain) UIActivityIndicatorView * spinner;                                           //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)usesDarkMode;
-(void)setUsesDarkMode:(BOOL)arg1 ;
-(void)setDelegate:(id<AKInlineSignInViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AKInlineSignInViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(AKTextField *)passwordField;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(AKAppleIDAuthenticationController *)authenticationController;
-(void)_updateFonts:(id)arg1 ;
-(UIButton *)iforgotButton;
-(void)iForgotButtonWasTapped:(id)arg1 ;
-(UIButton *)createAppleIDButton;
-(void)createAppleIDButtonWasTapped:(id)arg1 ;
-(void)_prefillAuthFields;
-(void)_updateSignInFieldStatuses;
-(void)signInButtonWasTapped:(id)arg1 ;
-(AKTextField *)appleIDField;
-(void)_appleIDTextFieldDidChange:(id)arg1 ;
-(void)_passwordTextFieldDidChange:(id)arg1 ;
-(void)_updateSignInButtonState;
-(void)_updateVibrancyAndBlurInTextFields;
-(BOOL)_isAccountModificationRestricted;
-(BOOL)_isSignInAllowed;
-(void)setUsesVibrancy:(BOOL)arg1 ;
-(void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1 ;
-(BOOL)_canBeginAuthenticationWithOption:(unsigned long long)arg1 ;
-(void)_startBusyWorkUI;
-(void)_hidebusyWorkUI;
-(void)provideDelegateWithAuthResults:(id)arg1 error:(id)arg2 ;
-(BOOL)wantsAuthenticationProgress;
-(NSString *)secondaryButtonTitle;
-(void)setSecondaryButtonTitle:(NSString *)arg1 ;
-(NSString *)tertiaryButtonTitle;
-(void)setTertiaryButtonTitle:(NSString *)arg1 ;
-(void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)usesVibrancy;
-(NSString *)primaryButtonTitle;
-(void)setWantsAuthenticationProgress:(BOOL)arg1 ;
-(UIView *)loginFieldsContainer;
-(void)setLoginFieldsContainer:(UIView *)arg1 ;
-(void)setAppleIDField:(AKTextField *)arg1 ;
-(void)setIforgotButton:(UIButton *)arg1 ;
-(void)setCreateAppleIDButton:(UIButton *)arg1 ;
-(UIButton *)signInButton;
-(void)setPasswordField:(AKTextField *)arg1 ;
-(void)setSignInButton:(UIButton *)arg1 ;
@end

