/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity {

	SSPersistentCache* _persistentCache;

}
+(id)allPropertyKeys;
+(unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2 ;
+(id)databaseTable;
-(id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2 ;
-(void)setPersistentCache:(id)arg1 ;
-(id)dataBlob:(BOOL*)arg1 ;
-(void)dealloc;
-(id)description;
@end

