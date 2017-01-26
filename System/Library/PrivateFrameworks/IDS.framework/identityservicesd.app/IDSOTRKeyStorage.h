/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:02 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableDictionary, IMTimer;

@interface IDSOTRKeyStorage : NSObject {

	NSRecursiveLock* _lock;
	NSMutableDictionary* _sessionKeyStorage;
	IMTimer* _purgeTimer;
	IMTimer* _saveTimer;
	/*^block*/id _saveCancelBlock;
	/*^block*/id _saveEnqueueBlock;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	BOOL _isClassDStoreAvailable;
	BOOL _isClassCStoreAvailable;
	BOOL _isClassAStoreAvailable;

}
+(id)sharedInstance;
-(BOOL)_isUnderFirstDataProtectionLock;
-(void)removeSessionKeyForAllTokenFromMainQueue;
-(void)removeSessionKeyForToken:(id)arg1 ;
-(void)_setSaveTimer;
-(void)_loadIfNeeded;
-(BOOL)isSessionStoreAvailableForDataProtectionClass:(unsigned)arg1 ;
-(BOOL)isUnderLock;
-(id)sessionKeyForToken:(id)arg1 ;
-(void)storeSessionKey:(id)arg1 token:(id)arg2 ;
-(void)loadStoreForDataProtectionClass:(unsigned)arg1 ;
-(void)__saveStoreForDataProtectionClass:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)_save;
-(void)_setPurgeTimer;
-(void)_saveNow;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;
-(void)_daemonWillShutdown:(id)arg1 ;
-(void)_purgeMap;
-(id)_objectForKey:(id)arg1 ;
@end

