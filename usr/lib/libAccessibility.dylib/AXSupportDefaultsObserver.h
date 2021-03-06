/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:10:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAccessibility.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libAccessibility.dylib/libAccessibility.dylib-Structs.h>
@class NSUserDefaults, NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject;

@interface AXSupportDefaultsObserver : NSObject {

	NSUserDefaults* _axDomain;
	NSMutableSet* _observedPrefs;
	NSMutableArray* _actions;
	NSMutableDictionary* _actionLastNotifications;
	NSObject*<OS_dispatch_queue> _lastNotificationsQueue;

}
-(void)startObservingPreference:(CFStringRef)arg1 andBroadcastDarwinNotification:(CFStringRef)arg2 ;
-(void)startObservingPreference:(CFStringRef)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

