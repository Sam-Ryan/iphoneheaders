/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <backboardd/backboardd-Structs.h>
@class NSObject, BKHIDServiceInfo;

@interface BKHIDServiceManager : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	NSObject*<OS_dispatch_queue> _queue;
	CFDictionaryRef _matchingDictionaryToActionMapping;
	CFDictionaryRef _oneShotMatchingDictionaryToActionMapping;
	CFDictionaryRef _serviceToRemovalNotificationMapping;
	CFDictionaryRef _serviceInfoToRemovalActionsMapping;
	BOOL _starkSimulatorAttached;
	BKHIDServiceInfo* _starkSimulatorServiceInfo;

}
+(id)sharedInstanceWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
+(id)sharedInstance;
-(void)watchServicesMatching:(id)arg1 additionBlock:(/*^block*/id)arg2 removalBlock:(/*^block*/id)arg3 ;
-(void)watchServiceForRemoval:(id)arg1 removalBlock:(/*^block*/id)arg2 ;
-(id)getServicesMatching:(id)arg1 ;
-(void)watchForNextServiceMatching:(id)arg1 additionBlock:(/*^block*/id)arg2 ;
-(void)_serviceRemoved:(IOHIDServiceRef)arg1 ;
-(id)_initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
-(void)_queue_addOneShotMatchingDictionary:(id)arg1 withMatchingAction:(id)arg2 ;
-(void)_queue_watchForAndFireAction:(id)arg1 forCurrentlyAttachedServicesMatching:(id)arg2 ;
-(void)_queue_addMatchingDictionary:(id)arg1 withMatchingAction:(id)arg2 ;
-(void)_queue_serviceInfosAdded:(id)arg1 matchingActions:(id)arg2 ;
-(id)_queue_actionsForMatchingDictionary:(id)arg1 ;
-(void)_queue_serviceInfoRemoved:(id)arg1 ;
-(void)_servicesAdded:(id)arg1 matchingDictionary:(id)arg2 ;
-(void)dealloc;
@end

