/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSHashTable, NSObject;

@interface HDUnitPreferencesManager : NSObject {

	id<HDHealthDaemon> _healthDaemon;
	NSDictionary* _unitPreferences;
	NSMutableDictionary* _defaultPreferredUnits;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}
-(void)dealloc;
-(void)_localeDidChange:(id)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(id)_authorizationStatusesForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3 ;
-(id)_queue_unitPreferenceDictionary:(id*)arg1 ;
-(id)_queue_unitForType:(id)arg1 preferencesDictionary:(id)arg2 ;
-(id)_queue_defaultUnitForType:(id)arg1 ;
-(void)_queue_updateUnitPreferenceCacheWithUnit:(id)arg1 type:(id)arg2 ;
-(void)_persistUnitPreferenceForType:(id)arg1 unit:(id)arg2 ;
-(void)_queue_notifyObserversWithUnitPreferences;
-(id)_queue_generateUnitPreferences:(id*)arg1 ;
-(id)_unitPreferencesDictionaryFromKeyValueDictionary:(id)arg1 ;
-(id)_stringFromQuantityType:(id)arg1 ;
-(id)_quantityTypeFromKeyString:(id)arg1 ;
-(id)_unitFromValueString:(id)arg1 quantityType:(id)arg2 ;
-(id)unitPreferencesDictionaryForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3 ;
-(BOOL)setPreferredUnit:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(void)setPreferredUnitToDefaultIfNotSetForType:(id)arg1 ;
-(void)addUnitPreferenceObserver:(id)arg1 ;
-(void)removeUnitPreferenceObserver:(id)arg1 ;
-(void)_unitPreferencesDidChange;
@end

