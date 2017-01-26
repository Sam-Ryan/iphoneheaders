/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CRVehicleBluetoothDiscovery.h>
#import <CarKitSettings/CRVehicleAccessoryManagerDelegate.h>

@protocol CRVehicleDiscovery;
@class NSMutableDictionary, CRVehicleBluetoothDiscoverer, CRVehicleAccessoryManager, NSSet, NSString;

@interface CRVehicleDiscoverer : NSObject <CRVehicleBluetoothDiscovery, CRVehicleAccessoryManagerDelegate> {

	id<CRVehicleDiscovery> _discoveryDelegate;
	NSMutableDictionary* _vehicleForBluetoothAddress;
	CRVehicleBluetoothDiscoverer* _bluetoothDiscoverer;
	CRVehicleAccessoryManager* _accessoryManager;

}

@property (assign,nonatomic,__weak) id<CRVehicleDiscovery> discoveryDelegate;                 //@synthesize discoveryDelegate=_discoveryDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * discoveredVehicles; 
@property (nonatomic,retain) NSMutableDictionary * vehicleForBluetoothAddress;                //@synthesize vehicleForBluetoothAddress=_vehicleForBluetoothAddress - In the implementation block
@property (nonatomic,retain) CRVehicleBluetoothDiscoverer * bluetoothDiscoverer;              //@synthesize bluetoothDiscoverer=_bluetoothDiscoverer - In the implementation block
@property (nonatomic,retain) CRVehicleAccessoryManager * accessoryManager;                    //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CRVehicleBluetoothDiscoverer *)bluetoothDiscoverer;
-(void)handleUpdatedVehicle:(id)arg1 ;
-(void)setVehicleForBluetoothAddress:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)vehicleForBluetoothAddress;
-(void)stopDiscovery;
-(void)bluetoothDiscoverer:(id)arg1 didDiscoverDevice:(id)arg2 ;
-(void)bluetoothDiscoverer:(id)arg1 didUpdateDevice:(id)arg2 ;
-(void)bluetoothDiscoverer:(id)arg1 didRemoveDevice:(id)arg2 ;
-(id)viewControllerPresentingPairingForBluetoothDiscoverer:(id)arg1 ;
-(id)_removeVehicleForBluetoothDevice:(id)arg1 ;
-(BOOL)_removeVehicleForAccessory:(id)arg1 removedVehicle:(id*)arg2 ;
-(void)handleRemovedVehicle:(id)arg1 ;
-(id)_vehicleForBluetoothDevice:(id)arg1 ;
-(id)_vehicleForBluetoothAddress:(id)arg1 ;
-(NSSet *)discoveredVehicles;
-(BOOL)bluetoothPairVehicle:(id)arg1 ;
-(void)setBluetoothDiscoverer:(CRVehicleBluetoothDiscoverer *)arg1 ;
-(void)handleDiscoveredVehicle:(id)arg1 ;
-(void)setDiscoveryDelegate:(id<CRVehicleDiscovery>)arg1 ;
-(id<CRVehicleDiscovery>)discoveryDelegate;
-(void)dealloc;
-(id)init;
-(id)_vehicleForAccessory:(id)arg1 ;
-(void)accessoryManager:(id)arg1 didConnectVehicleAccessory:(id)arg2 ;
-(void)accessoryManager:(id)arg1 didDisconnectVehicleAccessory:(id)arg2 ;
-(void)setAccessoryManager:(CRVehicleAccessoryManager *)arg1 ;
-(CRVehicleAccessoryManager *)accessoryManager;
-(void)startDiscovery;
@end

