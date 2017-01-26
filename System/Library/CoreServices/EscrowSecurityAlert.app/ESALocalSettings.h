/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:16 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/EscrowSecurityAlert.app/EscrowSecurityAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ESALocalSettings : NSObject

@property (assign,getter=isNotificationDisabled,nonatomic) BOOL notificationDisabled; 
@property (nonatomic,readonly) BOOL shouldAllowSnooze; 
@property (assign,nonatomic) int alertType; 
-(BOOL)isNotificationDisabled;
-(BOOL)shouldAllowSnooze;
-(void)notificationSnoozed;
-(void)setNotificationDisabled:(BOOL)arg1 ;
-(void)reset;
-(void)setAlertType:(int)arg1 ;
-(int)alertType;
@end

