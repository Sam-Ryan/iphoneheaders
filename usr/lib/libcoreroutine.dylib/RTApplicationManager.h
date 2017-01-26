/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSObject, RTInvocationDispatcher, RTDataProviderNowPlaying;

@interface RTApplicationManager : NSObject {

	BOOL _ready;
	NSSet* _bundlesSupportingMediaRemotePopulation;
	NSObject*<OS_dispatch_queue> _queue;
	RTInvocationDispatcher* _dispatcher;
	RTDataProviderNowPlaying* _nowPlayingDataProvider;

}

@property (nonatomic,retain) NSSet * bundlesSupportingMediaRemotePopulation;                   //@synthesize bundlesSupportingMediaRemotePopulation=_bundlesSupportingMediaRemotePopulation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                       //@synthesize ready=_ready - In the implementation block
@property (nonatomic,readonly) RTDataProviderNowPlaying * nowPlayingDataProvider;              //@synthesize nowPlayingDataProvider=_nowPlayingDataProvider - In the implementation block
+(id)sharedInstance;
+(BOOL)installedForBundleId:(id)arg1 ;
+(id)localizedApplicationNameForBundleId:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_unregisterForNotifications;
-(void)shutdown;
-(void)_setup;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForNotifications;
-(void)setReady:(BOOL)arg1 ;
-(BOOL)ready;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)fetchCapabilitiesForBundleId:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithNowPlayingDataProvider:(id)arg1 ;
-(RTDataProviderNowPlaying *)nowPlayingDataProvider;
-(void)onNowPlayingBundleUpdate:(id)arg1 ;
-(void)setBundlesSupportingMediaRemotePopulation:(NSSet *)arg1 ;
-(NSSet *)bundlesSupportingMediaRemotePopulation;
@end
