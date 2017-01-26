/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <libobjc.A.dylib/DAValidityCheckConsumer.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class DAAccount, NSString;

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate> {

	DAAccount* _account;
	BOOL _didSetFullHostURL;
	BOOL _needsSave;
	BOOL _attemptedValidation;
	BOOL _isSettingUpNewAccount;
	BOOL _accountNeedsAdd;
	BOOL _validatedSuccessfully;
	BOOL _confirmedUnvalidatedAccount;
	BOOL _haveRegisteredForAccountsChanged;
	BOOL _transitioningToFinishedAccountSetup;

}

@property (assign,nonatomic) BOOL didSetFullHostURL;                                //@synthesize didSetFullHostURL=_didSetFullHostURL - In the implementation block
@property (assign,nonatomic) BOOL needsSave;                                        //@synthesize needsSave=_needsSave - In the implementation block
@property (assign,nonatomic) BOOL attemptedValidation;                              //@synthesize attemptedValidation=_attemptedValidation - In the implementation block
@property (nonatomic,retain) DAAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL isSettingUpNewAccount;                            //@synthesize isSettingUpNewAccount=_isSettingUpNewAccount - In the implementation block
@property (assign,nonatomic) BOOL accountNeedsAdd;                                  //@synthesize accountNeedsAdd=_accountNeedsAdd - In the implementation block
@property (assign,nonatomic) BOOL validatedSuccessfully;                            //@synthesize validatedSuccessfully=_validatedSuccessfully - In the implementation block
@property (assign,nonatomic) BOOL confirmedUnvalidatedAccount;                      //@synthesize confirmedUnvalidatedAccount=_confirmedUnvalidatedAccount - In the implementation block
@property (assign,nonatomic) BOOL haveRegisteredForAccountsChanged;                 //@synthesize haveRegisteredForAccountsChanged=_haveRegisteredForAccountsChanged - In the implementation block
@property (assign,nonatomic) BOOL transitioningToFinishedAccountSetup;              //@synthesize transitioningToFinishedAccountSetup=_transitioningToFinishedAccountSetup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)needsSave;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setNeedsSave:(BOOL)arg1 ;
-(void)updateDoneButton;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(DAAccount *)account;
-(void)setAccount:(DAAccount *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)accountFromSpecifier;
-(void)reloadAccount;
-(void)setIsSettingUpNewAccount:(BOOL)arg1 ;
-(BOOL)haveRegisteredForAccountsChanged;
-(void)setHaveRegisteredForAccountsChanged:(BOOL)arg1 ;
-(void)didConfirmTryWithoutSSL:(BOOL)arg1 ;
-(void)_beginAccountValidation;
-(void)setConfirmedUnvalidatedAccount:(BOOL)arg1 ;
-(void)didConfirmSaveUnvalidatedAccount:(BOOL)arg1 ;
-(BOOL)validatedSuccessfully;
-(BOOL)confirmedUnvalidatedAccount;
-(BOOL)dismissesAfterInitialSetup;
-(void)setTransitioningToFinishedAccountSetup:(BOOL)arg1 ;
-(BOOL)attemptedValidation;
-(void)_confirmSaveUnvalidatedAccount;
-(void)_saveAccountDismissWhenDone:(BOOL)arg1 ;
-(BOOL)transitioningToFinishedAccountSetup;
-(void)setDidSetFullHostURL:(BOOL)arg1 ;
-(BOOL)didSetFullHostURL;
-(void)setHostString:(id)arg1 ;
-(void)_dismissAndUpdateParent;
-(void)_finishSaveAccountDismissWhenDone:(BOOL)arg1 ;
-(BOOL)isRunningFromMobileMailApp;
-(id)daAccountWithBackingAccountInfo:(id)arg1 ;
-(void)showSSLFailureView;
-(void)deleteAccountButtonTapped;
-(id)accountSpecifiers;
-(void)_deleteAccount;
-(id)specifiers;
-(id)lastGroupSpecifierInSpecifiers:(id)arg1 ;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)setNeedsSaveAndValidation:(BOOL)arg1 ;
-(BOOL)isSettingUpNewAccount;
-(id)localizedAccountTitleString;
-(BOOL)accountNeedsAdd;
-(void)showIdenticalAccountFailureView;
-(void)setAttemptedValidation:(BOOL)arg1 ;
-(void)setAccountNeedsAdd:(BOOL)arg1 ;
-(void)setValidatedSuccessfully:(BOOL)arg1 ;
-(void)hideProgressWithPrompt:(id)arg1 ;
-(int)indexOfCurrentlyEditingCell;
-(id)currentlyEditingCell;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(BOOL)transitionsAfterInitialSetup;
-(id)_defaultAccountDescription;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)propertyValueChanged:(id)arg1 ;
-(BOOL)validateAccount;
-(BOOL)haveEnoughValues;
-(void)finishedAccountSetup;
@end

