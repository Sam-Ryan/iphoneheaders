/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, WBSParsecSearchClientStorage;
@class NSURLSessionConfiguration, NSTimer, NSString, NSMutableDictionary, NSURL, CLLocationManager, NSArray, NSThread, NSObject, WBSParsecSearchMescalSession, NSMutableArray, NSDate, NSNumber, CLLocation, NSURLSession, NSURLQueryItem;

@interface WBSParsecSearchClient : NSObject <CLLocationManagerDelegate> {

	NSURLSessionConfiguration* _urlSessionConfiguration;
	NSTimer* _updateTimer;
	NSString* _customFlight;
	NSString* _userAgent;
	BOOL _usesLedBelly;
	double _configurationUpdateInterval;
	NSMutableDictionary* _bagImageData;
	NSMutableDictionary* _bagImages;
	NSURL* _userGUIDURL;
	NSURL* _userGUIDFallbackURL;
	NSURL* _feedbackURL;
	NSURL* _feedbackFallbackURL;
	NSString* _userGUID;
	NSTimer* _userGUIDExpirationTimer;
	BOOL _userGUIDEnabled;
	CLLocationManager* _locationManager;
	NSArray* _supportedGeolocationServices;
	NSArray* _recentlyUsedAppIdentifierWhitelist;
	NSString* _recentlyUsedAppIdentifierListString;
	NSString* _storeFrontIdentifier;
	int ipChangeNotificationToken;
	NSString* _deviceIP;
	NSThread* _locationThread;
	BOOL _updatingLocation;
	double _timeAfterWhichLocationShouldBeUpdated;
	NSMutableDictionary* _screenScaleToSpriteImageDictionary;
	NSMutableDictionary* _screenScaleToSpriteMapDictionary;
	BOOL _mescalEnabled;
	NSURL* _mescalCertificateURL;
	NSURL* _mescalSetupURL;
	unsigned long long _mescalVersionNumber;
	NSObject*<OS_dispatch_queue> _feedbackQueue;
	WBSParsecSearchMescalSession* _mescalSession;
	BOOL _creatingMescalSession;
	NSMutableArray* _feedbackQueuedWhileCreatingMescalSession;
	NSString* _bagForceFetchVersion;
	NSDate* _sharedURLSessionExpirationTime;
	BOOL _valid;
	BOOL _enabled;
	BOOL _hasCompletedBagFetch;
	BOOL _safeModeEnabled;
	BOOL _feedbackEnabled;
	NSArray* _supportedDomainIdentifiers;
	id<WBSParsecSearchClientStorage> _storage;
	unsigned long long _mode;
	NSNumber* _searchRenderTimeout;
	NSNumber* _otherRenderTimeout;
	CLLocation* _location;
	NSArray* _enabledDomains;
	NSString* _firstUseDescriptionText;
	NSString* _firstUseLearnMoreText;
	NSString* _geoUserSessionEntitySessionIDString;
	double _locationCachingInterval;
	NSArray* _subscriptionProviderDomainWhitelist;
	NSArray* _subscriptionProviderBundleIdentifierWhitelist;
	double _subscriptionTTL;
	NSURLSession* _urlSessionForSearchSessions;
	double _minimumIntervalBetweenQueriesFromBag;
	double _minimumIntervalBetweenQueriesFromSearchResponse;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _latestQueryTimestamp;
	NSURL* _searchURL;
	NSURL* _searchFallbackURL;
	NSArray* _optionalQueryItems;
	unsigned long long _minimumQueryLength;
	unsigned long long _maximumCachedResultsToSend;
	unsigned long long _maximumCachedQueriesToSend;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                      //@synthesize valid=_valid - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletedBagFetch;                                                      //@synthesize hasCompletedBagFetch=_hasCompletedBagFetch - In the implementation block
@property (nonatomic,copy) NSArray * supportedDomainIdentifiers;                                               //@synthesize supportedDomainIdentifiers=_supportedDomainIdentifiers - In the implementation block
@property (nonatomic,readonly) id<WBSParsecSearchClientStorage> storage;                                       //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) BOOL safeModeEnabled;                                                             //@synthesize safeModeEnabled=_safeModeEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSNumber * searchRenderTimeout;                                                 //@synthesize searchRenderTimeout=_searchRenderTimeout - In the implementation block
@property (nonatomic,readonly) NSNumber * otherRenderTimeout;                                                  //@synthesize otherRenderTimeout=_otherRenderTimeout - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSArray * enabledDomains;                                                       //@synthesize enabledDomains=_enabledDomains - In the implementation block
@property (nonatomic,readonly) NSString * firstUseDescriptionText;                                             //@synthesize firstUseDescriptionText=_firstUseDescriptionText - In the implementation block
@property (nonatomic,readonly) NSString * firstUseLearnMoreText;                                               //@synthesize firstUseLearnMoreText=_firstUseLearnMoreText - In the implementation block
@property (nonatomic,readonly) NSArray * debuggingQueryItems; 
@property (nonatomic,readonly) NSString * geoUserSessionEntitySessionIDString;                                 //@synthesize geoUserSessionEntitySessionIDString=_geoUserSessionEntitySessionIDString - In the implementation block
@property (assign,nonatomic) double locationCachingInterval;                                                   //@synthesize locationCachingInterval=_locationCachingInterval - In the implementation block
@property (nonatomic,readonly) NSArray * subscriptionProviderDomainWhitelist;                                  //@synthesize subscriptionProviderDomainWhitelist=_subscriptionProviderDomainWhitelist - In the implementation block
@property (nonatomic,readonly) NSArray * subscriptionProviderBundleIdentifierWhitelist;                        //@synthesize subscriptionProviderBundleIdentifierWhitelist=_subscriptionProviderBundleIdentifierWhitelist - In the implementation block
@property (nonatomic,readonly) double subscriptionTTL;                                                         //@synthesize subscriptionTTL=_subscriptionTTL - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSessionForSearchSessions;                                       //@synthesize urlSessionForSearchSessions=_urlSessionForSearchSessions - In the implementation block
@property (assign,setter=test_setHasCompletedBagFetch:,nonatomic) BOOL test_hasCompletedBagFetch; 
@property (assign,setter=test_setEnabled:,getter=test_isEnabled,nonatomic) BOOL test_enabled; 
@property (assign,setter=test_setValid:,getter=test_isValid,nonatomic) BOOL test_valid; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> test_feedbackQueue; 
@property (nonatomic,readonly) double minimumIntervalBetweenQueriesFromBag;                                    //@synthesize minimumIntervalBetweenQueriesFromBag=_minimumIntervalBetweenQueriesFromBag - In the implementation block
@property (assign,nonatomic) double minimumIntervalBetweenQueriesFromSearchResponse;                           //@synthesize minimumIntervalBetweenQueriesFromSearchResponse=_minimumIntervalBetweenQueriesFromSearchResponse - In the implementation block
@property (assign,nonatomic) time_point<std::__1::chrono::steady_clock latestQueryTimestamp;                   //@synthesize latestQueryTimestamp=_latestQueryTimestamp - In the implementation block
@property (nonatomic,readonly) NSURL * searchURL;                                                              //@synthesize searchURL=_searchURL - In the implementation block
@property (nonatomic,readonly) NSURL * searchFallbackURL;                                                      //@synthesize searchFallbackURL=_searchFallbackURL - In the implementation block
@property (nonatomic,readonly) NSArray * optionalQueryItems;                                                   //@synthesize optionalQueryItems=_optionalQueryItems - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumQueryLength;                                          //@synthesize minimumQueryLength=_minimumQueryLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCachedResultsToSend;                                  //@synthesize maximumCachedResultsToSend=_maximumCachedResultsToSend - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCachedQueriesToSend;                                  //@synthesize maximumCachedQueriesToSend=_maximumCachedQueriesToSend - In the implementation block
@property (nonatomic,readonly) BOOL feedbackEnabled;                                                           //@synthesize feedbackEnabled=_feedbackEnabled - In the implementation block
@property (nonatomic,readonly) NSURLQueryItem * secretKeyQueryItem; 
@property (nonatomic,readonly) NSURLSessionConfiguration * urlSessionConfiguration;                            //@synthesize urlSessionConfiguration=_urlSessionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_preferredLanguages;
+(id)sharedClient;
+(id)existingSharedClient;
+(Class)storageClass;
+(id)applicationNameForUserAgent;
-(id<WBSParsecSearchClientStorage>)storage;
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)isEnabled;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(CLLocation *)location;
-(NSURL *)searchURL;
-(id)imageForIdentifier:(id)arg1 withScale:(double)arg2 ;
-(void)reinitialize;
-(void)_updateStoreFrontIdentifier;
-(void)_storeFrontIdentifierDidChange:(id)arg1 ;
-(void)_fetchConfiguration;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(void)_updateOptionalQueryItems;
-(void)_setUserGUID:(id)arg1 expirationDate:(id)arg2 ;
-(void)_performBlockOnLocationThreadAndWait:(/*^block*/id)arg1 ;
-(void)updateURLSessionConfiguration;
-(void)_fetchUserGUIDIfNeeded;
-(void)_createMescalSession;
-(void)_performBlockOnLocationThread:(/*^block*/id)arg1 ;
-(id)_locationSourceForLocation:(id)arg1 ;
-(NSURLQueryItem *)secretKeyQueryItem;
-(NSArray *)debuggingQueryItems;
-(void)resetUserGUID;
-(void)_updateUserGUIDExpirationTimerWithDate:(id)arg1 ;
-(id)_localeQueryItem;
-(id)_customFlightQueryItem;
-(void)_processBagFetchResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)networkRequestDidFailWithError:(id)arg1 response:(id)arg2 ;
-(void)_updateBagFetchInterval:(id)arg1 ;
-(void)_requestDeviceIP;
-(void)_setUpLocationServicesWithBagInfo:(id)arg1 ;
-(void)updateRecentlyUsedAppIdentifiers;
-(void)_generateSpriteImagesFromArray:(id)arg1 ;
-(void)_configureMescalFromDictionary:(id)arg1 ;
-(BOOL)_hasLocationServicesEffectiveBundleEntitlement;
-(void)sendGeneratedFeedback:(id)arg1 ;
-(void)_createMescalSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_processMescalCertificatePropertyListData:(id)arg1 error:(id)arg2 withURLSession:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_processMescalSetupPropertyListData:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_refreshGEOUserSession;
-(void)_userGUIDExpirationTimerDidFire:(id)arg1 ;
-(void)_performBlockOnLocationThread:(/*^block*/id)arg1 wait:(BOOL)arg2 ;
-(void)_locationThread;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)_setDeviceIP:(id)arg1 ;
-(id)_initForTesting;
-(void)setSupportedDomainIdentifiers:(NSArray *)arg1 ;
-(void)setSafeModeEnabled:(BOOL)arg1 ;
-(NSURLSession *)urlSessionForSearchSessions;
-(id)locationSource;
-(void)test_processMescalSetupPropertyListData:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sessionDidReceiveForceFetchRequest:(id)arg1 ;
-(BOOL)test_hasCompletedBagFetch;
-(void)test_setHasCompletedBagFetch:(BOOL)arg1 ;
-(BOOL)test_isEnabled;
-(void)test_setEnabled:(BOOL)arg1 ;
-(BOOL)test_isValid;
-(void)test_setValid:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)test_feedbackQueue;
-(BOOL)hasCompletedBagFetch;
-(NSArray *)supportedDomainIdentifiers;
-(BOOL)safeModeEnabled;
-(NSNumber *)searchRenderTimeout;
-(NSNumber *)otherRenderTimeout;
-(NSArray *)enabledDomains;
-(NSString *)firstUseDescriptionText;
-(NSString *)firstUseLearnMoreText;
-(NSString *)geoUserSessionEntitySessionIDString;
-(double)locationCachingInterval;
-(void)setLocationCachingInterval:(double)arg1 ;
-(NSArray *)subscriptionProviderDomainWhitelist;
-(NSArray *)subscriptionProviderBundleIdentifierWhitelist;
-(double)subscriptionTTL;
-(void)setUrlSessionForSearchSessions:(NSURLSession *)arg1 ;
-(double)minimumIntervalBetweenQueriesFromBag;
-(double)minimumIntervalBetweenQueriesFromSearchResponse;
-(void)setMinimumIntervalBetweenQueriesFromSearchResponse:(double)arg1 ;
-(time_point<std::__1::chrono::steady_clock)latestQueryTimestamp;
-(void)setLatestQueryTimestamp:(time_point<std::__1::chrono::steady_clock)arg1 ;
-(NSURL *)searchFallbackURL;
-(NSArray *)optionalQueryItems;
-(unsigned long long)minimumQueryLength;
-(unsigned long long)maximumCachedResultsToSend;
-(unsigned long long)maximumCachedQueriesToSend;
-(BOOL)feedbackEnabled;
-(NSURLSessionConfiguration *)urlSessionConfiguration;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end

