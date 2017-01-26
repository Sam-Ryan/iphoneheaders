/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSObject, NSDate, NSDictionary, NSString;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject> {

	BOOL _shouldUpdateQuantityCharacteristics;
	BOOL _shouldUpdateUserProfile;
	BOOL _needsUpdateAfterUnlock;
	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _userProfileLastUpdated;
	NSDictionary* _lastUserProfile;

}

@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                  //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdateQuantityCharacteristics;              //@synthesize shouldUpdateQuantityCharacteristics=_shouldUpdateQuantityCharacteristics - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdateUserProfile;                          //@synthesize shouldUpdateUserProfile=_shouldUpdateUserProfile - In the implementation block
@property (nonatomic,retain) NSDate * userProfileLastUpdated;                         //@synthesize userProfileLastUpdated=_userProfileLastUpdated - In the implementation block
@property (nonatomic,copy) NSDictionary * lastUserProfile;                            //@synthesize lastUserProfile=_lastUserProfile - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateAfterUnlock;                             //@synthesize needsUpdateAfterUnlock=_needsUpdateAfterUnlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id<HDHealthDaemon>)healthDaemon;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)_userCharacteristicForType:(id)arg1 entity:(id*)arg2 error:(id*)arg3 ;
-(BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 updateProfileAndSync:(BOOL)arg4 error:(id*)arg5 ;
-(void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2 ;
-(id)userCharacteristicForType:(id)arg1 error:(id*)arg2 ;
-(void)_updateQuantityCharacteristicsAndUserProfile;
-(void)_queue_updateQuantityCharacteristics;
-(void)_queue_updateUserProfile;
-(id)_mostRecentSampleOfType:(id)arg1 error:(id*)arg2 ;
-(void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
-(id)initWithHealthDaemon:(id)arg1 ;
-(BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(BOOL)arg3 ;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(BOOL)shouldUpdateQuantityCharacteristics;
-(BOOL)shouldUpdateUserProfile;
-(NSDate *)userProfileLastUpdated;
-(void)setUserProfileLastUpdated:(NSDate *)arg1 ;
-(NSDictionary *)lastUserProfile;
-(void)setLastUserProfile:(NSDictionary *)arg1 ;
-(BOOL)needsUpdateAfterUnlock;
-(void)setNeedsUpdateAfterUnlock:(BOOL)arg1 ;
@end

