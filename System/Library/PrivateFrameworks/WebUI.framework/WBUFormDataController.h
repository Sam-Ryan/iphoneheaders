/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSFormDataController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSString;

@interface WBUFormDataController : WBSFormDataController <UIActionSheetDelegate> {

	BOOL _savePending;

}

@property (assign,nonatomic) BOOL shouldAutoFillFromCreditCardData; 
@property (assign,nonatomic) BOOL shouldAutoFillPasswords; 
@property (assign,nonatomic) BOOL shouldAutoFillFromAddressBook; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isDevicePasscodeSet;
+(BOOL)keychainSyncEnabled;
-(void)dealloc;
-(id)init;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)completionDBPath;
-(void)saveCompletionDBSoon;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 ;
-(BOOL)shouldAutoFillFromAddressBook;
-(BOOL)shouldAutoFillFromPreviousData;
-(BOOL)shouldAutoFillPasswords;
-(void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(BOOL)arg3 ;
-(void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3 ;
-(BOOL)shouldAutoFillFromCreditCardData;
-(void)setShouldAutoFillPasswords:(BOOL)arg1 ;
-(void)setShouldAutoFillFromCreditCardData:(BOOL)arg1 ;
-(void)clearAllFormCredentials;
-(id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id*)arg3 matchesForCurrentHost:(id*)arg4 ;
-(void)prepareMeCard;
-(BOOL)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(BOOL)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(id)credentialForLoginForm:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)mayPreFillInFrame:(id)arg1 ancestorFrames:(id)arg2 ;
-(BOOL)whiteListAllowsURL:(id)arg1 ;
-(BOOL)shouldAutoGeneratePasswordsForURL:(id)arg1 inWebView:(id)arg2 ;
-(void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 multiRoundAutoFillManager:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)mayFillCreditCardDataInFrame:(id)arg1 ;
-(id)credentialFromMatches:(id)arg1 completingPartialUserInLoginForm:(id)arg2 ;
-(void)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 andPromptToUpdateRelatedCredentialsWithWebView:(id)arg4 ;
-(void)_didFillFieldWithGeneratedPassword:(id)arg1 inFrame:(id)arg2 webView:(id)arg3 ;
-(void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3 ;
-(id)_meCard;
-(id)_addressBookMatchesForProxyProperty:(id)arg1 ;
-(BOOL)_shouldSaveUsernamesAndPasswordsForURL:(id)arg1 inWebView:(id)arg2 ;
-(BOOL)shouldAutoFillFromCreditCardDataInFrame:(id)arg1 ;
-(void)_autoFillPreferencesDidChange;
-(id)_credentialForLoginForm:(id)arg1 inFrame:(id)arg2 completingPartialUser:(BOOL)arg3 matches:(id*)arg4 potentialMatches:(id*)arg5 ;
-(id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3 ;
-(BOOL)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2 ;
-(void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 formType:(unsigned long long)arg4 promptingPolicy:(long long)arg5 webView:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_replaceCredentialsWithDontSaveMarkerForProtectionSpace:(id)arg1 ;
-(void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned long long)arg2 username:(id)arg3 host:(id)arg4 hasCredentialForCurrentHost:(BOOL)arg5 existingCredentialMatchesForCurrentHost:(id)arg6 otherSubdomainCredentialMatches:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(BOOL)_webView:(id)arg1 saveUsernameAndPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 isGeneratedPassword:(BOOL)arg7 confirmOverwritingCurrentPassword:(BOOL)arg8 submissionHandler:(/*^block*/id)arg9 ;
-(BOOL)_webView:(id)arg1 saveUsernameAndPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(BOOL)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(BOOL)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(/*^block*/id)arg4 ;
-(BOOL)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formSubmission:(BOOL)arg3 formWithMetadata:(id)arg4 fromFrame:(id)arg5 username:(id)arg6 password:(id)arg7 submissionHandler:(/*^block*/id)arg8 ;
-(BOOL)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 formSubmission:(BOOL)arg3 fromFrame:(id)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(BOOL)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(/*^block*/id)arg4 ;
-(BOOL)_webView:(id)arg1 formSubmission:(BOOL)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(BOOL)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3 ;
-(void)setShouldAutoFillFromAddressBook:(BOOL)arg1 ;
@end

