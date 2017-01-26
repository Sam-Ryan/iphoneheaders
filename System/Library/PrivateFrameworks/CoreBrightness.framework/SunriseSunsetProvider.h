/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class CDContextStore, NSDictionary, NSObject;

@interface SunriseSunsetProvider : NSObject {

	CDContextStore* _duetContextStore;
	NSDictionary* _duetInfo;
	NSObject*<OS_dispatch_semaphore> _duetDispatchSemaphore;
	int _sunriseSunsetNotificationToken;
	/*^block*/id _sunriseSunsetNotificationHandler;
	BOOL _sunriseSunsetNotificationEnabled;
	/*^block*/id _callbackBlock;
	int _logLevel;

}

@property (assign) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)copySunriseSunsetInfo:(int)arg1 ;
-(void)updateSunriseSunsetInfo;
-(void)unregisterNotification;
-(void)unregisterBlock;
-(void)registerBlock:(/*^block*/id)arg1 ;
@end

