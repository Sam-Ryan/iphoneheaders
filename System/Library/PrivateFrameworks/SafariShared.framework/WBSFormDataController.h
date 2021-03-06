/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSDictionary, NSObject, NSMutableDictionary;

@interface WBSFormDataController : NSObject {

	NSDictionary* _allCredentialsCache;
	NSObject*<OS_dispatch_queue> _allCredentialsCacheAccessQueue;
	int _keychainChangedNotificationToken;
	NSMutableDictionary* _completionDB;
	NSMutableDictionary* _valuesDB;
	NSMutableDictionary* _preferredLabelsMap;
	unsigned long long _completionDBSize;
	NSMutableDictionary* _domainToLastUsedUsernameAndProtectionSpace;

}
+(id)dontSaveMarker;
+(id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(BOOL)arg3 ignorePositioning:(BOOL)arg4 ;
+(id)specifierForControl:(id)arg1 ;
+(id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2 ;
+(BOOL)stringLooksLikeCreditCardNumber:(id)arg1 ;
+(id)domainFromURL:(id)arg1 ;
+(id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2 ;
+(BOOL)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long*)arg2 ;
+(BOOL)formContainsCreditCardData:(id)arg1 ;
+(BOOL)formContainsCreditCardNumberField:(id)arg1 ;
+(id)stringWithAddressBookValue:(id)arg1 key:(id)arg2 ;
+(BOOL)canAutocompleteTextField:(id)arg1 inForm:(id)arg2 ;
+(long long)availableManualAutoFillActionForTextField:(id)arg1 form:(id)arg2 outUsernameElementUniqueID:(id*)arg3 outPasswordElementUniqueID:(id*)arg4 outConfirmPasswordElementUniqueID:(id*)arg5 ;
-(void)dealloc;
-(id)init;
-(id)completionDBPath;
-(id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2 ;
-(id)domainsWithPreviousData;
-(void)domainsWithPreviousDataChanged;
-(void)pruneCompletionDB;
-(void)loadCompletionDBIfNeeded;
-(void)saveCompletionDBSoon;
-(id)infoForDomain:(id)arg1 ;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 ;
-(id)matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 preferredLabel:(id)arg5 ;
-(BOOL)shouldAutoFillFromAddressBook;
-(BOOL)shouldAutoFillFromPreviousData;
-(void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4 ;
-(void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 ;
-(void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3 ;
-(id)_singleFieldPhoneNumberCandidates:(id)arg1 ;
-(id)_phoneNumberCandidates:(id)arg1 fillingMultipleFields:(BOOL)arg2 ;
-(unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 multiRoundAutoFillManager:(id)arg6 ;
-(void)_fillPhoneNumber:(id)arg1 intoValues:(id)arg2 controls:(id)arg3 formTextSample:(id)arg4 multiRoundAutoFillManager:(id)arg5 ;
-(void)getFormFieldValues:(id*)arg1 andFieldToFocus:(id*)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 ;
-(id)_valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 wantAllMatches:(BOOL)arg7 ;
-(id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 preferredLabel:(id)arg5 ;
-(unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 multiRoundAutoFillManager:(id)arg5 ;
-(id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3 ;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg5 ;
-(id)credentialMatchesForForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3 ;
-(id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2 ;
-(id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id*)arg2 ;
-(id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id*)arg2 ;
-(BOOL)shouldAutoFillPasswords;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 ;
-(id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(BOOL)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(id)metadataOfActiveFormOrBestFormForPageLevelAutoFill:(id)arg1 frame:(OpaqueFormAutoFillFrame*)arg2 forPrefillingCredentials:(BOOL)arg3 ;
-(id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2 ;
-(void)updateLastUsedUsernameAndExtractUsernameAndPasswordFromForm:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4 ;
-(void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3 ;
-(id)lastUsedUsernameForURL:(id)arg1 ;
-(id)allFormDataForSaving;
-(void)clearPreviousDataForDomain:(id)arg1 ;
-(void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1 ;
-(void)clearPreviousDataDatabase;
-(void)setInfo:(id)arg1 forDomain:(id)arg2 ;
-(void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 ;
-(id)preferredIdentifierForProperty:(id)arg1 ;
-(id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 ;
-(BOOL)shouldForceUSLocaleForFillingPhoneNumber;
-(void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2 ;
-(id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id*)arg4 ;
-(id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 ;
-(id)annotationsFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2 ;
-(id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(OpaqueFormAutoFillFrame*)arg2 forPrefillingCredentials:(BOOL)arg3 ;
-(BOOL)hasCredentialsForPageWithMainFrame:(id)arg1 ;
-(void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4 ;
@end

