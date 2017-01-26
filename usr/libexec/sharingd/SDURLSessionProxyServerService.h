/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDURLSessionProxyService.h>
#import <sharingd/SDURLSessionProxyServerDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface SDURLSessionProxyServerService : SDURLSessionProxyService <SDURLSessionProxyServerDelegate> {

	NSMutableDictionary* _sessions;
	long long _infraWiFiRetainCount;
	NSObject*<OS_dispatch_source> _infraWiFiTimer;

}
+(id)sharedService;
-(void)_onqueue_remoteDeviceStartedUp;
-(void)_onqueue_devicesConnected;
-(long long)_onqueue_priorityForMessage:(id)arg1 ofType:(unsigned short)arg2 isReply:(BOOL)arg3 ;
-(void)_onqueue_handleFailedMessageSend:(id)arg1 ofType:(unsigned short)arg2 ;
-(void)_onqueue_handleReceivedMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(/*^block*/id)arg3 ;
-(void)proxyServerBecameInvalid:(id)arg1 ;
-(void)retainInfraWiFi;
-(void)releaseInfraWiFi;
-(void)dealloc;
-(id)init;
-(void)start;
@end

