/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKTurnBasedMultiplayerBulletin.h>

@interface GKTurnBasedMultiplayerClearBulletin : GKTurnBasedMultiplayerBulletin {

	long long _clearType;

}

@property (assign) long long clearType;              //@synthesize clearType=_clearType - In the implementation block
+(void)loadBulletinsForPushNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithPushNotification:(id)arg1 ;
-(void)setClearType:(long long)arg1 ;
-(long long)clearType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

