/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface FMDFMIPManager : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcConnectionCreationQueue;              //@synthesize xpcConnectionCreationQueue=_xpcConnectionCreationQueue - In the implementation block
+(id)sharedInstance;
-(id)getManagedLostModeFileURL;
-(void)updateManagedLostModeWithDictionary:(id)arg1 forState:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_quickFetchFMIPEnabledstate;
-(void)disableTouchIDForLostModeWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_destroyXPCConnection;
-(void)_checkCallingOSUser;
-(id)currentXPCConnection;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(void)fmipAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)disableLostMode;
-(id)enableEDULostModeWithInfo:(id)arg1 ;
-(void)disableEDULostMode;
-(void)deviceActivationDidSucceed;
-(BOOL)lockdownShouldDisableDeviceRestore;
-(BOOL)lockdownShouldDisableDevicePairing;
-(id)fmipAccount;
-(void)didChangeFMIPAccountInfo:(id)arg1 ;
-(void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)isActivationLockAllowedWithCompletion:(/*^block*/id)arg1 ;
-(void)isActivationLockEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)enableActivationLockWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsLostModeExitAuth;
-(void)didReceiveLostModeExitAuthToken:(id)arg1 ;
-(void)lowBatteryLocateEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)setLowBatteryLocateEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)userNotifiedOfActivationLockForPairedDevices:(id)arg1 ;
-(void)_forceALUpgradeAlertWithCompletion:(/*^block*/id)arg1 ;
-(id)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 ;
-(void)markPairedDeviceWithUDID:(id)arg1 asMissingWithCompletion:(/*^block*/id)arg2 ;
-(void)userNotifiedOfWatchActivationLock;
-(NSObject*<OS_dispatch_queue>)xpcConnectionCreationQueue;
-(void)setXpcConnectionCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)userNotifiedOfActivationLockForAllPairedDevices;
-(void)fmipStateWithCompletion:(/*^block*/id)arg1 ;
-(id)enableFMIPInContext:(unsigned long long)arg1 ;
-(id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 ;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)lostModeIsActive;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)enableLostModeWithInfo:(id)arg1 ;
-(id)lostModeInfo;
-(void)enableManagedLostModeWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableManagedLostModeWithCompletion:(/*^block*/id)arg1 ;
-(void)isActivationLockedWithCompletion:(/*^block*/id)arg1 ;
@end

