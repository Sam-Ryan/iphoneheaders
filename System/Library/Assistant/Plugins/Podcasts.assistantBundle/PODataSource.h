/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSString, NSDate;

@interface PODataSource : NSObject {

	BOOL _constructingData;
	NSMutableDictionary* _podcastCollectionsByUUID;
	NSMutableDictionary* _podcastStationsByUUID;
	NSMutableArray* _podcastRevisions;
	NSString* _databaseUUID;
	NSString* _firstRevisionUUID;
	NSDate* _podcastDataPlistLastModified;
	NSDate* _revisionsDataPlistLastModified;

}

@property (nonatomic,retain) NSMutableDictionary * podcastCollectionsByUUID;              //@synthesize podcastCollectionsByUUID=_podcastCollectionsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * podcastStationsByUUID;                 //@synthesize podcastStationsByUUID=_podcastStationsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * podcastRevisions;                           //@synthesize podcastRevisions=_podcastRevisions - In the implementation block
@property (retain) NSString * databaseUUID;                                               //@synthesize databaseUUID=_databaseUUID - In the implementation block
@property (retain) NSString * firstRevisionUUID;                                          //@synthesize firstRevisionUUID=_firstRevisionUUID - In the implementation block
@property (retain) NSDate * podcastDataPlistLastModified;                                 //@synthesize podcastDataPlistLastModified=_podcastDataPlistLastModified - In the implementation block
@property (retain) NSDate * revisionsDataPlistLastModified;                               //@synthesize revisionsDataPlistLastModified=_revisionsDataPlistLastModified - In the implementation block
@property (assign) BOOL constructingData;                                                 //@synthesize constructingData=_constructingData - In the implementation block
+(id)sharedInstance;
-(id)podcastsIndexPath;
-(id)podcastRevisionsSinceAnchor:(unsigned long long)arg1 ;
-(id)domainObjectWithUUID:(id)arg1 ;
-(id)podcastStationWithUUID:(id)arg1 ;
-(id)podcastStationsMatchingString:(id)arg1 maxResults:(long long)arg2 ;
-(id)arrayFromPlistURL:(id)arg1 ;
-(id)constructModelObjectsFromDictionaries:(id)arg1 withIndexPath:(id)arg2 modelObjectClass:(Class)arg3 ;
-(void)setPodcastDataPlistLastModified:(NSDate *)arg1 ;
-(void)setFirstRevisionUUID:(NSString *)arg1 ;
-(void)constructRevisionsFromDictionary:(id)arg1 isPodcastCollections:(BOOL)arg2 ;
-(void)setRevisionsDataPlistLastModified:(NSDate *)arg1 ;
-(void)constructRevisionFromDictionary:(id)arg1 isPodcastCollections:(BOOL)arg2 isDelete:(BOOL)arg3 ;
-(id)dbPlistURL;
-(id)constructModelObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 ;
-(id)podcastModelObjectsInArray:(id)arg1 matchingString:(id)arg2 maxResults:(long long)arg3 ;
-(NSMutableDictionary *)podcastCollectionsByUUID;
-(NSMutableDictionary *)podcastStationsByUUID;
-(NSMutableArray *)podcastRevisions;
-(id)podcastCollectionWithUUID:(id)arg1 ;
-(id)podcastCollectionsMatchingString:(id)arg1 maxResults:(long long)arg2 ;
-(BOOL)isPodcastsInstalled;
-(void)setPodcastCollectionsByUUID:(NSMutableDictionary *)arg1 ;
-(void)setPodcastRevisions:(NSMutableArray *)arg1 ;
-(void)initializeDataFromDictionary;
-(id)revisionPlistURL;
-(NSDate *)revisionsDataPlistLastModified;
-(NSDate *)podcastDataPlistLastModified;
-(BOOL)isPodcastDataStale;
-(BOOL)constructingData;
-(NSString *)firstRevisionUUID;
-(BOOL)isPodcastRevisionDataStale;
-(void)setConstructingData:(BOOL)arg1 ;
-(void)setPodcastStationsByUUID:(NSMutableDictionary *)arg1 ;
-(id)containerURL;
-(NSString *)databaseUUID;
-(void)setDatabaseUUID:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(id)podcastCollections;
-(id)podcastStations;
-(id)validity;
@end

