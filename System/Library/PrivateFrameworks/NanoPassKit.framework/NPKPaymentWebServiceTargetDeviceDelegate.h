/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKPaymentWebServiceTargetDeviceDelegate <NSObject>
@required
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(BOOL)arg2;
-(void)handlePushToken:(id)arg1;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
-(void)shouldArchiveWebServiceContext:(id)arg1;
-(void)shouldArchiveWebServiceBackgroundContext:(id)arg1;
-(void)shouldSetNewAuthRandom:(/*^block*/id)arg1;

@end

