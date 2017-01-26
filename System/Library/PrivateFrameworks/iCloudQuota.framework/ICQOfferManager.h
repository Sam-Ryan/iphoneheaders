/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSURLSessionDataTask, NSTimer;

@interface ICQOfferManager : NSObject {

	NSURLSession* _sharedURLSession;
	NSURLSessionDataTask* _fetchOfferDataTask;
	NSURLSessionDataTask* _teardownAckDataTask;
	NSTimer* _invalidationTimer;
	BOOL _isRegisteredForDarwinNotifications;
	long long _testKind;
	long long _testLevel;

}

@property (assign,nonatomic) long long testKind;               //@synthesize testKind=_testKind - In the implementation block
@property (assign,nonatomic) long long testLevel;              //@synthesize testLevel=_testLevel - In the implementation block
+(id)sharedOfferManager;
-(void)dealloc;
-(id)init;
-(id)currentOffer;
-(void)setTestKind:(long long)arg1 ;
-(void)setTestLevel:(long long)arg1 ;
-(long long)testKind;
-(long long)testLevel;
-(void)_registerForDarwinNotifications;
-(id)persistedOffer;
-(id)_lastPushNotificationID;
-(void)_fetchOfferForAccount:(id)arg1 notificationID:(id)arg2 ;
-(void)_setupTimerForInvalidationDate:(id)arg1 ;
-(void)_teardownInvalidationTimer;
-(BOOL)_fetchPersistedOfferIfNeeded:(id*)arg1 ;
-(id)currentOfferForBundleIdentifier:(id)arg1 ;
-(void)_unregisterForDarwinNotifications;
-(void)_fetchOfferForAccount:(id)arg1 notificationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)URLForAccount:(id)arg1 quotaKey:(id)arg2 ;
-(BOOL)_attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2 ;
-(void)_addCommonHeadersToRequest:(id)arg1 account:(id)arg2 ;
-(void)persistOffer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_respondWithTeardownAcknowledgementForNotificationDictionary:(id)arg1 store:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_sanitizedNotificationDictionary:(id)arg1 account:(id)arg2 ;
-(void)_postPushReceivedDarwinNotification;
-(void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_pushNotificationDictionary;
-(void)_firedInvalidationTimer:(id)arg1 ;
-(BOOL)fetchOfferIfNeeded;
-(void)processPushNotificationDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handlePushReceivedDarwinNotification;
-(void)persistOffer:(id)arg1 ;
@end

