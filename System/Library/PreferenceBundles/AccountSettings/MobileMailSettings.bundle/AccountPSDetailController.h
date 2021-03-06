/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailSettings/MobileMailSettings-Structs.h>
#import <MobileMailSettings/AccountPSDetailControllerBase.h>
#import <libobjc.A.dylib/EmailAliasListControllerDataSource.h>

@class NSMutableDictionary, MailAccount, NSString, DeliveryAccount, NSDictionary, NSArray, UISegmentedControl, PSSpecifier, UITextField, EmailAliasListController;

@interface AccountPSDetailController : AccountPSDetailControllerBase <EmailAliasListControllerDataSource> {

	NSMutableDictionary* _outgoingAccountValues;
	NSMutableDictionary* _outgoingAccountValuesAfterFailedValidation;
	MailAccount* _candidateIncomingAccount;
	NSString* _chosenType;
	MailAccount* _alternateEmailIncomingAccount;
	DeliveryAccount* _alternateEmailDeliveryAccount;
	BOOL _usingAlternateEmailAccount;
	CFDictionaryRef _editableSuffixes;
	MailAccount* _existingIncomingAccount;
	MailAccount* _easySetupAccount;
	DeliveryAccount* _easySetupDeliveryAccount;
	NSDictionary* _easySetupNotes;
	int _easySetupResult;
	NSArray* _easySetupAccountTypes;
	UISegmentedControl* _accountTypeSegmentedControl;
	PSSpecifier* _passwordSpecifier;
	UITextField* _usernameField;
	unsigned _isShowingEasySetup : 1;
	unsigned _isShowingEasySetupNote : 1;
	unsigned _hasAttemptedEasySetup : 1;
	unsigned _validatedIncoming : 1;
	unsigned _hasChanged : 1;
	BOOL _shouldUseSSL;
	NSString* _popAccountClassString;
	NSString* _imapAccountClassString;
	BOOL _deliveryAccountIsBeingEdited;
	EmailAliasListController* _emailAliasListController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newAccount;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateDoneButton;
-(Class)accountClass;
-(void)doneButtonTapped:(id)arg1 ;
-(void)saveAndDismiss;
-(void)setAccount:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)specifiers;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(id)_getSMTPDisplayName:(id)arg1 ;
-(void)deleteAccount;
-(void)setChosenType:(id)arg1 withSpecifier:(id)arg2 ;
-(id)chosenType:(id)arg1 ;
-(void)_setIncomingAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)_setOutgoingAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)reallyDeleteAccount;
-(void)confirmAccountDeletion;
-(id)existingAccount;
-(id)emailAliasDisplayStringWithSpecifier:(id)arg1 ;
-(void)loadEmailAliasListController:(id)arg1 ;
-(BOOL)_shouldHideEnableAndDelete;
-(id)existingAccountSpecifiers;
-(id)easySetupNote;
-(void)resetTargetsForSpecifiers:(id)arg1 ;
-(void)setIncomingAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)propertyValueChanged:(id)arg1 ;
-(void)didEndEditingOnReturn:(id)arg1 ;
-(void)segmentChanged:(id)arg1 ;
-(BOOL)_bypassAccountValidation;
-(int)validateEasySetupAccounts;
-(void)showExistingAccountError;
-(void)_hideAccountValidationProgressUIWithPrompt:(id)arg1 ;
-(id)accountPropertyForKey:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 withSpecifier:(id)arg3 ;
-(void)finishedSetupWithAccount:(id)arg1 ;
-(BOOL)validateEmailAddress:(id)arg1 ;
-(void)processValidationResult:(int)arg1 ;
-(void)_tryEasySetupForEmailAddress:(id)arg1 ;
-(void)_getAccountInfoForEmailAddress:(id)arg1 ;
-(void)setCandidateIncomingAccount:(id)arg1 ;
-(BOOL)_addAccount:(id)arg1 ;
-(BOOL)_setupDeliveryAccountForValidatedAccount:(id)arg1 ;
-(void)_stopShowingEasySetup;
-(void)_showFailedAddressAlertWithTitle:(id)arg1 body:(id)arg2 ;
-(BOOL)haveEnoughValues;
-(BOOL)shouldDisplayNextButtonForChosenType;
-(id)addAlternateEmailAccountFromCurrentSettings;
-(id)addAccountFromCurrentSettings;
-(void)handleSSLAlertForAccount:(id)arg1 accountValidator:(id)arg2 attemptWithoutSSL:(BOOL)arg3 ;
-(int)copyAccountsForEmailAddress:(id)arg1 incomingAccount:(id*)arg2 deliveryAccount:(id*)arg3 easySetupNotes:(id*)arg4 ;
-(void)_copyUIInformationIntoIncomingAccount:(id)arg1 ;
-(void)_copyUIInformationIntoDeliveryAccount:(id)arg1 ;
-(void)_finishedEasySetup;
-(void)showEasySetupNoteWithAccount:(id)arg1 ;
-(BOOL)_hasEnoughInformationForEasySetup;
-(void)_takeOutgoingAccountPropertiesFromAccount:(id)arg1 ;
-(void)_setIncomingAccountProperty:(id)arg1 forKey:(id)arg2 specifier:(id)arg3 ;
-(void)_setOutgoingAccountProperty:(id)arg1 forKey:(id)arg2 specifier:(id)arg3 ;
-(void)_tryUpdatingDescriptionFromValue:(id)arg1 forKey:(id)arg2 ;
-(id)_outgoingAccountPropertyForKey:(id)arg1 ;
-(id)_descriptionFromEmailAddress:(id)arg1 ;
-(id)_incomingAccountPropertyForKey:(id)arg1 ;
-(void)_enableAlias:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_createDeliveryAccountWithUIValues;
-(id)emailAliasListController:(id)arg1 emailAliasListForSpecifier:(id)arg2 ;
-(id)emailAliasListController:(id)arg1 defaultEmailAliasForSpecifier:(id)arg2 ;
-(id)emailAliasListController:(id)arg1 accountTypeForSpecifier:(id)arg2 ;
-(void)emailAliasListController:(id)arg1 setEmailAliasList:(id)arg2 defaultEmailAlias:(id)arg3 forSpecifier:(id)arg4 ;
-(id)chosenType;
-(void)setChosenType:(id)arg1 ;
-(void)setOutgoingAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)createAccounts;
-(void)createAccountsAnyways;
-(void)cancelAccountsCreation;
-(void)setExistingAccount:(id)arg1 ;
-(void)validateForExistingAccount;
-(void)validateForNewAccount;
-(void)handleValidAccount:(id)arg1 ;
-(void)handleInvalidAccount:(id)arg1 ;
-(void)didBeginEditingDeliveryAccount;
-(void)didFinishEditingDeliveryAccount;
-(void)didFinishSaveAccountAnywaysSheetWithResult:(BOOL)arg1 ;
-(void)setOutgoingHostName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)outgoingHostName:(id)arg1 ;
-(void)_mailAccountNameChanged;
-(void)_setDefaultAlias:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_defaultAlias;
-(id)_isAliasEnabledForSpecifier:(id)arg1 ;
-(id)_setOfKeysForAlteredValuesInDictionary:(id)arg1 originalDictionary:(id)arg2 ;
@end

