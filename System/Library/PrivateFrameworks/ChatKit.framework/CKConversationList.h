/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CKConversation;

@interface CKConversationList : NSObject {

	NSMutableArray* _trackedConversations;
	BOOL _loadingConversations;
	BOOL _loadedConversations;
	CKConversation* _pendingConversation;

}

@property (nonatomic,readonly) BOOL loadingConversations;                       //@synthesize loadingConversations=_loadingConversations - In the implementation block
@property (nonatomic,retain) CKConversation * pendingConversation;              //@synthesize pendingConversation=_pendingConversation - In the implementation block
+(void)initialize;
+(id)sharedConversationList;
+(void)_handleRegistryDidLoadNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3 create:(BOOL)arg4 ;
-(long long)unreadCount;
-(CKConversation *)pendingConversation;
-(void)setNeedsReload;
-(void)unpendConversation;
-(void)resetCaches;
-(void)_beginTrackingAllExistingChatsIfNeeded;
-(void)_abChanged:(id)arg1 ;
-(void)_handleRegistryDidRegisterChatNotification:(id)arg1 ;
-(void)_handleRegistryWillUnregisterChatNotification:(id)arg1 ;
-(void)_handleMemoryWarning:(id)arg1 ;
-(id)conversations;
-(id)_alreadyTrackedConversationForChat:(id)arg1 ;
-(void)beginTrackingConversation:(id)arg1 forChat:(id)arg2 ;
-(id)_beginTrackingConversationWithChat:(id)arg1 ;
-(id)_conversationForChat:(id)arg1 ;
-(void)_postConversationListChangedNotification;
-(void)setPendingConversation:(CKConversation *)arg1 ;
-(void)stopTrackingConversation:(id)arg1 ;
-(BOOL)_shouldFilterForParticipants:(id)arg1 ;
-(id)conversationForExistingChatWithGroupID:(id)arg1 ;
-(BOOL)loadingConversations;
-(void)resort;
-(id)conversationForExistingChatWithGUID:(id)arg1 ;
-(id)_copyEntitiesForAddressStrings:(id)arg1 ;
-(id)conversationForExistingChat:(id)arg1 ;
-(id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1 ;
-(id)activeConversations;
-(BOOL)hasActiveConversations;
-(long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1 ;
-(id)unreadLastMessages;
-(void)deleteConversation:(id)arg1 ;
-(void)deleteConversations:(id)arg1 ;
-(id)pendingConversationCreatingIfNecessary;
@end
