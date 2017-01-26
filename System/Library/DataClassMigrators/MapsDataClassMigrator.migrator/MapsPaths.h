/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface MapsPaths : NSObject {

	NSURL* _libraryURL;
	NSString* _mapsDirectory;
	NSString* _cacheDirectory;
	NSString* _nanoDirectory;
	NSString* _bookmarksSettingsPath;
	NSString* _geoBookmarksSettingsPath;
	NSString* _directionsSettingsPath;
	NSString* _historySettingsPath;
	NSString* _geoHistorySettingsPath;
	NSString* _nanoHistorySettingsPath;
	NSString* _failedSearchesSettingsPath;
	NSString* _failedGeoSearchesSettingsPath;
	NSString* _failedDirectionsSettingsPath;
	NSString* _failedGeoDirectionsSettingsPath;
	NSString* _transitAppRankerPath;
	NSString* _directionsCachePath;
	NSString* _pinsSettingsPath;
	NSString* _reportAProblemDirectionsRecordingsPath;
	NSString* _reportAProblemSearchRecordingsPath;
	NSString* _favoritesSyncedMarkerFile;

}

@property (nonatomic,readonly) NSString * homeDirectory; 
@property (nonatomic,readonly) NSString * mapsDirectory;                                       //@synthesize mapsDirectory=_mapsDirectory - In the implementation block
@property (nonatomic,readonly) NSString * cacheDirectory;                                      //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,readonly) NSString * nanoDirectory;                                       //@synthesize nanoDirectory=_nanoDirectory - In the implementation block
@property (nonatomic,readonly) NSString * bookmarksSettingsPath;                               //@synthesize bookmarksSettingsPath=_bookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoBookmarksSettingsPath;                            //@synthesize geoBookmarksSettingsPath=_geoBookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsSettingsPath;                              //@synthesize directionsSettingsPath=_directionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * historySettingsPath;                                 //@synthesize historySettingsPath=_historySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoHistorySettingsPath;                              //@synthesize geoHistorySettingsPath=_geoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * nanoHistorySettingsPath;                             //@synthesize nanoHistorySettingsPath=_nanoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedSearchesSettingsPath;                          //@synthesize failedSearchesSettingsPath=_failedSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoSearchesSettingsPath;                       //@synthesize failedGeoSearchesSettingsPath=_failedGeoSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoDirectionsSettingsPath;                     //@synthesize failedGeoDirectionsSettingsPath=_failedGeoDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedDirectionsSettingsPath;                        //@synthesize failedDirectionsSettingsPath=_failedDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * transitAppRankerPath;                                //@synthesize transitAppRankerPath=_transitAppRankerPath - In the implementation block
@property (nonatomic,readonly) NSString * pinsSettingsPath;                                    //@synthesize pinsSettingsPath=_pinsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsCachePath;                                 //@synthesize directionsCachePath=_directionsCachePath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemDirectionsRecordingsPath;              //@synthesize reportAProblemDirectionsRecordingsPath=_reportAProblemDirectionsRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemSearchRecordingsPath;                  //@synthesize reportAProblemSearchRecordingsPath=_reportAProblemSearchRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * favoritesSyncedMarkerFile;                           //@synthesize favoritesSyncedMarkerFile=_favoritesSyncedMarkerFile - In the implementation block
+(id)pinsSettingsPath;
+(id)reportAProblemDirectionsRecordingsPath;
+(id)failedSearchesSettingsPath;
+(id)mapsDirectory;
+(id)nanoDirectory;
+(id)geoBookmarksSettingsPath;
+(id)failedGeoDirectionsSettingsPath;
+(id)historySettingsPath;
+(id)favoritesSyncedMarkerFile;
+(id)reportAProblemSearchRecordingsPath;
+(id)nanoHistorySettingsPath;
+(id)directionsSettingsPath;
+(id)transitAppRankerPath;
+(id)failedGeoSearchesSettingsPath;
+(id)bookmarksSettingsPath;
+(id)directionsCachePath;
+(id)geoHistorySettingsPath;
+(id)failedDirectionsSettingsPath;
+(id)storageLocationsSetAtLocation:(long long)arg1 ;
+(id)cacheDirectory;
-(NSString *)pinsSettingsPath;
-(NSString *)reportAProblemDirectionsRecordingsPath;
-(NSString *)failedSearchesSettingsPath;
-(NSString *)mapsDirectory;
-(NSString *)nanoDirectory;
-(BOOL)shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
-(NSString *)geoBookmarksSettingsPath;
-(NSString *)failedGeoDirectionsSettingsPath;
-(NSString *)historySettingsPath;
-(BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg1 ;
-(id)initWithLibraryDirectoryURL:(id)arg1 ;
-(BOOL)_deleteSyncedFileAtPath:(id)arg1 ;
-(NSString *)favoritesSyncedMarkerFile;
-(NSString *)reportAProblemSearchRecordingsPath;
-(NSString *)nanoHistorySettingsPath;
-(NSString *)directionsSettingsPath;
-(NSString *)transitAppRankerPath;
-(NSString *)failedGeoSearchesSettingsPath;
-(NSString *)bookmarksSettingsPath;
-(NSString *)directionsCachePath;
-(NSString *)geoHistorySettingsPath;
-(NSString *)failedDirectionsSettingsPath;
-(BOOL)deleteFavoritesSyncedMarkerFile;
-(NSString *)homeDirectory;
-(NSString *)cacheDirectory;
@end

