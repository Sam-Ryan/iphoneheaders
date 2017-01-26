/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class MSCLAccount, MSCLAccountStore, MSCLSettingsTableViewCell, MSCLSettingsTextFieldTableViewCell, UITableView, NSString;

@interface MSCLManageAccountViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	MSCLAccount* _account;
	MSCLAccountStore* _accountStore;
	MSCLSettingsTableViewCell* _deleteAccountButtonCell;
	BOOL _isVerifying;
	MSCLSettingsTextFieldTableViewCell* _passwordCell;
	UITableView* _tableView;
	MSCLSettingsTextFieldTableViewCell* _userNameCell;

}

@property (nonatomic,readonly) MSCLAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) MSCLAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(MSCLAccountStore *)accountStore;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
-(MSCLAccount *)account;
-(void)_textFieldDidChangeNotification:(id)arg1 ;
-(void)_setVerifying:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)_deleteConfirmationMessage;
-(void)_deleteAccount;
-(void)_verifyPassword:(id)arg1 ;
-(void)_finishVerifyWithAccount:(id)arg1 error:(id)arg2 ;
@end

