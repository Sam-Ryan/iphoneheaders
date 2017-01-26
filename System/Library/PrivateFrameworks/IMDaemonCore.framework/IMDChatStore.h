/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMDChatStore : NSObject {

	NSString* _lastModificationStamp;

}

@property (retain) NSString * modificationStamp;              //@synthesize lastModificationStamp=_lastModificationStamp - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)setModificationStamp:(NSString *)arg1 ;
-(id)chatsGUIDsForMessageWithGUID:(id)arg1 ;
-(NSString *)modificationStamp;
-(void)_updateModificationDate;
-(id)storeChat:(id)arg1 ;
-(unsigned long long)unreadCountForChat:(id)arg1 ;
-(void)deleteChat:(id)arg1 ;
-(void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 ;
-(void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2 ;
-(id)loadAllChats;
-(void)archiveChat:(id)arg1 ;
-(void)unarchiveChat:(id)arg1 ;
-(id)chatsWithHandle:(id)arg1 onService:(id)arg2 ;
-(id)chatsWithRoomname:(id)arg1 onService:(id)arg2 ;
-(void)setChatIsFiltered:(BOOL)arg1 withChatGuid:(id)arg2 ;
@end

