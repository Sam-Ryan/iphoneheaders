/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKBulletin.h>

@class NSString, GKPlayerInternal;

@interface GKFriendRequestBulletin : GKBulletin {

	int _friendBadgeCount;
	NSString* _friendID;
	GKPlayerInternal* _friendPlayer;

}

@property (assign) int friendBadgeCount;                         //@synthesize friendBadgeCount=_friendBadgeCount - In the implementation block
@property (retain) NSString * friendID;                          //@synthesize friendID=_friendID - In the implementation block
@property (retain) GKPlayerInternal * friendPlayer;              //@synthesize friendPlayer=_friendPlayer - In the implementation block
-(id)initWithPushNotification:(id)arg1 ;
-(int)friendBadgeCount;
-(NSString *)friendID;
-(GKPlayerInternal *)friendPlayer;
-(void)setFriendPlayer:(GKPlayerInternal *)arg1 ;
-(void)badgeGameCenter;
-(void)expireFriendRequestCaches;
-(void)expireFriendCaches;
-(void)loadFriendWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFriendBadgeCount:(int)arg1 ;
-(void)setFriendID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

