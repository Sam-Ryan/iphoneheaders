/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:30 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NDBackgroundSessionManagerProtocol.h>
#import <sharingd/SDURLSessionProxyClientDelegate.h>

@class NSString, NSMutableDictionary;

@interface SDURLSessionProxyClientManager : NSObject <NDBackgroundSessionManagerProtocol, SDURLSessionProxyClientDelegate> {

	NSString* _clientBundleID;
	/*^block*/id _boostReply;
	NSMutableDictionary* _sessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)proxyClientBecameInvalid:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancelEverything;
-(void)devicesConnected;
-(void)devicesDisconnected;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)boost:(/*^block*/id)arg1 ;
-(void)boost;
-(void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dropBoost;
-(void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseAssertionForSession:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getActiveSessionIdentifiersWithReply:(/*^block*/id)arg1 ;
-(void)obliterateAllSessionsWithReply:(/*^block*/id)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
@end

