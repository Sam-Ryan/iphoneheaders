/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUIIdentityPickerViewControllerDelegate <NSObject>
@required
-(BOOL)isPropertyEnabledForIdentityPickerController:(id)arg1;
-(SecIdentityRef)selectedIdentityForIdentityPickerController:(id)arg1;
-(void)identityPickerController:(id)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(SecIdentityRef)arg3;
-(id)localizedSwitchNameForIdentityPickerController:(id)arg1;
-(id)copyIdentitiesForIdentityPickerController:(id)arg1;
-(SecTrustRef)copyTrustForIdentityPickerController:(id)arg1 identity:(SecIdentityRef)arg2;
-(id)emailAddressesForIdentityPickerController:(id)arg1;
-(BOOL)allowEditingForIdentityPickerController:(id)arg1;

@end

