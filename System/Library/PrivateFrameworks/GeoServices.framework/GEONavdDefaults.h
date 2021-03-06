/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEONavdDefaults : NSObject

@property (nonatomic,readonly) double minimumDistanceToGetLocationUpdatesInMeters; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForDriving; 
@property (nonatomic,readonly) double locationUpdateTimerInterval; 
@property (nonatomic,readonly) double staleLocationUseTimerInterval; 
@property (nonatomic,readonly) double locationFreshnessThreshold; 
@property (nonatomic,readonly) double minimumDistanceToCompareAgainstLocationAccuracy; 
@property (nonatomic,readonly) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) unsigned long long initialClientInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisShouldPersistThresholdInSeconds; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure; 
@property (nonatomic,readonly) long long maximumNumberOfDestinationsToMonitor; 
@property (nonatomic,readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds; 
@property (nonatomic,readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds; 
@property (nonatomic,readonly) unsigned long long accessValueThresholdToUpdateCacheEntries; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfProcessingLoopRepeats; 
@property (nonatomic,readonly) double refreshTimeIntervalToUseIfError; 
@property (nonatomic,readonly) unsigned long long refreshEquationConstA; 
@property (nonatomic,readonly) unsigned long long refreshEquationConstB; 
@property (nonatomic,readonly) unsigned long long refreshEquationConstC; 
@property (nonatomic,readonly) double maximumRefreshIntervalLeeway; 
@property (nonatomic,readonly) double minimumTimerTimeStampFudge; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffBase; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffMax; 
@property (nonatomic,readonly) double predictionsWatchdogInterval; 
@property (nonatomic,readonly) double defaultExpirationOffset; 
@property (nonatomic,readonly) double minimumExpirationOffset; 
@property (nonatomic,readonly) double exitRegionSize; 
@property (nonatomic,readonly) BOOL shouldUseServerSideETAs; 
@property (nonatomic,readonly) double averageWalkingSpeed; 
@property (nonatomic,readonly) double slowWalkingSpeed; 
@property (nonatomic,readonly) double fastWalkingSpeed; 
+(id)sharedInstance;
-(double)minimumTimerTimeStampFudge;
-(unsigned long long)maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
-(BOOL)shouldUseServerSideETAs;
-(unsigned long long)maximumNumberOfProcessingLoopRepeats;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForWalking;
-(double)locationUpdatesDesiredAccuracyForWalking;
-(double)refreshTimeIntervalBackoffBase;
-(double)refreshTimeIntervalToUseIfError;
-(long long)maximumNumberOfDestinationsToMonitor;
-(double)minimumExpirationOffset;
-(double)maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
-(double)hypothesisShouldPersistThresholdInSeconds;
-(double)locationUpdatesDesiredAccuracyForDriving;
-(unsigned long long)accessValueThresholdToUpdateCacheEntries;
-(double)maximumRefreshIntervalLeeway;
-(unsigned long long)initialSelfInitiatedHypothesisCacheAccessValue;
-(double)exitRegionSize;
-(double)minimumDistanceToGetLocationUpdatesInMeters;
-(double)minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
-(double)predictionsWatchdogInterval;
-(double)minimumDistanceToCompareAgainstLocationAccuracy;
-(double)slowWalkingSpeed;
-(double)staleLocationUseTimerInterval;
-(unsigned long long)refreshEquationConstB;
-(double)fastWalkingSpeed;
-(unsigned long long)initialClientInitiatedHypothesisCacheAccessValue;
-(double)defaultExpirationOffset;
-(double)locationUpdateTimerInterval;
-(unsigned long long)refreshEquationConstC;
-(double)averageWalkingSpeed;
-(double)hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForDriving;
-(double)locationFreshnessThreshold;
-(unsigned long long)refreshEquationConstA;
-(double)refreshTimeIntervalBackoffMax;
-(double)hypothesisResponseStaleToRefreshThresholdInSeconds;
@end

