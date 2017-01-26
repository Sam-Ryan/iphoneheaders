/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class NSString, SUPreferences;

@interface SUSoftwareUpdateAssetMatcher : SUAssetStateMatcher {

	NSString* _fromBuild;
	NSString* _fromVersion;
	NSString* _fromProductType;
	NSString* _fromReleaseType;
	BOOL _checkTatsu;
	SUPreferences* _preferences;

}

@property (nonatomic,readonly) NSString * fromVersion;                         //@synthesize fromVersion=_fromVersion - In the implementation block
@property (nonatomic,readonly) NSString * fromBuild;                           //@synthesize fromBuild=_fromBuild - In the implementation block
@property (nonatomic,readonly) NSString * fromProductType;                     //@synthesize fromProductType=_fromProductType - In the implementation block
@property (nonatomic,readonly) NSString * fromReleaseType;                     //@synthesize fromReleaseType=_fromReleaseType - In the implementation block
@property (assign,nonatomic) BOOL compareWithTatsuForEligibility;              //@synthesize checkTatsu=_checkTatsu - In the implementation block
@property (nonatomic,retain) SUPreferences * preferences;                      //@synthesize preferences=_preferences - In the implementation block
+(id)matcherForCurrentDeviceWithInterestedStates:(int)arg1 ;
+(id)matcherForCurrentDevice;
-(void)dealloc;
-(void)setPreferences:(SUPreferences *)arg1 ;
-(SUPreferences *)preferences;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(id)initWithVersion:(id)arg1 build:(id)arg2 productType:(id)arg3 releaseType:(id)arg4 interestedStates:(int)arg5 ;
-(BOOL)_isPossibleSoftwareUpdate:(id)arg1 ;
-(BOOL)_isDeviceEligibleForUpdate:(id)arg1 ;
-(id)_copyMatchingAssetsAfterSortingAndFiltering:(id)arg1 ;
-(unsigned long long)_getIndexOfHighestVersionedAsset:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3 ;
-(id)_createSortedAndFilteredAssetResults:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3 ;
-(NSString *)fromBuild;
-(NSString *)fromVersion;
-(NSString *)fromProductType;
-(NSString *)fromReleaseType;
-(BOOL)compareWithTatsuForEligibility;
-(void)setCompareWithTatsuForEligibility:(BOOL)arg1 ;
@end

