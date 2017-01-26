/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFAccount.h>

@class NSString, MFMailboxUid, MFLock, MFError, MFMessageLibrary, NSMutableDictionary, MFWeakObjectCache;

@interface MailAccount : MFAccount {

	NSString* _path;
	NSString* _nonPersistentPath;
	MFMailboxUid* _rootMailboxUid;
	struct {
		unsigned cacheDirtyCount : 16;
		unsigned synchronizationThreadIsRunning : 1;
		unsigned cacheHasBeenRead : 1;
		unsigned disableCacheWrite : 1;
		unsigned _UNUSED_ : 13;
	}  _flags;
	MFMailboxUid* _inboxMailboxUid;
	MFMailboxUid* _draftsMailboxUid;
	MFMailboxUid* _sentMessagesMailboxUid;
	MFMailboxUid* _trashMailboxUid;
	MFMailboxUid* _archiveMailboxUid;
	MFMailboxUid* _junkMailboxUid;
	MFLock* _cachedMailboxenLock;
	MFLock* _deletionLock;
	MFError* _lastConnectionError;
	MFMessageLibrary* _library;
	NSMutableDictionary* _currentChokedActions;
	NSString* _mailboxCachePath;
	MFWeakObjectCache* _messageStoresCache;
	long long _cachedLibraryID;
	MFLock* _cachedLibraryIDLock;
	NSString* _lastKnownHostname;

}

