/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCProfileServiceServer;

@interface MCBTAJobManager : NSObject {

	int _profileChangeNotificationToken;
	int _managedAppChangeNotificationToken;
	MCProfileServiceServer* _server;
	id _activationLockGenerationObserver;

}

@property (assign,nonatomic,__weak) MCProfileServiceServer * server;              //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) int profileChangeNotificationToken;                  //@synthesize profileChangeNotificationToken=_profileChangeNotificationToken - In the implementation block
@property (nonatomic,retain) id activationLockGenerationObserver;                 //@synthesize activationLockGenerationObserver=_activationLockGenerationObserver - In the implementation block
@property (assign,nonatomic) int managedAppChangeNotificationToken;               //@synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken - In the implementation block
-(void)rescheduleProfileJanitorJob;
-(void)rescheduleManagedAppValidationJob:(id)arg1 ;
-(void)rescheduleManagedAppValidationJob;
-(void)rescheduleActivationLockCleanupJob;
-(int)profileChangeNotificationToken;
-(int)managedAppChangeNotificationToken;
-(id)activationLockGenerationObserver;
-(id)_nextRegularDate;
-(void)rescheduleUpdateMISTrustJob:(id)arg1 ;
-(void)setProfileChangeNotificationToken:(int)arg1 ;
-(void)setActivationLockGenerationObserver:(id)arg1 ;
-(void)setManagedAppChangeNotificationToken:(int)arg1 ;
-(MCProfileServiceServer *)server;
-(void)stop;
-(void)start;
-(void)setServer:(MCProfileServiceServer *)arg1 ;
@end

