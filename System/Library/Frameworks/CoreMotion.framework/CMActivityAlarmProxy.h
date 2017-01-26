/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSMutableDictionary, NSObject;

@interface CMActivityAlarmProxy : NSObject {

	id _internal;
	CLConnectionClient* fLocationdConnection;
	int fAlarmCounter;
	NSMutableDictionary* fAlarms;
	NSObject*<OS_dispatch_queue> fReplyQueue;
	BOOL fAlarmAvailable;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(BOOL)activityAlarmAvailable;
-(void)listenForActivityAlarm:(id)arg1 ;
-(void)stopListeningForActivityAlarm:(id)arg1 ;
@end

