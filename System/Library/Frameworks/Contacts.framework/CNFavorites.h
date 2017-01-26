/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CNContactStore, NSMutableDictionary, NSArray;

@interface CNFavorites : NSObject {

	NSMutableArray* _entries;
	BOOL _dirty;
	BOOL _postCount;
	BOOL _needsReload;
	CNContactStore* _store;
	NSMutableDictionary* _uidToEntry;

}

@property (nonatomic,readonly) NSArray * entries; 
@property (getter=isFull,readonly) BOOL full; 
@property (nonatomic,retain) CNContactStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uidToEntry;              //@synthesize uidToEntry=_uidToEntry - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                    //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) BOOL postCount;                                //@synthesize postCount=_postCount - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                              //@synthesize needsReload=_needsReload - In the implementation block
+(id)sharedInstance;
+(id)favoritesPath;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSArray *)entries;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(void)addEntry:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(void)_entryIdentityChanged:(id)arg1 ;
-(void)setNeedsReload:(BOOL)arg1 ;
-(void)_addEntryToMap:(id)arg1 ;
-(void)loadEntriesIfNecessary;
-(NSMutableDictionary *)uidToEntry;
-(id)entriesForContacts:(id)arg1 ;
-(id)entriesForContact:(id)arg1 ;
-(id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(void)_scheduleSave;
-(BOOL)postCount;
-(void)setUidToEntry:(NSMutableDictionary *)arg1 ;
-(void)setPostCount:(BOOL)arg1 ;
-(BOOL)_writeFavoritesToFile:(id)arg1 ;
-(void)_delayedLookup;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(id)entryWithIdentifier:(id)arg1 forContact:(id)arg2 ;
-(BOOL)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3 ;
-(void)_entriesChangedExternally;
-(void)removeAllEntries;
-(BOOL)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(void)saveImmediately;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)recacheIdentitiesSoon;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(void)_postChangeNotification;
-(BOOL)isFull;
-(void)save;
-(BOOL)needsReload;
-(void)clearState;
@end

