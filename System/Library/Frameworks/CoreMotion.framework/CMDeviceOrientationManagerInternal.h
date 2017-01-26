/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMDeviceOrientationManagerInternal : NSObject {

	int fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	/*^block*/id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	NSObject*<OS_dispatch_semaphore> fDeviceOrientationSemaphore;
	BOOL fDidSignalSemaphore;
	int fOrientationCallbackMode;
	BOOL fEnableOrientationNotification;
	Sample fLatestDeviceOrientationSample;
	Sample fLastSignificantOrientationSample;

}
-(void)dealloc;
-(id)init;
@end

