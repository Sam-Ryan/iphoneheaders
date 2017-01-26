/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
@class NSDictionary;

@interface BLTWatchKitAppList : NSObject {

	NSDictionary* _appsByAppBundleID;
	opaque_pthread_mutex_t _lock;

}
-(void)dealloc;
-(id)init;
-(void)fetchWatchKitInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)watchKitAppDefinitionWithBundleID:(id)arg1 ;
-(void)_fetchWatchKitInfo;
@end

