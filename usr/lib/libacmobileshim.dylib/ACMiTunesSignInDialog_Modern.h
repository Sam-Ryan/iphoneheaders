/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMiTunesSignInDialog.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface ACMiTunesSignInDialog_Modern : ACMiTunesSignInDialog <UIAlertViewDelegate> {

	BOOL _isPresented;

}

@property (assign,nonatomic) BOOL isPresented;                      //@synthesize isPresented=_isPresented - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)loadView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)isPresented;
-(BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;
-(void)setIsPresented:(BOOL)arg1 ;
@end

