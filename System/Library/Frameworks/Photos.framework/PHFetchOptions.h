/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSArray, NSString;

@interface PHFetchOptions : NSObject <NSCopying> {

	BOOL _includeHiddenAssets;
	BOOL _includeAllBurstAssets;
	BOOL _wantsIncrementalChangeDetails;
	BOOL _reverseSortOrder;
	BOOL _includeWallpaperAssets;
	BOOL _includeDuplicateAssets;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _includeAssetSourceTypes;
	unsigned long long _fetchLimit;
	unsigned long long _fetchPropertyHint;
	long long _chunkSizeForFetch;
	long long _cacheSizeForFetch;
	NSString* _transientIdentifier;
	NSPredicate* _internalPredicate;
	NSArray* _internalSortDescriptors;
	NSPredicate* _internalInclusionPredicate;
	NSArray* _customObjectIDSortOrder;

}

@property (nonatomic,retain) NSPredicate * predicate;                                 //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                               //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenAssets;                                //@synthesize includeHiddenAssets=_includeHiddenAssets - In the implementation block
@property (assign,nonatomic) BOOL includeAllBurstAssets;                              //@synthesize includeAllBurstAssets=_includeAllBurstAssets - In the implementation block
@property (assign,nonatomic) unsigned long long includeAssetSourceTypes;              //@synthesize includeAssetSourceTypes=_includeAssetSourceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                           //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsIncrementalChangeDetails;                      //@synthesize wantsIncrementalChangeDetails=_wantsIncrementalChangeDetails - In the implementation block
@property (assign,nonatomic) unsigned long long fetchPropertyHint;                    //@synthesize fetchPropertyHint=_fetchPropertyHint - In the implementation block
@property (assign,nonatomic) long long chunkSizeForFetch;                             //@synthesize chunkSizeForFetch=_chunkSizeForFetch - In the implementation block
@property (assign,nonatomic) long long cacheSizeForFetch;                             //@synthesize cacheSizeForFetch=_cacheSizeForFetch - In the implementation block
@property (nonatomic,retain) NSString * transientIdentifier;                          //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,retain) NSPredicate * internalPredicate;                         //@synthesize internalPredicate=_internalPredicate - In the implementation block
@property (nonatomic,retain) NSArray * internalSortDescriptors;                       //@synthesize internalSortDescriptors=_internalSortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * internalInclusionPredicate;                //@synthesize internalInclusionPredicate=_internalInclusionPredicate - In the implementation block
@property (assign,nonatomic) BOOL reverseSortOrder;                                   //@synthesize reverseSortOrder=_reverseSortOrder - In the implementation block
@property (assign,nonatomic) BOOL includeWallpaperAssets;                             //@synthesize includeWallpaperAssets=_includeWallpaperAssets - In the implementation block
@property (assign,nonatomic) BOOL includeDuplicateAssets;                             //@synthesize includeDuplicateAssets=_includeDuplicateAssets - In the implementation block
@property (nonatomic,retain) NSArray * customObjectIDSortOrder;                       //@synthesize customObjectIDSortOrder=_customObjectIDSortOrder - In the implementation block
+(id)pu_standardFetchOptions;
+(id)fetchOptionsWithInclusiveDefaults;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setCustomObjectIDSortOrder:(NSArray *)arg1 ;
-(void)setIncludeAllBurstAssets:(BOOL)arg1 ;
-(void)setIncludeWallpaperAssets:(BOOL)arg1 ;
-(NSPredicate *)internalInclusionPredicate;
-(NSArray *)internalSortDescriptors;
-(unsigned long long)fetchPropertyHint;
-(void)setFetchPropertyHint:(unsigned long long)arg1 ;
-(void)setTransientIdentifier:(NSString *)arg1 ;
-(NSArray *)customObjectIDSortOrder;
-(BOOL)includeAllBurstAssets;
-(BOOL)includeHiddenAssets;
-(long long)chunkSizeForFetch;
-(long long)cacheSizeForFetch;
-(BOOL)includeWallpaperAssets;
-(unsigned long long)includeAssetSourceTypes;
-(BOOL)includeDuplicateAssets;
-(void)setIncludeDuplicateAssets:(BOOL)arg1 ;
-(BOOL)wantsIncrementalChangeDetails;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(void)setInternalPredicate:(NSPredicate *)arg1 ;
-(void)setIncludeHiddenAssets:(BOOL)arg1 ;
-(void)setCacheSizeForFetch:(long long)arg1 ;
-(unsigned long long)fetchLimit;
-(BOOL)reverseSortOrder;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(void)setInternalInclusionPredicate:(NSPredicate *)arg1 ;
-(void)setInternalSortDescriptors:(NSArray *)arg1 ;
-(void)setIncludeAssetSourceTypes:(unsigned long long)arg1 ;
-(NSString *)transientIdentifier;
-(void)setWantsIncrementalChangeDetails:(BOOL)arg1 ;
-(NSPredicate *)internalPredicate;
@end

