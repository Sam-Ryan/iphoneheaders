/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class PKUsageNotificationClient;

@interface RTWalletManager : RTNotifier {

	double _maximumTransactionDistance;
	PKUsageNotificationClient* _passKitClient;

}

@property (assign,nonatomic) double maximumTransactionDistance;                      //@synthesize maximumTransactionDistance=_maximumTransactionDistance - In the implementation block
@property (nonatomic,retain) PKUsageNotificationClient * passKitClient;              //@synthesize passKitClient=_passKitClient - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_unregisterForNotifications;
-(void)shutdown;
-(void)_setup;
-(void)_registerForNotifications;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)updateDoubleForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setMaximumTransactionDistance:(double)arg1 ;
-(void)_unregisterPassUseCallbacks;
-(void)_unregisterPaymentUseCallbacks;
-(void)setPassKitClient:(PKUsageNotificationClient *)arg1 ;
-(void)_registerPassUseCallbacks;
-(void)_registerPaymentUseCallbacks;
-(PKUsageNotificationClient *)passKitClient;
-(void)passUsedWithIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
-(void)paymentMadeWithIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(void)_passUsedWithIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
-(void)_paymentMadeWithIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(double)maximumTransactionDistance;
@end

