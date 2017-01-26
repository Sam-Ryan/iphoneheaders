/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKExpiringCacheObject.h>
#import <gamed/GKCacheObjectImageProtocol.h>

@class NSString, NSDate, NSNumber, NSOrderedSet, NSSet, GKFriendListCacheObject, GKGameListCacheObject, GKFriendRequestListCacheObject, GKFriendRecommendationListCacheObject, GKGameRecommendationListCacheObject, GKAchievementPointsListCacheObject, GKChallengeListCacheObject;

@interface GKPlayerProfileCacheObject : GKExpiringCacheObject <GKCacheObjectImageProtocol>

@property (nonatomic,readonly) int familiarity; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (assign,nonatomic) int availablePieces; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,retain) NSString * playerID; 
@property (nonatomic,retain) NSString * alias; 
@property (nonatomic,retain) NSString * status; 
@property (assign,nonatomic) BOOL purpleBuddyAccount; 
@property (nonatomic,retain) NSString * accountName; 
@property (assign,getter=isUnderage,nonatomic) BOOL underage; 
@property (assign,nonatomic) BOOL photoPending; 
@property (nonatomic,retain) NSDate * photoPendingExpirationDate; 
@property (assign,getter=isFindable,nonatomic) BOOL findable; 
@property (assign,nonatomic) int numberOfFriends; 
@property (assign,nonatomic) int numberOfGames; 
@property (assign,nonatomic) int numberOfAchievements; 
@property (assign,nonatomic) int numberOfAchievementPoints; 
@property (nonatomic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,retain) NSString * lastPlayedGame; 
@property (assign,nonatomic) int numberOfFriendsInCommon; 
@property (assign,nonatomic) int numberOfGamesInCommon; 
@property (assign,nonatomic) int numberOfTurns; 
@property (nonatomic,retain) NSString * facebookUserID; 
@property (nonatomic,retain) NSNumber * iCloudUserID; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSOrderedSet * orderedEmailAddresses; 
@property (nonatomic,retain) NSSet * gameRecords; 
@property (nonatomic,retain) NSSet * achievementLists; 
@property (nonatomic,retain) NSSet * leaderboardLists; 
@property (nonatomic,retain) NSSet * friendLeaderboards; 
@property (nonatomic,retain) GKFriendListCacheObject * friendList; 
@property (nonatomic,retain) GKGameListCacheObject * gameList; 
@property (nonatomic,retain) GKFriendRequestListCacheObject * friendRequestList; 
@property (nonatomic,retain) GKFriendRecommendationListCacheObject * friendRecommendationList; 
@property (nonatomic,retain) GKGameRecommendationListCacheObject * gameRecommendationList; 
@property (nonatomic,retain) GKAchievementPointsListCacheObject * achievementPointsList; 
@property (nonatomic,retain) GKChallengeListCacheObject * challengeList; 
@property (nonatomic,retain) NSSet * recentPlayerLists; 
@property (nonatomic,retain) NSSet * otherRecentGameLists; 
@property (nonatomic,retain) NSSet * ownedRecentGameLists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * image64; 
@property (nonatomic,retain) NSString * image128; 
@property (nonatomic,retain) NSString * image256; 
@property (nonatomic,retain) NSString * image512; 
@property (nonatomic,retain) NSString * imageTemplate; 
+(id)selfPlayerID;
+(id)_familiarityLookup;
+(int)familiarityForPlayerID:(id)arg1 ;
+(id)playersByFamiliarity:(id)arg1 ;
+(void)buildFamiliarilyLookupForProfile:(id)arg1 ;
+(void)addFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2 ;
+(void)removeFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2 ;
+(void)setFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2 ;
+(unsigned char)piecesToLoadForFamiliarity:(int)arg1 ;
+(id)filterPlayerIDs:(id)arg1 familiarity:(int)arg2 includeSelf:(BOOL)arg3 ;
+(id)localPlayerInManagedObjectContext:(id)arg1 ;
+(id)uniqueAttributeName;
+(const void*)uniqueObjectIDLookupKey;
+(id)playerProfilesWithPlayerIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)playerProfileWithPlayerID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)profileForPlayer:(id)arg1 context:(id)arg2 ;
+(id)playerProfilesWithPlayers:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)entityName;
-(int)familiarity;
-(BOOL)isLocalPlayer;
-(void)deleteCachedImage:(id)arg1 ;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 pieces:(unsigned char)arg3 ;
-(id)internalRepresentationWithPieces:(unsigned char)arg1 ;
-(void)expireRecentMatchesWithGame:(id)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(id)internalRepresentation;
-(BOOL)isFindable;
-(BOOL)isUnderage;
@end

