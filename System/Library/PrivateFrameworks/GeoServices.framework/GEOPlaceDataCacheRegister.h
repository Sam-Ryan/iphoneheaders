/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPlaceDataCacheRegister : NSObject {

	NSMutableDictionary* _caches;
	NSMutableDictionary* _freeable;

}
+(void)setDiskCachePath:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)deletePhoneNumberMapping;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(void)evictAllEntries;
-(id)allCaches;
-(id)allCacheEntries;
-(id)cacheForProviderID:(int)arg1 ;
-(id)_cacheKeysPerSize;
@end

