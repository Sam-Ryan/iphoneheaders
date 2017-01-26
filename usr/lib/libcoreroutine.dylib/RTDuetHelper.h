/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, RTTokenBucket, _DKKnowledgeStore, CDContextStore;

@interface RTDuetHelper : NSObject {

	BOOL _locationTaggingAllowed;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _helperRecords;
	RTTokenBucket* _tokenBucket;
	_DKKnowledgeStore* _knowledgeStore;
	CDContextStore* _contextStore;
	double _maximumEventLocationTaggingTimeInterval;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * helperRecords;                         //@synthesize helperRecords=_helperRecords - In the implementation block
@property (nonatomic,retain) RTTokenBucket * tokenBucket;                                 //@synthesize tokenBucket=_tokenBucket - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStore * knowledgeStore;                          //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) CDContextStore * contextStore;                               //@synthesize contextStore=_contextStore - In the implementation block
@property (assign,nonatomic) BOOL locationTaggingAllowed;                                 //@synthesize locationTaggingAllowed=_locationTaggingAllowed - In the implementation block
@property (assign,nonatomic) double maximumEventLocationTaggingTimeInterval;              //@synthesize maximumEventLocationTaggingTimeInterval=_maximumEventLocationTaggingTimeInterval - In the implementation block
+(id)duetHelperStreamTypeToDuetEventStream:(long long)arg1 ;
+(id)_convertDuetEvent:(id)arg1 forEventStream:(id)arg2 ;
+(id)predicateStringForEventNotificationClass:(Class)arg1 ;
-(void)fetchAppLaunchEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchNowPlayingEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchDeviceFirstWakeupEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchStarkEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchBluetoothEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchAudioEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_unregisterForNotifications;
-(void)shutdown;
-(void)_registerForNotifications;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)fetchAllEventsForStreamType:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)startMonitoringForEventsWithNotificationClass:(Class)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringForEventsWithNotificationClass:(Class)arg1 ;
-(void)updateDoubleForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTTokenBucket *)tokenBucket;
-(void)setTokenBucket:(RTTokenBucket *)arg1 ;
-(CDContextStore *)contextStore;
-(_DKKnowledgeStore *)knowledgeStore;
-(NSMutableDictionary *)helperRecords;
-(void)_unregisterWithCoreDuetForRealtimeNotificationsWithNotificationClass:(Class)arg1 ;
-(void)onMagicalMomentsLocationUsageUpdate:(id)arg1 ;
-(void)setLocationTaggingAllowed:(BOOL)arg1 ;
-(void)setMaximumEventLocationTaggingTimeInterval:(double)arg1 ;
-(void)_registerWithCoreDuetForRealtimeNotificationsWithNotificationClass:(Class)arg1 handler:(/*^block*/id)arg2 ;
-(void)_registerForCoreDuetNotificationWithPredicateString:(id)arg1 helperRecord:(id)arg2 ;
-(void)_performReconnectionWithDelay:(double)arg1 predicateString:(id)arg2 helperRecord:(id)arg3 ;
-(void)processCoreDuetNotification:(id)arg1 predicateString:(id)arg2 helperRecord:(id)arg3 ;
-(id)_processCoreDuetNotification:(id)arg1 predicateString:(id)arg2 ;
-(BOOL)locationTaggingAllowed;
-(double)maximumEventLocationTaggingTimeInterval;
-(void)setHelperRecords:(NSMutableDictionary *)arg1 ;
-(void)setKnowledgeStore:(_DKKnowledgeStore *)arg1 ;
-(void)setContextStore:(CDContextStore *)arg1 ;
@end

