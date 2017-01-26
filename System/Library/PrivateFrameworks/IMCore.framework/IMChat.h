/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMItemsController.h>
#import <IMCore/IMSendProgressDelegate.h>

@protocol IMChatItemRules;
@class NSString, IMAccount, NSArray, NSMutableDictionary, IMMessage, NSMutableArray, NSMutableSet, IMTimingCollection, IMScheduledUpdater, IMSendProgress, IMChatRegistry, NSSet, NSDate, IMHandle;

@interface IMChat : IMItemsController <IMSendProgressDelegate> {

	NSString* _guid;
	NSString* _typingGUID;
	NSString* _currentLocationGUID;
	NSString* _identifier;
	IMAccount* _account;
	NSString* _displayName;
	NSString* _roomName;
	NSString* _roomNameWithoutSuffix;
	NSString* _lastAddressedHandleID;
	NSString* _groupID;
	NSArray* _participants;
	NSMutableDictionary* _participantStates;
	IMMessage* _invitationForPendingParticipants;
	NSMutableArray* _messagesPendingJoin;
	NSMutableSet* _guids;
	NSMutableDictionary* _chatProperties;
	NSMutableDictionary* _participantProperties;
	NSArray* _frequentReplies;
	NSArray* _attachments;
	IMTimingCollection* _timingCollection;
	id<IMChatItemRules> _chatItemRules;
	IMScheduledUpdater* _chatItemsUpdater;
	IMSendProgress* _sendProgress;
	char _downgradeState;
	IMScheduledUpdater* _downgradeStateUpdater;
	long long _joinState;
	unsigned char _style;
	unsigned long long _dbFailedCount;
	unsigned long long _dbUnreadCount;
	void* _context;
	unsigned _hasBeenConfigured : 1;
	unsigned _isFirstMessageInvitation : 1;
	unsigned _wasInvitationHandled : 1;
	unsigned _didSendAFinishedMessage : 1;
	unsigned _hasPendingMarkRead : 1;
	unsigned _isUpdatingChatItems : 1;
	unsigned _isRecording : 1;
	unsigned _ignoreDowngradeStatusUpdates : 1;
	unsigned _isFiltered : 1;
	unsigned _forceMMS : 1;
	BOOL _hasRefreshedServiceForSending;
	BOOL _hasHadSuccessfulQuery;
	double _latestTypingIndicatorTimeInterval;

}

