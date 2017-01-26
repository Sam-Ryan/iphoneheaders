/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:10:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject {

	NSArray* _deletedAccounts;

}

@property (nonatomic,readonly) NSArray * deletedAccounts;              //@synthesize deletedAccounts=_deletedAccounts - In the implementation block
+(id)notificationPayloadWithAccountPairs:(id)arg1 ;
+(void)postDistributedNotificationWithAccountPairs:(id)arg1 ;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)initWithXPCEventStreamEvent:(id)arg1 ;
-(NSArray *)deletedAccounts;
@end
