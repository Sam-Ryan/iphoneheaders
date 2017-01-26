/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUUnlockClient <NSObject>
@required
-(void)didPairForUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
-(void)remoteDeviceDidCompletePasscodeAction:(BOOL)arg1 error:(id)arg2;
-(void)remoteDeviceDidUnlock;
-(void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2;
-(void)didGetRemoteDeviceHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isUnlockOnly:(BOOL)arg3 error:(id)arg4;

@end
