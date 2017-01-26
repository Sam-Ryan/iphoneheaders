/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FKFriendGroupDelegate.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NPSManager, NSTimer, NSObject, NSMutableDictionary, NSHashTable, NSMapTable, NSMutableSet, NSArray, IDSBatchIDQueryController, FKPerson;

@interface FKFriendsManager : NSObject <FKFriendGroupDelegate, IDSBatchIDQueryControllerDelegate> {

	NSString* _domain;
	unsigned long long _maxFriendGroups;
	unsigned long long _maxFriendsPerGroup;
	BOOL _shouldAddEmptyTrailingGroup;
	NSMutableArray* _friendList;
	NSMutableArray* _friendGroups;
	NPSManager* _npsManager;
	NSTimer* _saveTimer;
	NSObject*<OS_dispatch_queue> _saveQueue;
	unsigned long long _postCount;
	NSMutableDictionary* _changeLog;
	NSHashTable* _ephemeralPersons;
	NSMapTable* _identifiersToPersonMap;
	BOOL _needsFriendListSync;
	BOOL _needsAddressBookRefresh;
	NSMutableSet* _highPriorityDestinations;
	NSArray* _pendingDestinations;
	NSMutableDictionary* _cachedStatuses;
	NSTimer* _idsQueryTimeoutTimer;
	IDSBatchIDQueryController* _queryController;
	NSMutableArray* _blockList;
	unsigned long long _blockListPostCount;
	BOOL _refreshAgainstAddressBookDisabled;
	FKPerson* _activeEphemeralPerson;
	NSString* _serviceName;

}

@property (nonatomic,retain) FKPerson * activeEphemeralPerson;                                                               //@synthesize activeEphemeralPerson=_activeEphemeralPerson - In the implementation block
@property (assign,getter=isRefreshAgainstAddressBookDisabled,nonatomic) BOOL refreshAgainstAddressBookDisabled;              //@synthesize refreshAgainstAddressBookDisabled=_refreshAgainstAddressBookDisabled - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                                         //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_skipHasGizmoCheck;
+(BOOL)_isRetailDemo;
+(id)managerForDomain:(id)arg1 ;
+(void)setMaxGroupCount:(unsigned long long)arg1 domain:(id)arg2 ;
+(void)setGroupSize:(unsigned long long)arg1 domain:(id)arg2 ;
+(void)setEnableEmptyTrailingGroup:(BOOL)arg1 domain:(id)arg2 ;
+(id)collapseChangeLogsIntoChangeLog:(id)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(id)initWithDomain:(id)arg1 ;
-(void)_postChangeNotification;
-(id)blockList;
-(void)_addressBookChanged:(id)arg1 ;
-(id)allPeople;
-(void)save;
-(void)idStatusUpdatedForDestinations:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(long long)_firstEmptyPosition;
-(void)friendGroup:(id)arg1 didRemoveFriend:(id)arg2 atPosition:(unsigned long long)arg3 ;
-(void)friendGroup:(id)arg1 didSetFriend:(id)arg2 atPosition:(unsigned long long)arg3 ;
-(void)_personValuesChanged:(id)arg1 ;
-(void)_unreadCountChanged:(id)arg1 ;
-(void)_createEmptyFriendList;
-(void)_loadFriendList;
-(void)_loadGroupTitles;
-(void)_loadBlockList;
-(BOOL)isPersonFriend:(id)arg1 ;
-(void)_removePersonFromIdentifiersToPersonMap:(id)arg1 ;
-(void)_postGroupListChangedNotification;
-(void)_addEmptyGroup;
-(void)_updateFriends:(id)arg1 ;
-(void)markFriendListAsNormalized;
-(id)_curatedFriendList;
-(void)_addCuratedFriends:(id)arg1 ;
-(void)_createAddressToPersonDictionary;
-(void)_updateFriendGroups;
-(void)_deduplicateFriendList;
-(unsigned long long)_numberOfFriendsInList:(id)arg1 ;
-(void)_aggdLogFriendGroupCount;
-(void)saveFriendGroupTitles;
-(BOOL)_canAddFriendGroup;
-(BOOL)_shouldAddEmptyGroup;
-(void)_removeGroupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexForPosition:(unsigned long long)arg1 inGroup:(id)arg2 ;
-(void)_addEntryToChangeLogForPerson:(id)arg1 changeType:(id)arg2 ;
-(unsigned long long)groupIndexContainingFriend:(id)arg1 ;
-(id)_friendAtPosition:(unsigned long long)arg1 ;
-(void)_save:(id)arg1 ;
-(void)_writeToUserDefaults:(id)arg1 synchronize:(BOOL)arg2 ;
-(void)_storeEphemeralPerson:(id)arg1 ;
-(void)_addPersonToIdentifiersToPersonMap:(id)arg1 ;
-(id)_destinations;
-(void)_initiateIDSDestinationStatusQuery:(id)arg1 ;
-(void)_stopIDSQueryTimeoutTimer;
-(long long)_compareStatus:(long long)arg1 toStatus:(long long)arg2 ;
-(void)_queryDestinations:(id)arg1 ;
-(void)_setupQueryController;
-(void)_startIDSQueryTimeoutTimer;
-(void)_idsQueryTimeoutTimerFired;
-(void)refreshAgainstAddressBook;
-(BOOL)_changeLogContainsFriendAdditionsOrUpdates;
-(id)friendGroups;
-(unsigned long long)positionOfFriendInGroup:(id)arg1 ;
-(int)_lastKnownAddressBookSequenceNumber;
-(BOOL)_addressBookSequenceNumberDidChange;
-(void)_updateLastKnownAddressBookSequenceNumber:(int)arg1 ;
-(void)_postBlockListChangeNotification;
-(void)_saveBlockList;
-(BOOL)_writeBlockListToUserDefaults:(id)arg1 ;
-(void)friendGroup:(id)arg1 didMoveFriends:(id)arg2 ;
-(void)setActiveEphemeralPerson:(FKPerson *)arg1 ;
-(BOOL)canAddFriend;
-(void)syncFriendGroup:(id)arg1 ;
-(void)purgeEmptyFriendGroups;
-(BOOL)addFriend:(id)arg1 ;
-(BOOL)containsFriendWithABRecordGUID:(id)arg1 ;
-(id)personLikePerson:(id)arg1 ;
-(id)personWithDestinations:(id)arg1 ;
-(id)personWithABRecordGUID:(id)arg1 ;
-(void)refreshDestinationStatuses;
-(long long)statusForPerson:(id)arg1 requery:(BOOL)arg2 ;
-(void)_friendsChangedExternally;
-(void)_groupTitleChangedExternally;
-(void)setRefreshAgainstAddressBookDisabled:(BOOL)arg1 ;
-(void)blockAddresses:(id)arg1 ;
-(void)unblockAddresses:(id)arg1 ;
-(BOOL)isAddressBlocked:(id)arg1 ;
-(void)_blockListChangedExternally;
-(void)enableSupplementalLoggingWithFacility:(id)arg1 logName:(id)arg2 logDirectory:(id)arg3 defaultsDomain:(id)arg4 logLevelKey:(id)arg5 consoleLogLevelKey:(id)arg6 ;
-(FKPerson *)activeEphemeralPerson;
-(BOOL)isRefreshAgainstAddressBookDisabled;
@end
