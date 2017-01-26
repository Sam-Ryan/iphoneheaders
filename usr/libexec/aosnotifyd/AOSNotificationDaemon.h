/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMDaemon.h>

@class NSDate;

@interface AOSNotificationDaemon : FMDaemon {

	BOOL _isFirstRunAfterBoot;
	BOOL _logLevelsMaxedOut;
	NSDate* _startTime;

}

@property (assign,nonatomic) BOOL isFirstRunAfterBoot;              //@synthesize isFirstRunAfterBoot=_isFirstRunAfterBoot - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL logLevelsMaxedOut;                //@synthesize logLevelsMaxedOut=_logLevelsMaxedOut - In the implementation block
+(id)sharedInstance;
-(void)_initializeLogging;
-(void)calculateFirstRunStatus;
-(void)startServiceProviders;
-(void)_logSettingsDidChange;
-(void)setIsFirstRunAfterBoot:(BOOL)arg1 ;
-(BOOL)isFirstRunAfterBoot;
-(BOOL)logLevelsMaxedOut;
-(void)setLogLevelsMaxedOut:(BOOL)arg1 ;
-(id)init;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)waitForSpringBoard;
-(void)startupWithCompletion:(/*^block*/id)arg1 ;
-(id)xpcDarwinEventHandlers;
@end

