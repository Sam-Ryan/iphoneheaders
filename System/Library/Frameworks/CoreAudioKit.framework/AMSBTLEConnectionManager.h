/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol BTLEConnectionTable;
@class CBCentralManager, NSMutableArray, NSTimer, NSString;

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	CBCentralManager* centralManager;
	NSMutableArray* peripheralList;
	NSMutableArray* connectedBTPeripherals;
	NSMutableArray* connectedAMSPeripherals;
	NSTimer* refreshTimer;
	id<BTLEConnectionTable> controller;
	long long centralState;

}

@property (readonly) NSMutableArray * peripheralList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)timerFired:(id)arg1 ;
-(void)startTimer;
-(void)killTimer;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(unsigned)midiDeviceForUUID:(id)arg1 ;
-(BOOL)isLECapableHardware;
-(id)initWithUIController:(id)arg1 ;
-(NSMutableArray *)peripheralList;
-(void)startScan;
-(void)createPeripheralList;
-(id)amsPeripheralForCBPeripheral:(id)arg1 ;
-(void)checkAlreadyConnectedPeripherals;
-(BOOL)peripheralIsConnectedCentral:(id)arg1 ;
-(void)setUIController:(id)arg1 ;
-(void)removeAMSPeripheralForCBPeripheral:(id)arg1 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)stopScan;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(long long)bluetoothState;
@end

