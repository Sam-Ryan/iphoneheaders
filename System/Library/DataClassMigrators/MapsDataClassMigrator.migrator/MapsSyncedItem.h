/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSynced;
@class MapsSyncManager, NSString, NSDictionary;

@interface MapsSyncedItem : NSObject {

	MapsSyncManager* _manager;
	id<MapsSynced> _clientItem;
	NSString* _identifier;
	double _position;
	BOOL _shouldSync;

}

@property (assign,nonatomic,__weak) MapsSyncManager * manager;                 //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) id<MapsSynced> clientItem; 
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double position;                                  //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned long long clientPosition; 
@property (nonatomic,readonly) NSString * cloudKey; 
@property (nonatomic,readonly) NSDictionary * cloudData; 
@property (nonatomic,readonly) BOOL shouldSync; 
+(double)positionBetweenItem:(id)arg1 andItem:(id)arg2 ;
-(NSString *)cloudKey;
-(void)setClientItem:(id<MapsSynced>)arg1 ;
-(unsigned long long)clientPosition;
-(NSDictionary *)cloudData;
-(BOOL)updateFromSyncData:(id)arg1 ;
-(id<MapsSynced>)clientItem;
-(BOOL)updateFromCloudData:(id)arg1 newlyCreated:(BOOL)arg2 positionChanged:(BOOL*)arg3 ;
-(MapsSyncManager *)manager;
-(id)description;
-(NSString *)identifier;
-(void)setPosition:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)position;
-(id)initWithManager:(id)arg1 ;
-(BOOL)shouldSync;
-(id)syncData;
-(void)setManager:(MapsSyncManager *)arg1 ;
@end
