/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:30 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDAirDropPublisherDelegate.h>
#import <sharingd/SDWormholeInformationDelegate.h>
#import <sharingd/WPAWDLDelegate.h>

@protocol OS_dispatch_queue, SDWormholeServerDelegate;
@class WPAWDL, NSNumber, NSTimer, NSObject, SDStatusMonitor, NSString, SDAirDropPublisher, NSMutableSet, NSMutableDictionary, SDWormholeInformation;

@interface SDWormholeServer : NSObject <SDAirDropPublisherDelegate, SDWormholeInformationDelegate, WPAWDLDelegate> {

	BOOL _screenOn;
	BOOL _contactsOnly;
	WPAWDL* _proximity;
	NSNumber* _portNumber;
	NSTimer* _awdlTimer;
	NSTimer* _bluetoothTimer;
	NSObject*<OS_dispatch_queue> _queue;
	SecIdentityRef _identity;
	CFHTTPServerRef _server;
	double _startTime;
	SDStatusMonitor* _monitor;
	NSString* _discoverableMode;
	SDAirDropPublisher* _publisher;
	NSMutableSet* _discoveredHashes;
	NSMutableDictionary* _properties;
	SDWormholeInformation* _information;
	CFDictionaryRef _connections;
	int _clientPid;
	NSString* _clientBundleID;
	id<SDWormholeServerDelegate> _delegate;

}

@property (assign) int clientPid;                                      //@synthesize clientPid=_clientPid - In the implementation block
@property (copy) NSString * clientBundleID;                            //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (__weak) id<SDWormholeServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObservers;
-(void)removeObservers;
-(void)systemWillSleep:(id)arg1 ;
-(void)consoleUserChanged:(id)arg1 ;
-(void)legacyModeChanged:(id)arg1 ;
-(BOOL)thisIsTheFinder;
-(void)bonjourPublisher:(id)arg1 propertiesDidChange:(id)arg2 ;
-(void)appleIDChanged:(id)arg1 ;
-(void)wormholeInformation:(id)arg1 didChange:(id)arg2 ;
-(void)notifyClient:(long long)arg1 withResults:(id)arg2 ;
-(void)handleTerminalCallBack;
-(void)didReceiveError:(CFErrorRef)arg1 ;
-(void)awdlTimeoutFired:(id)arg1 ;
-(void)bluetoothTimeoutFired:(id)arg1 ;
-(void)invalidateTimers;
-(void)startTimers;
-(void)startHTTPServer:(unsigned short)arg1 ;
-(void)updateServerState;
-(void)publishedInfoChanged:(id)arg1 ;
-(void)stopProximityScanner;
-(void)logDiscoveryWithHash:(id)arg1 ;
-(BOOL)discoverableByEveryone;
-(void)stopScanningAndStartServer;
-(BOOL)discoverableByContactsOnly;
-(void)startProximityScanner;
-(void)keyBagFirstUnlock:(id)arg1 ;
-(void)wirelessChanged:(id)arg1 ;
-(void)airDropUnpublished:(id)arg1 ;
-(void)screenStateChange:(id)arg1 ;
-(void)bluetoothChanged:(id)arg1 ;
-(void)discoverableModeChanged:(id)arg1 ;
-(id)sslSettings;
-(void)didOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)didCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)systemHasPoweredOn:(id)arg1 ;
-(void)finderAirDropEnabled:(id)arg1 ;
-(void)setDelegate:(id<SDWormholeServerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SDWormholeServerDelegate>)delegate;
-(void)stop;
-(void)start;
-(NSString *)clientBundleID;
-(void)setClientPid:(int)arg1 ;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(BOOL)awdl:(id)arg1 foundDevice:(id)arg2 ;
-(void)awdlDidUpdateState:(id)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)startServer;
-(int)clientPid;
@end

