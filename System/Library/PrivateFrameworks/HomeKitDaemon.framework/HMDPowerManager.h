/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@class NSObject;

@interface HMDPowerManager : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _networkInterfaceActive;
	BOOL _networkAccessRequired;
	unsigned _powerAssertion;
	SCDynamicStoreRef _scStore;
	void* _scContext;
	BOOL _started;

}

@property (assign,getter=isNetworkAccessRequired,nonatomic) BOOL networkAccessRequired;              //@synthesize networkAccessRequired=_networkAccessRequired - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)_update;
-(int)_ensureNetworkInterfaceMonitorStarted;
-(void)_ensureNetworkInterfaceMonitorStopped;
-(void)setNetworkAccessRequired:(BOOL)arg1 ;
-(BOOL)isNetworkAccessRequired;
@end
