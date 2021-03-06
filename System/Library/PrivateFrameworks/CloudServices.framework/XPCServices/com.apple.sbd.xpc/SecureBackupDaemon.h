/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:11:56 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.sbd/SecureBackupProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSData, NSError, NSObject, NSString;

@interface SecureBackupDaemon : NSObject <SecureBackupProtocol, NSXPCListenerDelegate> {

	BOOL _needInitialBackup;
	int _cachedPassphraseFD;
	NSURL* _cacheDirURL;
	NSData* _iCDPKeybag;
	NSError* _KVSError;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (retain) NSURL * cacheDirURL;                                                //@synthesize cacheDirURL=_cacheDirURL - In the implementation block
@property (retain,readonly) NSURL * cachedKeychainURL; 
@property (retain,readonly) NSURL * cachedManifestURL; 
@property (readonly) NSData * iCDPKeybag;                                              //@synthesize iCDPKeybag=_iCDPKeybag - In the implementation block
@property (retain) NSError * KVSError;                                                 //@synthesize KVSError=_KVSError - In the implementation block
@property (readonly) BOOL forceICDP; 
@property (retain,readonly) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (assign) BOOL needInitialBackup;                                             //@synthesize needInitialBackup=_needInitialBackup - In the implementation block
@property (nonatomic,copy) NSString * cachedPassphrase; 
@property (assign) int cachedPassphraseFD;                                             //@synthesize cachedPassphraseFD=_cachedPassphraseFD - In the implementation block
@property (assign) BOOL backupAllowed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_getProtectedKeychainAndKeybagDigestFromKVS:(id*)arg1 ;
-(void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2 ;
-(void)_storeVeeTwoBackupInKVS:(id)arg1 ;
-(void)_removeCachedKeychain;
-(id)_getKeychainItemForKey:(id)arg1 status:(int*)arg2 ;
-(id)_backupFullKeychain;
-(id)_pushCachedKeychainToKVS;
-(id)_backupKeychainFully:(BOOL)arg1 ;
-(BOOL)_backupEnabled;
-(id)_setAutobackupEnabled:(BOOL)arg1 ;
-(BOOL)_usesEscrow;
-(int)_checkEscrowTrust;
-(id)_consumeFullBackup;
-(id)_consumeBackupJournal;
-(void)_removeKeychainItemForKey:(id)arg1 ;
-(void)_removeKVSKeybag;
-(void)_removeMetadata;
-(void)_removeProtectedKeychain;
-(void)_setBackupEnabled:(BOOL)arg1 iCDP:(BOOL)arg2 ;
-(void)_removeVeeTwoBackup;
-(id)_createBackupKeybagWithPassword:(id)arg1 ;
-(void)_saveKeychainItem:(id)arg1 forKey:(id)arg2 ;
-(id)derDataFromDict:(id)arg1 ;
-(void)storeDERBackupInKVS:(id)arg1 ;
-(id)_getVeeTwoBackupFromKVS;
-(id)_getDERBackupFromKVS;
-(id)_getLastBackupTimestamp;
-(BOOL)_iCDPBackupEnabled;
-(void)_setUsesEscrow:(BOOL)arg1 ;
-(void)_removeUsesEscrow;
-(id)_metadata;
-(void)_setBackupUUID:(id)arg1 ;
-(id)_getBackupUUID;
-(void)_setKVSKeybag:(id)arg1 ;
-(id)_KVSKeybag;
-(void)_setEMCSBackup:(id)arg1 keybag:(id)arg2 ;
-(id)_EMCSBackup;
-(id)_EMCSBackupDictForKeybagDigest:(id)arg1 ;
-(void)garbageCollectEMCSBackupsExcluding:(id)arg1 ;
-(id)_backupKeychain;
-(void)_disableBackup;
-(void)disableiCDPBackup;
-(id)normalizeSMSTarget:(id)arg1 error:(id*)arg2 ;
-(void)_setMetadata:(id)arg1 ;
-(NSURL *)cachedKeychainURL;
-(void)setNeedInitialBackup:(BOOL)arg1 ;
-(void)setCacheDirURL:(NSURL *)arg1 ;
-(NSURL *)cacheDirURL;
-(BOOL)needInitialBackup;
-(void)_handleKVStoreChangedNotification:(id)arg1 ;
-(id)massageIncomingMetadataFromInfo:(id)arg1 ;
-(id)filteriCDPRecords:(id)arg1 ;
-(BOOL)forceICDP;
-(void)_getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setBackupAllowed:(BOOL)arg1 ;
-(void)backupWithInfo:(id)arg1 garbageCollect:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(NSError *)KVSError;
-(void)setKVSError:(NSError *)arg1 ;
-(void)setEMCSDict:(id)arg1 backupKeybag:(id)arg2 saveKeybag:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(id)massageOutgoingMetadataFromInfo:(id)arg1 ;
-(NSString *)cachedPassphrase;
-(BOOL)backupAllowed;
-(id)garbageCollectEscrowRecords:(id)arg1 ;
-(id)restoreBackup:(id)arg1 withName:(id)arg2 recordID:(id)arg3 keybag:(id)arg4 password:(id)arg5 ;
-(id)restoreEMCSBackup:(id)arg1 keybag:(id)arg2 password:(id)arg3 ;
-(id)restoreEMCSBackup:(id)arg1 withPassword:(id)arg2 ;
-(id)recordIDForSilentAttempt:(id)arg1 passphraseLength:(unsigned long long*)arg2 ;
-(id)_restoreKeychainWithBackupBag:(id)arg1 password:(id)arg2 recordID:(id)arg3 ;
-(void)deleteAlliCDPRecordsWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCachedPassphraseFD:(int)arg1 ;
-(int)cachedPassphraseFD;
-(void)setCachedPassphrase:(NSString *)arg1 ;
-(NSURL *)cachedManifestURL;
-(NSData *)iCDPKeybag;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)recoverWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)stashRecoveryDataWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateMetadataWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)uncachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getCountrySMSCodesWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backupWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backOffDateWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setBackOffDateWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cachePassphraseWithInfoAsync:(id)arg1 ;
-(void)uncachePassphraseWithInfoAsync:(id)arg1 ;
-(void)notificationOccurred:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
@end

