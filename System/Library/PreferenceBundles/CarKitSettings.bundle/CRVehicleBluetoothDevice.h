/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CarKitSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BluetoothDevice;

@interface CRVehicleBluetoothDevice : NSObject <NSCopying> {

	BOOL _paired;
	NSString* _bluetoothAddress;
	NSString* _name;
	long long _connectionStatus;
	BluetoothDevice* _btDevice;

}

@property (nonatomic,copy) NSString * bluetoothAddress;                      //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,getter=isPaired,nonatomic) BOOL paired;                    //@synthesize paired=_paired - In the implementation block
@property (assign,nonatomic) long long connectionStatus;                     //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (assign,nonatomic,__weak) BluetoothDevice * btDevice;              //@synthesize btDevice=_btDevice - In the implementation block
-(BluetoothDevice *)btDevice;
-(void)setBtDevice:(BluetoothDevice *)arg1 ;
-(void)setConnectionStatus:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)connectionStatus;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(BOOL)isPaired;
-(void)setPaired:(BOOL)arg1 ;
-(NSString *)bluetoothAddress;
@end

