/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:17:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCMClientConnection : NSObject {

	BOOL _allowOtherIdLookup;
	BOOL _allowGroupIdLookup;
	unsigned _clientUserId;
	NSString* _clientBundleIdentifier;
	NSArray* _entitledWipeIdentifiers;

}

@property (nonatomic,retain) NSString * clientBundleIdentifier;              //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned clientUserId;                        //@synthesize clientUserId=_clientUserId - In the implementation block
@property (assign,nonatomic) BOOL allowOtherIdLookup;                        //@synthesize allowOtherIdLookup=_allowOtherIdLookup - In the implementation block
@property (assign,nonatomic) BOOL allowGroupIdLookup;                        //@synthesize allowGroupIdLookup=_allowGroupIdLookup - In the implementation block
@property (nonatomic,retain) NSArray * entitledWipeIdentifiers;              //@synthesize entitledWipeIdentifiers=_entitledWipeIdentifiers - In the implementation block
+(id)sharedClientConnection;
-(BOOL)_createDefaultDirectory:(id)arg1 mode:(unsigned short)arg2 owner:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)_removeItemOrMoveToTempAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_createSubDirectories:(id)arg1 userId:(unsigned)arg2 containerClass:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_writeToDiskReplaceAt:(id)arg1 old:(id)arg2 withNew:(id)arg3 usingStaging:(id)arg4 toDestination:(id)arg5 error:(id*)arg6 ;
-(BOOL)_moveItemAtURLToDeathRow:(id)arg1 isDir:(BOOL)arg2 startDeletionThread:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_recoverFromReplaceOperationsWithError:(id*)arg1 ;
-(BOOL)_createTopLevelContainerDirectory:(id)arg1 containerClass:(unsigned long long)arg2 owner:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)_setSandboxContainerMappingForUser:(unsigned)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 url:(id)arg4 ;
-(id)_readAndValidateReplaceFileAtUrl:(id)arg1 error:(id*)arg2 ;
-(void)setEntitledWipeIdentifiers:(NSArray *)arg1 ;
-(void)retryTestForUser:(unsigned)arg1 withNumCrashes:(unsigned long long)arg2 withError:(unsigned long long*)arg3 ;
-(void)containerManagerCleanup;
-(void)replaceContainer:(id)arg1 withContainer:(id)arg2 userIdOld:(unsigned)arg3 userIdNew:(unsigned)arg4 identifierOld:(id)arg5 identifierNew:(id)arg6 containerClassOld:(unsigned long long)arg7 containerClassNew:(unsigned long long)arg8 preserveOldUUID:(BOOL)arg9 startDeletionThread:(BOOL)arg10 withError:(unsigned long long*)arg11 ;
-(void)containerManagerSetup;
-(void)setAllowGroupIdLookup:(BOOL)arg1 ;
-(BOOL)allowOtherIdLookup;
-(unsigned long long)diskUsageForUserId:(unsigned)arg1 uuid:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long*)arg5 ;
-(id)infoValueForKey:(id)arg1 userId:(unsigned)arg2 uuid:(id)arg3 identifier:(id)arg4 containerClass:(unsigned long long)arg5 useLocking:(BOOL)arg6 withError:(unsigned long long*)arg7 ;
-(void)setInfoValue:(id)arg1 forKey:(id)arg2 userId:(unsigned)arg3 uuid:(id)arg4 identifier:(id)arg5 containerClass:(unsigned long long)arg6 useLocking:(BOOL)arg7 withError:(unsigned long long*)arg8 ;
-(void)setAllowOtherIdLookup:(BOOL)arg1 ;
-(id)createOrLookupContainerForUser:(unsigned)arg1 identifier:(id)arg2 createIfNecessary:(BOOL)arg3 containerClass:(unsigned long long)arg4 transient:(BOOL)arg5 useLocking:(BOOL)arg6 withError:(unsigned long long*)arg7 ;
-(id)initWithBundleId:(id)arg1 clientUserId:(unsigned)arg2 allowOtherIdLookup:(BOOL)arg3 entitledWipeIdentifiers:(id)arg4 ;
-(void)deleteDataContainerContentForUser:(unsigned)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 withError:(unsigned long long*)arg4 ;
-(id)containersForUser:(unsigned)arg1 withClass:(unsigned long long)arg2 transient:(BOOL)arg3 withError:(unsigned long long*)arg4 ;
-(void)_cleanupOrphanedDataForUser:(unsigned)arg1 containerClass:(unsigned long long)arg2 ;
-(unsigned)clientUserId;
-(NSArray *)entitledWipeIdentifiers;
-(void)deleteContainerForUser:(unsigned)arg1 withIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 transient:(BOOL)arg4 withError:(unsigned long long*)arg5 ;
-(void)_regenerateAllSystemContainerPaths;
-(void)regenerateDirectoryUUIDForUser:(unsigned)arg1 withInternalUUID:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long*)arg5 ;
-(void)stageForDeleteContainersWithUsers:(id)arg1 UUIDs:(id)arg2 identifiers:(id)arg3 classes:(id)arg4 useLocking:(BOOL)arg5 withError:(unsigned long long*)arg6 ;
-(BOOL)allowGroupIdLookup;
-(void)rebootContainerManagerSetup;
-(void)rebootContainerManagerCleanup;
-(void)recreateDefaultStructureForUser:(unsigned)arg1 withUUID:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long*)arg5 ;
-(void)deleteContainersOnDeathRowWithCompletion:(/*^block*/id)arg1 ;
-(id)stageSharedContentForIdentifier:(id)arg1 sourceRelativePath:(id)arg2 destRelativePath:(id)arg3 withError:(unsigned long long*)arg4 ;
-(id)initWithBundleId:(id)arg1 allowOtherIdLookup:(BOOL)arg2 ;
-(id)metadataForUser:(unsigned)arg1 withUUID:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long*)arg5 ;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
@end

