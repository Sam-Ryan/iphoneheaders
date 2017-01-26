/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEONavdServerProxy.h>
#import <libobjc.A.dylib/GEONavdProxyObserver.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSMutableDictionary, NSObject;

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {

	NSXPCConnection* _connection;
	NSMutableArray* _observers;
	NSMutableDictionary* _handlers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) id<GEONavdXPCInterface> remoteObjectProxyThreadUnsafe; 
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)close;
-(void)open;
-(void)forceHome;
-(void)forceCacheRefresh;
-(void)forceNone;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)forceWork;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)startMonitoringSuggestionsForClient:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringSuggestionsForClient:(id)arg1 ;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 ;
-(id<GEONavdXPCInterface>)remoteObjectProxyThreadUnsafe;
-(void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2 ;
-(void)navdProxyReceivedSuggestions:(id)arg1 forClient:(id)arg2 ;
-(void)_connectToDaemonIfNeededThreadUnsafe;
-(void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2 ;
@end

