/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:11:56 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SecureBackupProtocol <NSObject>
@required
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)enableWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)recoverWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)stashRecoveryDataWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)disableWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)updateMetadataWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)cachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)uncachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getCountrySMSCodesWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)backupWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)backOffDateWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setBackOffDateWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)cachePassphraseWithInfoAsync:(id)arg1;
-(void)uncachePassphraseWithInfoAsync:(id)arg1;
-(void)notificationOccurred:(id)arg1;

@end

