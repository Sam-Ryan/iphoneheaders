/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableSet, NSSet, NSArray;

@interface GKAddressBookUpdater : NSObject {

	BOOL _shouldAddPlayerInfoToAddressBook;
	NSString* _authenticatedPlayerID;
	NSMutableDictionary* _personLookup;
	NSMutableDictionary* _playerLookup;
	NSMutableSet* _addedEmailSet;
	NSMutableSet* _removedEmailSet;
	NSSet* _previousEmailSet;

}

@property (nonatomic,retain) NSString * authenticatedPlayerID;                   //@synthesize authenticatedPlayerID=_authenticatedPlayerID - In the implementation block
@property (nonatomic,readonly) NSArray * addedEmails; 
@property (nonatomic,readonly) NSArray * removedEmails; 
@property (nonatomic,readonly) NSArray * playerIDs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) NSMutableDictionary * personLookup;                 //@synthesize personLookup=_personLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerLookup;                 //@synthesize playerLookup=_playerLookup - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedEmailSet;                       //@synthesize addedEmailSet=_addedEmailSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * removedEmailSet;                     //@synthesize removedEmailSet=_removedEmailSet - In the implementation block
@property (nonatomic,retain) NSSet * previousEmailSet;                           //@synthesize previousEmailSet=_previousEmailSet - In the implementation block
@property (assign,nonatomic) BOOL shouldAddPlayerInfoToAddressBook;              //@synthesize shouldAddPlayerInfoToAddressBook=_shouldAddPlayerInfoToAddressBook - In the implementation block
-(void)fetchSentContactAddresses;
-(NSMutableSet *)addedEmailSet;
-(NSMutableSet *)removedEmailSet;
-(NSMutableDictionary *)playerLookup;
-(void)setPreviousEmailSet:(NSSet *)arg1 ;
-(NSSet *)previousEmailSet;
-(NSArray *)addedEmails;
-(NSArray *)removedEmails;
-(NSMutableDictionary *)personLookup;
-(id)hashEmailAddress:(id)arg1 ;
-(void)storeSentContactAddresses;
-(void)setPlayerLookup:(NSMutableDictionary *)arg1 ;
-(id)initWithAuthenticatedPlayerID:(id)arg1 ;
-(void)gatherChangesWithHandler:(/*^block*/id)arg1 ;
-(void)updatePlayerLookupTableWithNetworkIDs:(id)arg1 ;
-(void)updateAddressBookWithAuthenticatedPlayerProfile:(id)arg1 complete:(/*^block*/id)arg2 ;
-(void)updateAddressBookWithPlayerProfiles:(id)arg1 complete:(/*^block*/id)arg2 ;
-(void)setAuthenticatedPlayerID:(NSString *)arg1 ;
-(void)setPersonLookup:(NSMutableDictionary *)arg1 ;
-(void)setAddedEmailSet:(NSMutableSet *)arg1 ;
-(void)setRemovedEmailSet:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(BOOL)hasChanges;
-(BOOL)shouldAddPlayerInfoToAddressBook;
-(void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1 ;
-(NSArray *)playerIDs;
-(NSString *)authenticatedPlayerID;
@end

