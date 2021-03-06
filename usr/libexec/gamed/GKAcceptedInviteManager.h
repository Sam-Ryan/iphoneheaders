/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GKAcceptedInviteManager : NSObject {

	NSMutableArray* _acceptedMultiplayerInvites;
	NSMutableArray* _acceptedTurnBased;

}

@property (retain) NSMutableArray * acceptedMultiplayerInvites;              //@synthesize acceptedMultiplayerInvites=_acceptedMultiplayerInvites - In the implementation block
@property (retain) NSMutableArray * acceptedTurnBased;                       //@synthesize acceptedTurnBased=_acceptedTurnBased - In the implementation block
+(id)syncQueue;
-(void)addMultiplayerInvite:(id)arg1 ;
-(id)removeAndReturnInviteWithSessionToken:(id)arg1 ;
-(void)_addBulletin:(id)arg1 toArray:(id)arg2 ;
-(id)_fetchAndRemoveBulletinFromArray:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)multiplayerInviteForGameDescriptor:(id)arg1 ;
-(id)turnBasedInviteForGameDescriptor:(id)arg1 ;
-(void)addTurnBasedEvent:(id)arg1 ;
-(id)removeAndReturnTurnBasedInviteWithMatchID:(id)arg1 ;
-(id)multiplayerInviteForGame:(id)arg1 ;
-(id)turnBasedInviteForGame:(id)arg1 ;
-(NSMutableArray *)acceptedMultiplayerInvites;
-(void)setAcceptedMultiplayerInvites:(NSMutableArray *)arg1 ;
-(NSMutableArray *)acceptedTurnBased;
-(void)setAcceptedTurnBased:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)performSync:(/*^block*/id)arg1 ;
@end

