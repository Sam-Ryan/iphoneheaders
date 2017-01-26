/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <SyncedDefaults/SyncedDefaults-Structs.h>
@class NSMutableDictionary, SYDClient, NSObject;

@interface SYDRemotePreferencesSource : NSObject {

	long long _generationCount;
	long long _lastGenerationFromDisk;
	CFStringRef preferenceID;
	CFURLRef urlOnDisk;
	CFDictionaryRef cache;
	long long storageChangeCount;
	long long initialSyncChangeCount;
	unsigned char isInitialSync;
	CFSetRef dirtyKeys;
	CFDictionaryRef configurationDictionary;
	NSMutableDictionary* externalChanges;
	SYDClient* client;
	/*^block*/id registrationBlock;
	NSObject*<OS_dispatch_queue> registrationQueue;
	NSObject*<OS_dispatch_queue> _protectionQueue;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	double _lastAccess;
	BOOL _forceNextSynchronization;
	NSObject*<OS_os_transaction> _isExecutingForClient;

}
+(void)noteAccountChanges:(id)arg1 ;
+(void)resetAllApplicationsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1 ;
+(id)SYDRemotePreferencesSourceDidChangeNotification;
+(id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+(void)initialize;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 containerPath:(CFStringRef)arg5 ;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 ;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 ;
-(id)initWithApplicationID:(CFStringRef)arg1 shared:(BOOL)arg2 ;
-(void)discardExternalChangesForChangeCount:(long long)arg1 ;
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(unsigned char)synchronizeForced:(unsigned char)arg1 ;
-(unsigned char)hasExternalChanges;
-(id)copyExternalChangesWithChangeCount:(long long*)arg1 ;
-(CFDictionaryRef)copyDictionary;
-(void)scheduleRemoteSynchronization;
-(void)synchronizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned char)_synchronizeForced:(unsigned char)arg1 ;
-(void)updateConfiguration;
-(void)registerForSynchronizedDefaults;
-(void)unregisterForSynchronizedDefaults;
-(long long)maximumKeyCount;
-(long long)maximumKeyLength;
-(long long)maximumDataLengthPerKey;
-(long long)maximumTotalDataLength;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)dealloc;
-(unsigned char)synchronize;
-(long long)generationCount;
-(long long)configurationValueForKey:(CFStringRef)arg1 ;
-(void)_didReceiveMemoryWarning;
-(unsigned char)isInitialSync;
-(void)ping;
-(CFArrayRef)copyKeyList;
-(void)finalize;
-(void)_createMemoryWarningSource;
-(void)_locked_syd_start_transaction;
-(void)_locked_syd_end_transaction;
-(void)_forceRegistrationNow;
-(void)_cachePlistFromDisk;
-(void)_storeConfiguration:(CFDictionaryRef)arg1 ;
-(id)_warningSource;
-(CFDictionaryRef)copyConfigurationDictionary;
-(void)setDefaultsConfiguration:(id)arg1 ;
-(id)serverSideDebugDescription;
@end