@property (readonly) BOOL shouldArchiveByDefault; 
@property (readonly) BOOL sourceIsManaged; 
+(id)accountImageForAccounts:(id)arg1 bundle:(id)arg2 ;
+(id)accountImageForAccounts:(id)arg1 ;
+(id)emailAddressHostPart;
+(id)descriptionPlaceholder;
+(id)editableSuffix;
+(BOOL)setupIsAutomated;
+(id)_accountDescriptionSpecifiersForExistingAccount:(BOOL)arg1 ;
+(id)_incomingSpecifiers;
+(BOOL)addressIsEditable;
+(id)copyShortFormForHost:(id)arg1 descriptionPlaceholder:(id)arg2 addressIsEditable:(BOOL)arg3 ;
+(id)primarySpecifiers:(BOOL)arg1 ;
+(void)getRemoveOptionTitles:(id*)arg1 values:(id*)arg2 defaultValue:(id*)arg3 ;
+(int)advancedSpecifiersOptions;
+(id)advancedSpecifiersWithOptions:(unsigned)arg1 ;
+(id)advancedSpecifiers:(BOOL)arg1 ;
+(BOOL)aliasesAreEditable;
+(id)detailedSpecifiers:(BOOL)arg1 ;
+(id)aliasSpecifiersForEmails:(id)arg1 ;
+(id)helpTitle;
+(id)helpURL;
+(Class)accountValidatorClass;
+(id)firstSetupSpecifiers;
+(id)easySetupSpecifiersWithPlaceholderAddress:(id)arg1 accountName:(id)arg2 ;
+(id)userInfoForAccountTopLevelSpecifier;
+(id)accountImageForAccounts:(id)arg1 bundle:(id)arg2 ;
+(id)accountImageForAccounts:(id)arg1 ;
+(id)mf_receivingEmailAddressesCache;
+(void)mf_emptyReceivingEmailAddressesCache;
+(void)initialize;
+(id)accountThatMessageIsFrom:(id)arg1 ;
+(BOOL)canMoveMessagesFromAccount:(id)arg1 toAccount:(id)arg2 ;
+(id)predefinedValueForKey:(id)arg1 ;
+(id)newAccountWithDictionary:(id)arg1 ;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(BOOL)isPredefinedAccountType;
+(void)_addAccountToSortedPaths:(id)arg1 ;
+(id)_loadDataAccessAccountsWithError:(id*)arg1 ;
+(id)existingDAMailAccountForDAAccount:(id)arg1 ;
+(void)_removeLookAsideValuesNotInAccountList:(id)arg1 ;
+(void)disableMailboxListingNotifications;
+(id)_loadAllAccountsWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
+(void)_setupSortedPathsForAccounts:(id)arg1 ;
+(void)_invalidateAccounts:(id)arg1 missingFromNewAccounts:(id)arg2 ;
+(void)enableMailboxListingNotifications:(BOOL)arg1 ;
+(id)mailAccountsWithError:(id*)arg1 ;
+(void)setMailAccounts:(id)arg1 saveIfChanged:(BOOL)arg2 ;
+(id)activeAccountsWithError:(id*)arg1 ;
+(id)purgableAccountsWithError:(id*)arg1 ;
+(id)mailAccounts;
+(id)activeAccounts;
+(id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id*)arg2 fullUserName:(id*)arg3 includingInactive:(BOOL)arg4 ;
+(id)accountForHeaders:(id)arg1 message:(id)arg2 includingInactive:(BOOL)arg3 ;
+(void)_setOutboxMailboxUid:(id)arg1 ;
+(id)outboxMailboxUid;
+(id)newAccountWithPath:(id)arg1 ;
+(id)defaultAccountDirectory;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)defaultPathForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)_defaultMailAccountForDeliveryIncludingRestricted:(BOOL)arg1 ;
+(id)accountWithUniqueId:(id)arg1 ;
+(id)defaultMailAccountForDelivery;
+(BOOL)primaryDeliveryAccountIsDynamic;
+(id)allMailboxUids;
+(id)outboxMessageStore:(BOOL)arg1 ;
+(BOOL)mailboxListingNotificationAreEnabled;
+(id)_accountForURL:(id)arg1 ;
+(id)infoForURL:(id)arg1 ;
+(id)standardAccountClass:(Class)arg1 valueForKey:(id)arg2 ;
+(id)mailboxUidForFileSystemPath:(id)arg1 create:(BOOL)arg2 ;
+(void)_removeAccountFromSortedPaths:(id)arg1 ;
+(void)setMailAccountLoadOptions:(unsigned long long)arg1 ;
+(id)lastMailAccountsReloadDate;
+(id)lastMailAccountsReloadError;
+(void)setMailAccounts:(id)arg1 ;
+(id)purgableAccounts;
+(id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3 ;
+(void)resetMailboxTimers;
+(void)updateAutoFetchSettings;
+(id)allEmailAddressesIncludingFullUserName:(BOOL)arg1 includeReceiveAliases:(BOOL)arg2 ;
+(id)accountUsingHeadersFromMessage:(id)arg1 ;
+(id)accountThatMessageIsFrom:(id)arg1 includingInactive:(BOOL)arg2 ;
+(id)addressesThatReceivedMessage:(id)arg1 ;
+(id)accountWithPath:(id)arg1 ;
+(void)setGlobalPathForAccounts:(id)arg1 ;
+(id)defaultMailAccountForDeliveryExcludingRestricted;
+(id)defaultDeliveryAccount;
+(void)saveStateForAllAccounts;
+(id)csAccountTypeString;
+(void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2 ;
+(id)URLForInfo:(id)arg1 ;
+(id)accountWithURLString:(id)arg1 ;
+(id)mailboxUidFromActiveAccountsForURL:(id)arg1 ;
+(void)updateEmailAliasesForActiveAccounts;
+(BOOL)usernameIsEmailAddress;
+(BOOL)getConfigurationFromServerForEmail:(id)arg1 ;
+(id)_accountWithPath:(id)arg1 ;
+(void)setDataclassesConsideredActive:(id)arg1 ;
+(id)accountContainingEmailAddress:(id)arg1 ;
+(id)accountContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 ;
+(void)reloadAccounts;
-(void)_putMailboxesRootedAt:(id)arg1 intoArray:(id)arg2 hideNotes:(BOOL)arg3 ;
-(void)_addGenericChildrenToMailboxTree:(id)arg1 forNode:(id)arg2 hideNotes:(BOOL)arg3 ;
-(void)_addSpecialMailbox:(id)arg1 toTree:(id)arg2 ;
-(void)addSpecialMailbox:(id)arg1 toArray:(id)arg2 ;
-(void)_loadOutbox:(id)arg1 ;
-(id)_treeOfAllMailboxesIncludingLocals:(BOOL)arg1 withOutbox:(id)arg2 hideInbox:(BOOL)arg3 hideNotes:(BOOL)arg4 ;
-(id)_allMailboxesIncludingLocals:(BOOL)arg1 withOutbox:(id)arg2 hideInbox:(BOOL)arg3 hideNotes:(BOOL)arg4 ;
-(id)treeOfAllMailboxUidsSortedWithSpecialsAtTopIncludingLocals:(BOOL)arg1 client:(id)arg2 outbox:(id)arg3 ;
-(id)treeOfAllGenericMailboxes;
-(id)allMailboxUidsSortedWithSpecialsAtTopIncludingLocals:(BOOL)arg1 client:(id)arg2 ;
-(id)valueForSettingsInAccountPropertiesForKey:(id)arg1 ;
-(id)otherTopLevelSpecifiers;
-(id)primarySpecifiers;
-(id)advancedSpecifiers;
-(id)detailedSpecifiers;
-(id)secureMIMESigningAndEncryptionSpecifiers;
-(void)_putMailboxesRootedAt:(id)arg1 intoArray:(id)arg2 hideNotes:(BOOL)arg3 ;
-(void)_addGenericChildrenToMailboxTree:(id)arg1 forNode:(id)arg2 hideNotes:(BOOL)arg3 ;
-(void)_addSpecialMailbox:(id)arg1 toTree:(id)arg2 ;
-(void)addSpecialMailbox:(id)arg1 toArray:(id)arg2 ;
-(void)_loadOutbox:(id)arg1 ;
-(id)_treeOfAllMailboxesIncludingLocals:(BOOL)arg1 withOutbox:(id)arg2 hideInbox:(BOOL)arg3 hideNotes:(BOOL)arg4 ;
-(id)_allMailboxesIncludingLocals:(BOOL)arg1 withOutbox:(id)arg2 hideInbox:(BOOL)arg3 hideNotes:(BOOL)arg4 ;
-(id)treeOfAllMailboxUidsSortedWithSpecialsAtTopIncludingLocals:(BOOL)arg1 client:(id)arg2 outbox:(id)arg3 ;
-(id)treeOfAllGenericMailboxes;
-(id)allMailboxUidsSortedWithSpecialsAtTopIncludingLocals:(BOOL)arg1 client:(id)arg2 ;
-(id)mf_copyReceivingEmailAddresses;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(void)invalidate;
-(id)path;
-(void)setActive:(BOOL)arg1 ;
-(void)setPath:(id)arg1 ;
-(BOOL)sourceIsManaged;
-(id)initWithPath:(id)arg1 ;
-(id)displayName;
-(id)URLString;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(long long)libraryID;
-(void)unregisterStore:(id)arg1 forUid:(id)arg2 ;
-(void)setUnreadCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(id)storeForMailboxUid:(id)arg1 ;
-(id)mailboxUidOfType:(int)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3 ;
-(id)powerAssertionIdentifierWithPrefix:(id)arg1 ;
-(BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2 ;
-(void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3 ;
-(BOOL)deleteInPlaceForMailbox:(id)arg1 ;
-(BOOL)supportsArchiving;
-(BOOL)preventArchiveForMailbox:(id)arg1 ;
-(BOOL)shouldArchiveByDefault;
-(BOOL)canArchiveForMailbox:(id)arg1 ;
-(int)archiveDestinationForMailbox:(id)arg1 ;
-(id)initWithPersistentAccount:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(void)releaseAllConnections;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2 ;
-(void)releaseAllForcedConnections;
-(id)tildeAbbreviatedPath;
-(void)accountDidLoad;
-(BOOL)supportsPurge;
-(BOOL)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3 ;
-(BOOL)isAccountClassEquivalentTo:(id)arg1 ;
-(BOOL)isHostnameEquivalentTo:(id)arg1 ;
-(BOOL)isUsernameEquivalentTo:(id)arg1 ;
-(void)resetMailboxTimer;
-(id)uniqueIdForPersistentConnection;
-(BOOL)canFetch;
-(id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 ;
-(void)resetSpecialMailboxes;
-(id)rootMailboxUid;
-(BOOL)isActiveWithPersistentAccount:(id)arg1 ;
-(void)_didBecomeActive:(BOOL)arg1 ;
-(void)_invalidateCachedMailboxen;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(void)deliveryAccountWillBeRemoved:(id)arg1 ;
-(void)setupLibrary;
-(Class)storeClassForMailbox:(id)arg1 ;
-(BOOL)_setPath:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 path:(id)arg2 ;
-(BOOL)restrictedFromSendingExternally;
-(id)deliveryAccount;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(id)defaultEmailAddress;
-(id)emailAddressesDictionary;
-(id)receiveEmailAliasAddresses;
-(id)lastEmailAliasesSyncDate;
-(BOOL)updateEmailAliases;
-(BOOL)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2 ;
-(id)allMailboxUids;
-(id)allLocalMailboxUids;
-(BOOL)deleteMailbox:(id)arg1 ;
-(void)_deleteHook;
-(void)_invalidateAndDeleteAccountData:(BOOL)arg1 ;
-(void)_asynchronouslyInvalidateAndDeleteAccountData:(BOOL)arg1 ;
-(BOOL)_usesMailboxCache;
-(void)_writeMailboxCacheWithPrejudice:(BOOL)arg1 ;
-(id)_mailboxPathPrefix;
-(void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2 ;
-(void)emptyTrash;
-(void)_synchronizeMailboxListWithFileSystem;
-(id)_cachedSpecialMailboxOfType:(int)arg1 ;
-(id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2 ;
-(id)primaryMailboxUid;
-(id)allMailMailboxUid;
-(void)_setSpecialMailbox:(id)arg1 forType:(int)arg2 ;
-(BOOL)_canEmptyMessagesFromMailboxUid:(id)arg1 ;
-(int)_emptyFrequencyForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)_setEmptyFrequency:(int)arg1 forKey:(id)arg2 ;
-(void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned)arg2 ;
-(id)_pathComponentForUidName:(id)arg1 ;
-(BOOL)_resetSpecialMailboxes;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3 ;
-(BOOL)_renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3 ;
-(id)_uidNameForPathComponent:(id)arg1 ;
-(void)_synchronouslyLoadListingForParent:(id)arg1 ;
-(BOOL)_deleteMailbox:(id)arg1 ;
-(BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2 ;
-(void)_resetAllMailboxURLs:(BOOL)arg1 ;
-(Class)storeClass;
-(id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 withOption:(int)arg3 ;
-(id)mailboxPathExtension;
-(id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2 ;
-(id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5 ;
-(id)_URLScheme;
-(id)_infoForMatchingURL:(id)arg1 ;
-(id)_URLForInfo:(id)arg1 ;
-(id)mailboxUidForInfo:(id)arg1 ;
-(int)emptyFrequencyForMailboxType:(int)arg1 ;
-(void)setLastEmailAliasesSyncDate:(id)arg1 ;
-(id)statisticsKind;
-(void)setDeliveryAccount:(id)arg1 ;
-(id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 dictionary:(id)arg4 ;
-(id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5 ;
-(BOOL)_cleanInboxDuplication:(id)arg1 ;
-(BOOL)_loadMailboxListingIntoCache:(id)arg1 attributes:(unsigned)arg2 children:(id)arg3 parent:(id)arg4 ;
-(id)mailboxCachePath;
-(void)_writeCustomInfoToMailboxCache:(id)arg1 ;
-(id*)_specialMailboxIvarOfType:(int)arg1 ;
-(id)specialMailboxNameForType:(int)arg1 ;
-(void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2 ;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(BOOL)restrictedFromTransferingMessagesToOtherAccounts;
-(BOOL)supportsAppend;
-(BOOL)isMailboxLocalForType:(int)arg1 ;
-(id)valueInAccountLookAsidePropertiesForKey:(id)arg1 ;
-(void)setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 ;
-(void)_setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 subKey:(id)arg3 ;
-(id)unsupportedContinuationTypes;
-(void)setLastKnownHostname:(id)arg1 ;
-(void)setFullUserName:(id)arg1 ;
-(BOOL)isPrimaryDeliveryAccountDisabled;
-(void)setPrimaryDeliveryAccountDisabled:(BOOL)arg1 ;
-(id)deliveryAccountAlternates;
-(void)setDeliveryAccountAlternates:(id)arg1 ;
-(BOOL)canUseDeliveryAccount:(id)arg1 ;
-(void)setCanUseCarrierDeliveryFallback:(BOOL)arg1 ;
-(BOOL)canUseCarrierDeliveryFallback;
-(void)setDefaultEmailAddress:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(void)pushUpdateForAliasData;
-(id)receiveEmailAliasAddressesList;
-(void)setReceiveEmailAliasAddresses:(id)arg1 ;
-(id)emailAddressesAndAliases;
-(void)invalidateAndDelete;
-(BOOL)_shouldConfigureMailboxCache;
-(void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
-(void)fetchMailboxList;
-(BOOL)canAppendMessages;
-(BOOL)shouldExpungeMessagesOnDelete;
-(id)suggestionsLostMessageSearchOrderWithLimit:(unsigned long long)arg1 wasTruncated:(BOOL*)arg2 ;
-(id)transferDisabledMailboxUids;
-(void)setMailboxUid:(id)arg1 forMailboxType:(int)arg2 ;
-(void)setEmptyFrequency:(int)arg1 forMailboxType:(int)arg2 ;
-(id)displayNameForMailboxUid:(id)arg1 ;
-(BOOL)canCreateNewMailboxes;
-(BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2 ;
-(BOOL)canMailboxBeRenamed:(id)arg1 ;
-(BOOL)canMailboxBeDeleted:(id)arg1 ;
-(BOOL)moveMailbox:(id)arg1 intoParent:(id)arg2 ;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 ;
-(void)resetMailboxURLs;
-(void)setConnectionError:(id)arg1 ;
-(id)connectionError;
-(id)mailboxUidForURL:(id)arg1 ;
-(void)startListeningForNotifications;
-(void)stopListeningForNotifications;
-(void)transferNotificationSessionToAccount:(id)arg1 ;
-(BOOL)canForwardWithoutDownload;
-(BOOL)shouldAppearInMailSettings;
-(BOOL)supportsRemoteAppend;
-(BOOL)supportsSyncingReadState;
-(BOOL)supportsMailboxEditing;
-(id)displayUsername;
-(BOOL)archiveSentMessages;
-(BOOL)supportsMessageFlagging;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(BOOL)deleteInPlaceForAllMailboxes;
-(id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1 ;
-(id)loggingIdentifier;
-(BOOL)hasEnoughInformationForEasySetup;
-(BOOL)canReceiveNewMailNotifications;
-(BOOL)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2 ;
-(void)addUserFocusMailbox:(id)arg1 ;
-(void)removeUserFocusMailbox:(id)arg1 ;
-(id)pushedMailboxUids;
-(BOOL)supportsUserPushedMailboxes;
-(void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2 ;
-(void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2 ;
-(void)setMailboxCachePath:(id)arg1 ;
-(BOOL)_shouldLogDeleteActivity;
-(void)_readCustomInfoFromMailboxCache:(id)arg1 ;
-(id)URLForMessage:(id)arg1 ;
-(id)newMailboxWithParent:(id)arg1 name:(id)arg2 ;
-(id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2 ;
-(BOOL)shouldFetchBodiesWhenMovingToTrash;
-(id)iconString;
-(id)saveSentFolder;
-(id)signingIdentityPersistentReferenceForAddress:(id)arg1 ;
-(void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2 ;
-(id)encryptionIdentityPersistentReferenceForAddress:(id)arg1 ;
-(void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2 ;
-(id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id*)arg2 ;
-(BOOL)restrictedFromSyncingRecents;
-(id)fetchLimits;
-(id)customSignature;
-(void)setCustomSignature:(id)arg1 ;
-(BOOL)supportsRangeOperations;
-(void)setHostname:(id)arg1 ;
-(BOOL)secureMIMEEnabled;
-(BOOL)perMessageEncryptionEnabled;
-(id)fromEmailAddresses;
-(id)firstEmailAddress;
-(id)fullUserName;
-(id)fromEmailAddressesIncludingDisabled;
-(BOOL)supportsThreadOperations;
-(BOOL)supportsMailDrop;
-(int)secureCompositionSigningPolicyForAddress:(id)arg1 ;
-(int)secureCompositionEncryptionPolicyForAddress:(id)arg1 ;
-(BOOL)supportsContinuationType:(id)arg1 ;
-(id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id*)arg2 ;
-(id)meetingStorePersistentID;
-(BOOL)reconstituteOrphanedMeetingInMessage:(id)arg1 ;
-(id)emailAddressesAndAliasesList;
-(void)setCachePolicy:(int)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)saveState;
-(void)setEmailAddresses:(id)arg1 ;
-(void)systemWillSleep;
-(void)systemDidWake;
-(id)emailAddresses;
-(int)cachePolicy;
@end

