/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSDatabaseCache, NSMutableSet, NSString, NSObject;

@interface SSCacheObjectStore : NSObject {

	SSDatabaseCache* _databaseCache;
	NSMutableSet* _factories;
	NSString* _sessionIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)_factoryForTypeIdentifier:(id)arg1 ;
-(void)clearSession;
-(BOOL)addObject:(id)arg1 withItemIdentifier:(id)arg2 ;
-(BOOL)removeObjectWithItemIdentifier:(id)arg1 ;
-(id)cacheObjectWithItemIdentifier:(id)arg1 ;
-(void)addCacheObjectFactory:(id)arg1 ;
-(void)removeCacheObjectFactory:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithSessionIdentifier:(id)arg1 ;
@end

