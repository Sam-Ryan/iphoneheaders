/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MailboxBehaviorMailboxPickerDelegate
@required
-(BOOL)storeMailboxTypeOnServer:(int)arg1;
-(id)account;
-(id)mailboxUidForType:(int)arg1;
-(void)pickerDidChooseMailbox:(id)arg1 forType:(int)arg2;

@end
