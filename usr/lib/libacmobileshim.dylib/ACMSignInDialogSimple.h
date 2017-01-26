/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMSignInDialog.h>
#import <libobjc.A.dylib/ACMSignInDialogSimpleProtocol.h>

@class UIImage, UIColor, NSString, UIButton, UITextView, UIView;

@interface ACMSignInDialogSimple : ACMSignInDialog <ACMSignInDialogSimpleProtocol> {

	UIButton* _loginButton;
	UIButton* _cancelButton;
	UIImage* _logo;
	UITextView* _licenseTextField;
	UIColor* _backgroundColor;
	NSString* _accountNameFieldPlaceholder;
	UIView* _backgroudView;
	UIColor* _licenseTextColor;

}

@property (retain) UIColor * licenseTextColor;                                    //@synthesize licenseTextColor=_licenseTextColor - In the implementation block
@property (nonatomic,retain) UIView * backgroudView;                              //@synthesize backgroudView=_backgroudView - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalShift; 
@property (nonatomic,readonly) UIButton * loginButton;                            //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@property (nonatomic,retain) UIImage * logo;                                      //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder;              //@synthesize accountNameFieldPlaceholder=_accountNameFieldPlaceholder - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(long long)statusBarStyle;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(UIButton *)cancelButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)passwordString;
-(void)focus;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(void)checkFields;
-(void)setAccountNameFieldPlaceholder:(NSString *)arg1 ;
-(UIButton *)loginButton;
-(void)disableControls:(BOOL)arg1 ;
-(NSString *)accountNameFieldPlaceholder;
-(NSString *)userNameString;
-(unsigned long long)verticalShift;
-(UIView *)backgroudView;
-(void)setBackgroudView:(UIView *)arg1 ;
-(UIColor *)licenseTextColor;
-(void)setLicenseTextColor:(UIColor *)arg1 ;
@end

