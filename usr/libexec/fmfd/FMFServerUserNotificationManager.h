/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FMFServerUserNotificationManager : NSObject {

	NSMutableDictionary* _activeUserNotifications;
	NSMutableDictionary* _activeCFNotificationsByCategory;

}

@property (nonatomic,retain) NSMutableDictionary * activeUserNotifications;                      //@synthesize activeUserNotifications=_activeUserNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeCFNotificationsByCategory;              //@synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory - In the implementation block
+(id)sharedInstance;
-(void)activateNotification:(id)arg1 ;
-(void)setActiveUserNotifications:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeUserNotifications;
-(void)dealloc;
-(id)init;
-(id)initSingleton;
-(void)setActiveCFNotificationsByCategory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeCFNotificationsByCategory;
-(id)_xpcTransactionNameFor:(id)arg1 ;
@end

