/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSNotificationQueue : NSObject {

	id _notificationCenter;
	id _asapQueue;
	id _asapObs;
	id _idleQueue;
	id _idleObs;

}
+(id)defaultQueue;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)_flushNotificationQueue;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 ;
-(void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4 ;
@end

