/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger {

	NSPersistentStoreCoordinator* fPersistentStoreCoordinator;

}

@property (nonatomic,retain) NSPersistentStoreCoordinator * fPersistentStoreCoordinator; 
+(long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2 ;
+(id)instanceWithModelURL:(id)arg1 ;
+(id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2 ;
+(id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2 ;
+(void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3 ;
+(id)getPersistenCoordinator:(id)arg1 ;
+(long long)getVersionForMappingModel:(id)arg1 ;
+(id)dbOptions:(BOOL)arg1 ;
+(long long)mapToDBMErrorCode:(id)arg1 ;
+(id)migrateDataStoreAtLocation:(id)arg1 withGetDestinationModel:(/*^block*/id)arg2 isEncrypted:(BOOL)arg3 ;
+(long long)versionForDBAtLocation:(id)arg1 ;
+(BOOL)destroyDBAtLocation:(id)arg1 withModelAtLocation:(id)arg2 ;
+(BOOL)moveDBAtLocation:(id)arg1 toLocation:(id)arg2 withModelAtLocation:(id)arg3 ;
+(id)getStoreURLforContext:(id)arg1 ;
+(id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2 ;
+(BOOL)replacePersistentStore:(id)arg1 withURL:(id)arg2 ;
-(id)init;
-(id)createManagedObjectContext;
-(NSPersistentStoreCoordinator *)fPersistentStoreCoordinator;
-(BOOL)addDataStoreAtLocation:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(void)removeDataStoreAtLocation:(id)arg1 ;
-(void)setFPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
@end

