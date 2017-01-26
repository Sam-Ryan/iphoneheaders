/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRecursiveLock, NSString, NSDictionary, NSArray, IMMessageItem, NSMutableDictionary, IMDServiceSession, IMDAccount, IMDService;

@interface IMDChat : NSObject {

	NSRecursiveLock* _lock;
	NSString* _accountID;
	NSString* _serviceName;
	NSDictionary* _properties;
	NSString* _chatIdentifier;
	NSString* _guid;
	NSString* _groupID;
	NSString* _roomName;
	NSString* _displayName;
	NSString* _lastAddressedLocalHandle;
	NSArray* _participants;
	IMMessageItem* _lastMessage;
	NSMutableDictionary* _chatInfo;
	long long _state;
	unsigned char _style;
	unsigned long long _unreadCount;
	long long _rowID;
	BOOL _isArchived;
	BOOL _isFiltered;
	BOOL _hasHadSuccessfulQuery;

}

@property (copy) NSString * guid; 
@property (copy) NSString * chatIdentifier; 
@property (copy) NSString * accountID; 
@property (copy) NSString * serviceName; 
@property (copy) NSArray * participants; 
@property (assign) unsigned char style; 
@property (assign) long long state; 
@property (assign) unsigned long long unreadCount; 
@property (assign) long long rowID; 
@property (copy) NSString * roomName; 
@property (copy) NSString * displayName; 
@property (copy) NSString * groupID; 
@property (retain,readonly) IMDServiceSession * serviceSession; 
@property (retain,readonly) IMDAccount * account; 
@property (retain,readonly) IMDService * service; 
@property (retain) NSDictionary * properties; 
@property (retain) IMMessageItem * lastMessage; 
@property (copy) NSString * lastAddressedLocalHandle; 
@property (retain,readonly) NSDictionary * dictionaryRepresentation; 
@property (retain,readonly) NSDictionary * chatProperties; 
@property (readonly) BOOL isArchived; 
@property (assign) BOOL isFiltered; 
@property (assign) BOOL hasHadSuccessfulQuery; 
@property (nonatomic,readonly) BOOL isUnnamedChat; 
-(NSString *)serviceName;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(unsigned char)style;
-(void)setStyle:(unsigned char)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)displayName;
-(void)updateProperties:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(IMDService *)service;
-(void)setHasHadSuccessfulQuery:(BOOL)arg1 ;
-(BOOL)hasHadSuccessfulQuery;
-(void)setIsFiltered:(BOOL)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(long long)rowID;
-(IMDAccount *)account;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSArray *)participants;
-(unsigned long long)unreadCount;
-(IMMessageItem *)lastMessage;
-(void)updateIsFiltered:(BOOL)arg1 ;
-(BOOL)isFiltered;
-(NSString *)chatIdentifier;
-(void)setLastAddressedLocalHandle:(NSString *)arg1 ;
-(void)_updateCachedParticipants;
-(void)addParticipants:(id)arg1 ;
-(void)removeParticipants:(id)arg1 ;
-(id)copyDictionaryRepresentation:(BOOL)arg1 ;
-(NSString *)lastAddressedLocalHandle;
-(void)storeAndBroadcastChatChanges;
-(id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 properties:(id)arg10 state:(long long)arg11 style:(unsigned char)arg12 isFiltered:(BOOL)arg13 hasHadSuccessfulQuery:(BOOL)arg14 ;
-(void)_setUnreadCount:(unsigned long long)arg1 ;
-(BOOL)isArchived;
-(void)_setRowID:(long long)arg1 ;
-(IMDServiceSession *)serviceSession;
-(NSDictionary *)chatProperties;
-(id)dictionaryRepresentationIncludingLastMessage;
-(void)_updateLastMessage:(id)arg1 ;
-(id)generateNewGroupID;
-(BOOL)isUnnamedChat;
-(void)updateGroupID:(id)arg1 ;
-(void)updateLastAddressedHandle:(id)arg1 ;
-(void)updateDisplayName:(id)arg1 ;
-(void)updateHasHadSuccessfulQuery:(BOOL)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)accountID;
-(void)addParticipant:(id)arg1 ;
-(NSString *)roomName;
-(void)setLastMessage:(IMMessageItem *)arg1 ;
@end

