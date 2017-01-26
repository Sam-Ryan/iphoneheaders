/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BRCAccountHandlerDelegate;
@class BRCAccountSession, NSString, NSObject;

@interface BRCAccountHandler : NSObject {

	BRCAccountSession* _session;
	NSString* _currentAccountID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _migrationStatusSetterQueue;
	BOOL _hasSetMigrationComplete;
	id<BRCAccountHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BRCAccountHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                              //@synthesize session=_session - In the implementation block
+(id)primaryiCloudAccount;
+(void)_migrateAccountIfNecessaryForAccountID:(id)arg1 ;
+(id)icloudDriveAccountID;
+(id)primaryiCloudAccountID;
-(void)setDelegate:(id<BRCAccountHandlerDelegate>)arg1 ;
-(id)init;
-(id<BRCAccountHandlerDelegate>)delegate;
-(BRCAccountSession *)session;
-(void)setMigrationStatus:(char)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)accountIDPath;
-(id)onDiskAccountID;
-(void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
-(BOOL)setOnDiskAccountID:(id)arg1 ;
-(BOOL)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1 ;
-(void)jetsamCloudDocsApps;
-(void)_destroyCurrentSessionSynchronously;
-(BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)_handleAccountWillChange;
-(void)_handleAccountDidChange;
-(void)_updateAccountToAccountID:(id)arg1 ;
-(void)startAndLoadCurrentAccountSynchronously;
-(void)destroyCurrentSessionSynchronously;
-(BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)markMigrationCompletedForDSID:(id)arg1 ;
@end

