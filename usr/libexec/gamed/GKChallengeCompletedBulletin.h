/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKChallengeBulletin.h>

@interface GKChallengeCompletedBulletin : GKChallengeBulletin
+(void)loadBulletinsForPushNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)notifyClient:(id)arg1 ;
-(unsigned long long)launchEventType;
-(void)assembleBulletin;
-(void)dealloc;
-(id)init;
-(void)handleAction:(id)arg1 ;
@end