@property (nonatomic,retain,readonly) IMChatRegistry * chatRegistry; 
@property (nonatomic,retain,readonly) NSSet * fmfHandles; 
@property (nonatomic,retain,readonly) NSSet * allSiblingFMFHandles; 
@property (nonatomic,readonly) BOOL hasRecipientsFollowingLocation; 
@property (nonatomic,readonly) BOOL hasSiblingRecipientsSharingLocation; 
@property (nonatomic,readonly) BOOL allRecipientsFollowingLocation; 
@property (nonatomic,readonly) BOOL hasRecipientsSharingLocation; 
@property (nonatomic,readonly) BOOL allRecipientsSharingLocation; 
@property (assign,nonatomic) unsigned long long numberOfMessagesToKeepLoaded; 
@property (nonatomic,readonly) BOOL hasMoreMessagesToLoad; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (nonatomic,readonly) BOOL suppressAccountRetargetingForGroupConversation; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (nonatomic,readonly) NSString * guid;                                                     //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) IMAccount * account;                                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) unsigned char chatStyle;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * chatIdentifier; 
@property (nonatomic,retain,readonly) NSString * persistentID; 
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (nonatomic,readonly) unsigned long long unreadMessageCount; 
@property (nonatomic,readonly) unsigned long long messageFailureCount; 
@property (nonatomic,readonly) BOOL canLeaveChat; 
@property (nonatomic,readonly) BOOL canHaveMultipleParticipants; 
@property (nonatomic,readonly) unsigned long long overallChatStatus; 
@property (assign,nonatomic) NSString * displayName;                                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * roomName;                                                 //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,readonly) NSString * roomNameWithoutSuffix; 
@property (nonatomic,retain) NSArray * frequentReplies;                                             //@synthesize frequentReplies=_frequentReplies - In the implementation block
@property (nonatomic,readonly) long long joinState;                                                 //@synthesize joinState=_joinState - In the implementation block
@property (nonatomic,readonly) BOOL hasUnhandledInvitation; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (nonatomic,readonly) NSString * localTypingMessageGUID; 
@property (nonatomic,readonly) IMMessage * lastMessage; 
@property (nonatomic,readonly) IMMessage * lastFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessageWithTextContent; 
@property (nonatomic,retain,readonly) NSDate * lastFinishedMessageDate; 
@property (nonatomic,readonly) long long lastFinishedMessageID; 
@property (assign,nonatomic) BOOL isFiltered; 
@property (assign,nonatomic) BOOL hasHadSuccessfulQuery; 
@property (nonatomic,readonly) NSArray * participants;                                              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) IMHandle * recipient; 
@property (nonatomic,retain) IMMessage * invitationForPendingParticipants;                          //@synthesize invitationForPendingParticipants=_invitationForPendingParticipants - In the implementation block
@property (nonatomic,readonly) BOOL _shouldRegisterChat; 
@property (nonatomic,retain,readonly) NSString * lastAddressedHandleID;                             //@synthesize lastAddressedHandleID=_lastAddressedHandleID - In the implementation block
@property (nonatomic,retain) NSString * groupID;                                                    //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) void* contextInfo;                                                     //@synthesize context=_context - In the implementation block
@property (setter=_setGUIDs:,nonatomic,retain) NSMutableSet * _guids;                               //@synthesize guids=_guids - In the implementation block
@property (assign,nonatomic) double latestTypingIndicatorTimeInterval;                              //@synthesize latestTypingIndicatorTimeInterval=_latestTypingIndicatorTimeInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeFMF;
+(void)setChatItemRulesClass:(Class)arg1 ;
+(Class)chatItemRulesClass;
-(long long)__ck_watermarkMessageID;
-(id)__ck_watermarkDate;
-(BOOL)__ck_isMuted;
-(void)__ck_setMuteUntilDate:(id)arg1 ;
-(void)__ck_updateWatermarkToMessageID:(long long)arg1 date:(id)arg2 ;
-(void)__ck_saveWatermark;
-(id)__ck_muteUntilDate;
-(id)testChatItems;
-(IMChatRegistry *)chatRegistry;
-(NSSet *)fmfHandles;
-(BOOL)hasRecipientsSharingLocation;
-(BOOL)allRecipientsSharingLocation;
-(void)startTrackingParticipantLocations;
-(void)stopTrackingParticipantLocations;
-(BOOL)hasSiblingRecipientsSharingLocation;
-(NSSet *)allSiblingFMFHandles;
-(BOOL)allRecipientsFollowingLocation;
-(void)stopSharingLocation;
-(void)shareLocationUntilDate:(id)arg1 ;
-(BOOL)hasRecipientsFollowingLocation;
-(void)markAllLocationShareItemsAsUnactionable;
-(void)_configureLocationShareItem:(id)arg1 ;
-(void)_updateLocationShareItemsForSender:(id)arg1 ;
-(void)_updateChatItems;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 shouldPost:(BOOL)arg3 ;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_replaceStaleChatItems;
-(id)chatItemsForItems:(id)arg1 ;
-(id)chatItems;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForAllKeys;
-(void)updateChatItemsIfNeeded;
-(void)deleteChatItems:(id)arg1 ;
-(void)markChatItemAsPlayed:(id)arg1 ;
-(void)markChatItemAsSaved:(id)arg1 ;
-(NSArray *)attachments;
-(unsigned long long)numberOfMessagesToKeepLoaded;
-(id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(BOOL)arg4 ;
-(void)_setAttachments:(id)arg1 ;
-(BOOL)hasMoreMessagesToLoad;
-(id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2 ;
-(void)loadAttachments:(/*^block*/id)arg1 ;
-(void)deleteTransfers:(id)arg1 ;
-(void)setNumberOfMessagesToKeepLoaded:(unsigned long long)arg1 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(BOOL)arg2 ;
-(id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(BOOL)arg6 hasHadSuccessfulQuery:(BOOL)arg7 ;
-(BOOL)suppressAccountRetargetingForGroupConversation;
-(void)_targetToService:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)_invalidateDowngradeState;
-(void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1 ;
-(BOOL)sendDowngradeNotificationTo:(id)arg1 ;
-(id)_previousAccountForService:(id)arg1 ;
-(void)_setPreviousAccount:(id)arg1 forService:(id)arg2 ;
-(void)_calculateDowngradeState;
-(void)_calculateDowngradeStateTimerFired;
-(id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1 ;
-(void)_updateDowngradeState:(char)arg1 checkAgainInterval:(double)arg2 ;
-(void)_clearDowngradeMarkers;
-(void)_handleDeliveredCommand:(id)arg1 ;
-(void)_handleIncomingCommand:(id)arg1 ;
-(void)_delayedInvalidateDowngradeState;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(void)refreshServiceForSending;
-(BOOL)isDowngraded;
-(BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2 ;
-(BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2 ;
-(void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(unsigned long long)messageCount;
-(void)clear;
-(void)remove;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setHasHadSuccessfulQuery:(BOOL)arg1 ;
-(NSString *)lastAddressedHandleID;
-(void)_setAccount:(id)arg1 ;
-(BOOL)hasHadSuccessfulQuery;
-(void)_updateDisplayName:(id)arg1 ;
-(id)_initWithItems:(id)arg1 ;
-(void)updateMessage:(id)arg1 ;
-(id)messageForGUID:(id)arg1 ;
-(void)_accountLoggedOut:(id)arg1 ;
-(void)_daemonDied:(id)arg1 ;
-(void)_daemonAlive:(id)arg1 ;
-(void)_accountControllerUpdated:(id)arg1 ;
-(BOOL)canHaveMultipleParticipants;
-(void)_watchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_initialize;
-(id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7 isFiltered:(BOOL)arg8 hasHadSuccessfulQuery:(BOOL)arg9 ;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 ;
-(unsigned long long)messageFailureCount;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned long long)arg5 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)setIsFiltered:(BOOL)arg1 ;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(BOOL)arg3 ;
-(unsigned long long)stateForParticipant:(id)arg1 ;
-(BOOL)_isDuplicate:(id)arg1 ;
-(void)_setJoinState:(long long)arg1 quietly:(BOOL)arg2 ;
-(void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3 ;
-(void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_clearCachedIdentifier;
-(BOOL)_handleIncomingItem:(id)arg1 ;
-(void)_setDisplayName:(id)arg1 ;
-(void)_setJoinState:(long long)arg1 ;
-(void)_setLocalUserIsTyping:(BOOL)arg1 recording:(BOOL)arg2 suppliedGUID:(id)arg3 ;
-(void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1 ;
-(double)latestTypingIndicatorTimeInterval;
-(void)setLatestTypingIndicatorTimeInterval:(double)arg1 ;
-(BOOL)_shouldSendCancelTypingIndicator;
-(BOOL)canSendTransfer:(id)arg1 ;
-(void)__clearReadMessageCache;
-(void)markMessagesAsRead:(id)arg1 ;
-(void)_setTimerForReadMessageCache;
-(void)_clearUnreadCount;
-(id)allPropertiesOfParticipant:(id)arg1 ;
-(void)_setAccount:(id)arg1 locally:(BOOL)arg2 ;
-(void)setRecipient:(id)arg1 locally:(BOOL)arg2 ;
-(void)_addParticipants:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)_unwatchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_setParticipantState:(unsigned long long)arg1 forHandles:(id)arg2 quietly:(BOOL)arg3 ;
-(BOOL)canAddParticipant:(id)arg1 ;
-(id)participantsWithState:(unsigned long long)arg1 ;
-(id)_pendingParticipants;
-(IMMessage *)invitationForPendingParticipants;
-(void)_inviteParticipants:(id)arg1 reason:(id)arg2 ;
-(void)setInvitationForPendingParticipants:(IMMessage *)arg1 ;
-(BOOL)_sanityCheckAccounts;
-(void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6 ;
-(BOOL)_shouldRegisterChat;
-(void)_setDBUnreadCount:(unsigned long long)arg1 ;
-(void)_setDBFailedCount:(unsigned long long)arg1 ;
-(BOOL)_shouldAnnouncePeopleJoin;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 ;
-(IMMessage *)lastIncomingFinishedMessageWithTextContent;
-(void)didUnregisterFromRegistry:(id)arg1 ;
-(void)_recomputeOverallChatStatusQuietly:(BOOL)arg1 ;
-(void)_handleHandleStatusChanged:(id)arg1 ;
-(id)_timingCollection;
-(void)_startTiming:(id)arg1 ;
-(void)_endTiming;
-(void)_handleMessageGUIDDeletions:(id)arg1 ;
-(void)_participant:(id)arg1 statusChanged:(int)arg2 ;
-(void)_showErrorMessage:(id)arg1 ;
-(unsigned long long)overallChatStatus;
-(NSString *)roomNameWithoutSuffix;
-(BOOL)hasUnhandledInvitation;
-(void)acceptInvitation;
-(void)declineInvitation;
-(void)cancelMessage:(id)arg1 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(void)updateMessage:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)markMessageAsRead:(id)arg1 ;
-(void)_setChatProperties:(id)arg1 ;
-(id)allChatProperties;
-(id)valueForProperty:(id)arg1 ofParticipant:(id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3 ;
-(BOOL)_hasCommunicatedOnService:(id)arg1 ;
-(BOOL)canAddParticipants:(id)arg1 ;
-(void)_invitePendingParticipants;
-(void)addPendingParticipants:(id)arg1 ;
-(BOOL)hasStoredMessageWithGUID:(id)arg1 ;
-(id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4 ;
-(void)setFrequentReplies:(NSArray *)arg1 ;
-(NSMutableSet *)_guids;
-(void)_setGUIDs:(id)arg1 ;
-(IMAccount *)account;
-(void)_itemsDidChange:(id)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(IMHandle *)recipient;
-(void)setRecipient:(IMHandle *)arg1 ;
-(NSString *)persistentID;
-(NSArray *)participants;
-(IMMessage *)lastFinishedMessage;
-(BOOL)authorizedToSendCurrentLocationMessage;
-(BOOL)canSendCurrentLocationMessage;
-(void)sendCurrentLocationMessage;
-(void)leave;
-(id)sendProgressDelegate;
-(void)setSendProgressDelegate:(id)arg1 ;
-(void)markAllMessagesAsRead;
-(IMMessage *)lastIncomingMessage;
-(void)sendMessage:(id)arg1 ;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(long long)lastFinishedMessageID;
-(NSDate *)lastFinishedMessageDate;
-(void*)contextInfo;
-(void)setContextInfo:(void*)arg1 ;
-(unsigned long long)unreadMessageCount;
-(IMMessage *)lastMessage;
-(void)updateIsFiltered:(BOOL)arg1 ;
-(BOOL)isFiltered;
-(id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1 ;
-(unsigned char)chatStyle;
-(NSString *)chatIdentifier;
-(id)valueForChatProperty:(id)arg1 ;
-(IMMessage *)lastIncomingFinishedMessage;
-(BOOL)canLeaveChat;
-(long long)joinState;
-(void)inviteParticipants:(id)arg1 reason:(id)arg2 ;
-(void)removeParticipants:(id)arg1 reason:(id)arg2 ;
-(BOOL)deleteAllHistory;
-(NSArray *)frequentReplies;
-(NSString *)localTypingMessageGUID;
-(BOOL)localUserIsTyping;
-(BOOL)localUserIsRecording;
-(void)markAsSpam;
-(void)setValue:(id)arg1 forChatProperty:(id)arg2 ;
-(void)_setupObservation;
-(NSString *)roomName;
-(void)join;
@end

