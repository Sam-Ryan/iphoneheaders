/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUIAccountCreationDelegate
@required
-(void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2;
-(void)accountCreationDidFailWithError:(id)arg1;
-(void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3;
-(void)accountCreationWasCanceled;

@end

