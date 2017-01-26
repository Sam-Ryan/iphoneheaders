/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLTencentWeiboClientSessionProtocol.h>
#import <libobjc.A.dylib/SLMicroBlogSheetDelegate.h>

@protocol SLTencentWeiboRemoteSessionProtocol, OS_dispatch_queue, OS_dispatch_semaphore;
@class SLRemoteSessionProxy, NSCache, NSObject, NSBundle, CLInUseAssertion, NSString;

@interface SLTencentWeiboSession : NSObject <SLTencentWeiboClientSessionProtocol, SLMicroBlogSheetDelegate> {

	SLRemoteSessionProxy*<SLTencentWeiboRemoteSessionProtocol> _remoteSession;
	NSCache* _profileImageCache;
	NSObject*<OS_dispatch_queue> _remoteSessionQueue;
	NSObject*<OS_dispatch_semaphore> _remoteSessionQueueSemaphore;
	NSBundle* _serviceBundle;
	CLInUseAssertion* _locationInUseAssertion;
	/*^block*/id _connectionResetBlock;
	/*^block*/id _locationInformationChangedBlock;

}

@property (nonatomic,copy) id connectionResetBlock;                         //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
@property (nonatomic,copy) id locationInformationChangedBlock;              //@synthesize locationInformationChangedBlock=_locationInformationChangedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteInterface;
-(id)init;
-(void)acceptLocationUpdate:(id)arg1 ;
-(id)_createOrGetRemoteSession;
-(void)setConnectionResetBlock:(id)arg1 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCurrentUrlLimits:(/*^block*/id)arg1 ;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1 ;
-(void)setGeotagStatus:(int)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/id)arg1 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/id)arg1 ;
-(void)beginPotentialLocationUse;
-(void)endPotentialLocationUse;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(void)deferExpensiveOperations;
-(void)stopDeferringExpensiveOperations;
-(long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2 ;
-(id)locationInformationChangedBlock;
-(void)setLocationInformationChangedBlock:(id)arg1 ;
-(void)tearDownConnectionToRemoteSession;
-(void)setClientInfo:(id)arg1 ;
-(void)setGeotagAccountSetting:(BOOL)arg1 ;
-(id)connectionResetBlock;
-(void)revokeAllAccessTokensForDevice;
-(void)revokeAccessTokenForAppWithOauthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

