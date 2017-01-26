/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;
	BOOL healthDevice;

}
+(id)deviceWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)identifier;
-(BOOL)connect;
-(void)disconnect;
-(void)unpair;
-(BOOL)connected;
-(BOOL)paired;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(id)classicDevice;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(BOOL)connectApplePencil;
@end

