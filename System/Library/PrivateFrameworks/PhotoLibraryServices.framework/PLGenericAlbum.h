/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLGenericAlbum.h>
#import <libobjc.A.dylib/PLAlbumProtocol.h>
#import <libobjc.A.dylib/PLDerivedAlbumOrigin.h>
#import <libobjc.A.dylib/PLIndexMappersDataOrigin.h>

@protocol PLIndexMappingCache;
@class NSNumber, NSMutableOrderedSet, NSString, UIImage, NSDictionary, NSURL, NSObject, PLPhotoLibrary, NSDate, NSOrderedSet, PLManagedAsset, NSArray;

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin> {

	NSObject*<PLIndexMappingCache> _derivededAlbums[5];
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (assign,nonatomic) short trashedState; 
@property (nonatomic,retain) NSDate * trashedDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) int kindValue; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (assign,nonatomic) BOOL isPinned; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isSmartAlbum; 
@property (nonatomic,readonly) BOOL isOwnPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isRootFolder; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
+(id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumsWithCloudGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)_predicateForSupportedAlbumTypes;
+(id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)cameraRollAlbumInLibrary:(id)arg1 ;
+(id)userLibraryAlbumInLibrary:(id)arg1 ;
+(id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)rootFolderInLibrary:(id)arg1 ;
+(id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1 ;
+(id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3 ;
+(NSObject*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2 ;
+(id)allSyncedAlbumsInManagedObjectContext:(id)arg1 ;
+(id)allAlbumsInManagedObjectContext:(id)arg1 ;
+(BOOL)isSmartAlbumForKind:(int)arg1 ;
+(BOOL)is1WaySyncKind:(int)arg1 ;
+(id)albumWithUUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)allAssetsAlbumInLibrary:(id)arg1 ;
+(id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1 ;
+(id)syncProgressAlbumInLibrary:(id)arg1 ;
+(id)otaRestoreProgressAlbumInLibrary:(id)arg1 ;
+(id)filesystemImportProgressAlbumInLibrary:(id)arg1 ;
+(id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(id)childKeyForOrdering;
+(id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1 ;
+(id)localizedTitleForAlbumKind:(int)arg1 ;
+(BOOL)isFolder:(int)arg1 ;
+(id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)wallpaperAlbumInLibrary:(id)arg1 ;
+(id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_unpushedParentsOfAlbums:(id)arg1 ;
+(id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4 ;
+(id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)uuidFromGroupURL:(id)arg1 ;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingKindValue;
+(id)allPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVerticalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allHorizontalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVideosAlbumInLibrary:(id)arg1 ;
+(id)iTunesLibraryAlbumInLibrary:(id)arg1 ;
+(id)trashBinAlbumInLibrary:(id)arg1 ;
+(id)allAlbumsInLibrary:(id)arg1 ;
+(id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithName:(id)arg1 inLibrary:(id)arg2 ;
+(void)resetAlbumStateForCloudInLibrary:(id)arg1 ;
+(void)removeAllUserAlbumsAndFoldersInLibrary:(id)arg1 ;
+(void)removeEmptyAlbumsForCloudResetInLibrary:(id)arg1 ;
+(void)removeTrashedAlbumsAndFoldersForCloudResetInLibrary:(id)arg1 ;
+(id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2 ;
+(id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewAlbumIntoLibrary:(id)arg1 ;
+(id)insertNewSyncedEventIntoLibrary:(id)arg1 ;
+(id)insertNewFaceAlbumIntoLibrary:(id)arg1 ;
+(id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)allFavoritesAlbumInLibrary:(id)arg1 ;
+(id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3 ;
-(id)cplAlbumChangeInPhotoLibrary:(id)arg1 ;
-(void)applyPropertiesFromAlbumChange:(id)arg1 ;
-(id)_itemIdentifier;
-(void)dealloc;
-(unsigned long long)count;
-(NSString *)description;
-(NSString *)name;
-(BOOL)isEmpty;
-(NSString *)localizedTitle;
-(void)delete;
-(void)applyTrashedState:(short)arg1 ;
-(BOOL)isOwnPhotoStreamAlbum;
-(BOOL)isSmartAlbum;
-(void)awakeFromInsert;
-(void)setKindValue:(int)arg1 ;
-(BOOL)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(void)registerForChanges;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(id)childKeyForOrdering;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(id)_kindDescription;
-(id)_compactDebugDescription;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)_applyTrashedState:(short)arg1 date:(BOOL)arg2 :(id)arg3 ;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(void)enumerateDerivedAlbums:(/*^block*/id)arg1 ;
-(void)registerDerivedAlbum:(NSObject*)arg1 ;
-(void)enumerateDerivedIndexMappers:(/*^block*/id)arg1 ;
-(BOOL)hasDerivedIndexMappers;
-(id)childManagedObject;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(unsigned long long)approximateCount;
-(UIImage *)posterImage;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(int)kindValue;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1 ;
-(BOOL)isLibrary;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isWallpaperAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;
-(BOOL)canMoveToTrash;
-(PLPhotoLibrary *)photoLibrary;
-(BOOL)isRootFolder;
-(id)_prettyDescription;
@end

