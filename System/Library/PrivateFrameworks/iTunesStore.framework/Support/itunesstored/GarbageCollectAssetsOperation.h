/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSUpdatableAssetCacheManager;

@interface GarbageCollectAssetsOperation : ISOperation {

	SSUpdatableAssetCacheManager* _cacheManager;
	/*^block*/id _completion;

}
-(id)initWithClientIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)run;
@end

