/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/WirelessProximityDelegate.h>
#import <locationd/WPDeviceScannerDelegate.h>
#import <locationd/WPZoneTrackerDelegate.h>

@class NSRecursiveLock, WirelessProximity, WPDeviceScanner, WPZoneTracker, NSMutableDictionary, NSString;

@interface CLWPBridge : NSObject <WirelessProximityDelegate, WPDeviceScannerDelegate, WPZoneTrackerDelegate> {

	NSRecursiveLock* _instanceLock;
	WirelessProximity* _proximity;
	long long _state;
	WPDeviceScanner* _scanner;
	WPZoneTracker* _tracker;
	NSMutableDictionary* _zonesAndHandlers;
	int _wpPowerState;
	/*^block*/id _stateHandler;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id stateHandler;                         //@synthesize stateHandler=_stateHandler - In the implementation block
@property (assign) int wpPowerState;                                //@synthesize wpPowerState=_wpPowerState - In the implementation block
@property (nonatomic,copy) id updateHandler;                        //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStateHandler:(id)arg1 ;
-(id)stateHandler;
-(void)setWpPowerState:(int)arg1 ;
-(void)_didTransitionZoneWithData:(id)arg1 state:(long long)arg2 ;
-(int)wpPowerState;
-(void)registerForStateUpdates:(/*^block*/id)arg1 ;
-(void)unregisterForStateUpdates;
-(void)startScanForBeaconTypes:(long long)arg1 updateHandler:(/*^block*/id)arg2 ;
-(BOOL)startTrackingZone:(id)arg1 forStates:(long long)arg2 transitionHandler:(/*^block*/id)arg3 ;
-(void)stopTrackingZone:(id)arg1 ;
-(void)stopTrackingZones;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)updateState;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)wirelessProximity:(id)arg1 didChangePowerState:(int)arg2 ;
-(void)zoneTrackerDidUpdateState:(id)arg1 ;
-(void)zoneTracker:(id)arg1 enteredZone:(id)arg2 ;
-(void)zoneTracker:(id)arg1 exitedZone:(id)arg2 ;
-(void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3 ;
-(void)deviceScannerDidUpdateState:(id)arg1 ;
-(void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3 ;
-(void)stopScan;
@end

