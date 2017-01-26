/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject {

	int _accountChangedToken;
	NSMapTable* _notificationHandlers;
	NSOperationQueue* _accountChangeHandlerQueue;

}

@property (assign,nonatomic) int accountChangedToken;                                   //@synthesize accountChangedToken=_accountChangedToken - In the implementation block
@property (nonatomic,retain) NSMapTable * notificationHandlers;                         //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accountChangeHandlerQueue;              //@synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue - In the implementation block
+(id)sharedNotifier;
-(void)dealloc;
-(id)init;
-(void)postAccountChangedNotification:(id)arg1 ;
-(void)registerObserver:(id)arg1 forAccountChangeNotification:(/*^block*/id)arg2 ;
-(void)unregisterObserverForAccountChangeNotification:(id)arg1 ;
-(NSMapTable *)notificationHandlers;
-(NSOperationQueue *)accountChangeHandlerQueue;
-(int)accountChangedToken;
-(void)setAccountChangedToken:(int)arg1 ;
-(void)setNotificationHandlers:(NSMapTable *)arg1 ;
-(void)setAccountChangeHandlerQueue:(NSOperationQueue *)arg1 ;
@end

