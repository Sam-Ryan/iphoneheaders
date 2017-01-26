/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:52 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3MusicLibrary, NSObject, NSOperationQueue, NSString, MSVWatchdog, DetermineArtistStoreIDLookupTypeOperation, CloudArtworkImporter;

@interface CloudArtistHeroImageImporter : NSObject {

	ML3MusicLibrary* _musicLibrary;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperationQueue* _operationQueue;
	NSString* _powerAssertionIdentifier;
	MSVWatchdog* _watchdog;
	DetermineArtistStoreIDLookupTypeOperation* _currentUpdateOpertion;
	DetermineArtistStoreIDLookupTypeOperation* _followupUpdateOpertion;
	CloudArtworkImporter* _artworkImporter;

}

@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;                                                //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                                        //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSString * powerAssertionIdentifier;                                             //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (nonatomic,retain) MSVWatchdog * watchdog;                                                          //@synthesize watchdog=_watchdog - In the implementation block
@property (nonatomic,retain) DetermineArtistStoreIDLookupTypeOperation * currentUpdateOpertion;               //@synthesize currentUpdateOpertion=_currentUpdateOpertion - In the implementation block
@property (nonatomic,retain) DetermineArtistStoreIDLookupTypeOperation * followupUpdateOpertion;              //@synthesize followupUpdateOpertion=_followupUpdateOpertion - In the implementation block
@property (nonatomic,retain) CloudArtworkImporter * artworkImporter;                                          //@synthesize artworkImporter=_artworkImporter - In the implementation block
+(id)allArtistImagesMapCacheFilePathURL;
-(long long)_synchronouslyLoadArtistUpdatePollingFrequencyFromBag;
-(DetermineArtistStoreIDLookupTypeOperation *)currentUpdateOpertion;
-(DetermineArtistStoreIDLookupTypeOperation *)followupUpdateOpertion;
-(CloudArtworkImporter *)artworkImporter;
-(void)setFollowupUpdateOpertion:(DetermineArtistStoreIDLookupTypeOperation *)arg1 ;
-(void)setCurrentUpdateOpertion:(DetermineArtistStoreIDLookupTypeOperation *)arg1 ;
-(void)_importHeroImageForArtistType:(long long)arg1 withPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_artistHeroImageUpdateFinished;
-(id)initWithMusicLibrary:(id)arg1 ;
-(void)updateArtistHeroImagesForArtistsAddedSinceLastUpdate;
-(void)cancelArtistHeroImageUpdate;
-(void)setArtworkImporter:(CloudArtworkImporter *)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)operationQueue;
-(ML3MusicLibrary *)musicLibrary;
-(NSString *)powerAssertionIdentifier;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
-(void)updateArtistHeroImages;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 ;
-(void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(MSVWatchdog *)watchdog;
-(void)setWatchdog:(MSVWatchdog *)arg1 ;
@end

