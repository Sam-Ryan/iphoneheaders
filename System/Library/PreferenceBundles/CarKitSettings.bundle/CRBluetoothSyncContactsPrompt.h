/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRBluetoothSyncContactsPrompt : NSObject {

	/*^block*/id _contactsApprovalCompletion;

}

@property (nonatomic,copy) id contactsApprovalCompletion;              //@synthesize contactsApprovalCompletion=_contactsApprovalCompletion - In the implementation block
-(void)setContactsApprovalCompletion:(id)arg1 ;
-(id)contactsApprovalCompletion;
-(void)presentSyncContactsAlertFromViewController:(id)arg1 ;
-(void)_handleContactsApprovalCompleted:(BOOL)arg1 ;
@end

