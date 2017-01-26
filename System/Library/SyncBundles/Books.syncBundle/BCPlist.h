/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BCPlist : NSObject {

	NSString* _path;

}

@property (nonatomic,retain,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)promisableItemsFromItems:(id)arg1 ;
+(BOOL)canPromiseItem:(id)arg1 ;
-(BOOL)removeItemsByPersistentID:(id)arg1 ;
-(void)generateDirectory;
-(void)processDeletesFile;
-(id)booksSortedByKey:(id)arg1 ;
-(id)sortedPersistentIDs:(BOOL)arg1 ;
-(BOOL)isExistingEntry:(id)arg1 ;
-(void)regenerateMissingPersistentIDs;
-(id)uploadsByPersistentID;
-(id)entriesWithPath;
-(BOOL)replaceItems:(id)arg1 ;
-(id)unfilteredPersistentIDs;
-(void)removeItemsFromSidecar:(id)arg1 ;
-(id)sortedPaths;
-(id)existingPersistentIDs;
-(id)books;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(BOOL)addItems:(id)arg1 ;
-(void)resetPaths;
-(id)paths;
@end

