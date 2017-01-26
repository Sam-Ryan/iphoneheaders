/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseConnection, ML3MusicLibrary, NSMutableDictionary, NSMutableArray, NSData;

@interface ML3SortMap : NSObject {

	ML3DatabaseConnection* _connection;
	ML3MusicLibrary* _library;
	NSMutableDictionary* _nameOrders;
	NSMutableArray* _entries;
	NSData* _minSortKey;
	NSData* _maxSortKey;
	long long _smallestNameDelta;
	BOOL _preloadNames;

}
-(id)initWithConnection:(id)arg1 library:(id)arg2 preloadNames:(BOOL)arg3 ;
-(BOOL)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2 ;
-(BOOL)commitUpdates;
-(id)nameOrders;
-(id)_sortedNameEntriesToInsertForNames:(id)arg1 ;
-(BOOL)_insertSortedNameEntriesIntoSortMap:(id)arg1 ;
-(BOOL)loadExistingSortedEntries;
-(long long)_minNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(long long)_maxNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(id)_minSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(id)_maxSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(long long)_sortKeyDistance:(id)arg1 sortKey2:(id)arg2 offset:(unsigned long long)arg3 ;
-(BOOL)attemptInsertStringsIntoSortMap:(id)arg1 ;
-(BOOL)commitFailedInsertedStrings:(id)arg1 ;
-(id)_sortKeyString:(id)arg1 ;
@end

