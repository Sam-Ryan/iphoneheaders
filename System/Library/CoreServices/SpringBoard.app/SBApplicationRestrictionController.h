/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol SBApplicationRestrictionDataSource;
@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface SBApplicationRestrictionController : NSObject <MCProfileConnectionObserver> {

	id<SBApplicationRestrictionDataSource> _dataSource;
	NSHashTable* _observers;
	NSMutableDictionary* _tagValidityMap;
	NSMutableDictionary* _validTagsByIdentifier;
	MGNotificationTokenStructRef _tagsNotificationToken;
	NSMutableSet* _enabledTags;
	NSMutableDictionary* _ratingRanksByIdentifier;
	NSSet* _restrictedIdentifiers;
	BOOL _showInternalApps;
	BOOL _hasHideNonDefaultSystemAppsCapability;
	BOOL _showAllSystemApps;
	BOOL _canPostRestrictionState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginPostingChanges;
-(void)updateVisibilityPreferences;
-(BOOL)isApplicationIdentifierRestricted:(id)arg1 ;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)noteVisibilityOverridesDidChange;
-(void)_postRestrictionStateToObservers:(id)arg1 ;
-(void)_postRestrictionState;
-(void)_updateRestrictionsAndForcePost:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateRestrictions;
-(id)initWithDataSource:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
@end

