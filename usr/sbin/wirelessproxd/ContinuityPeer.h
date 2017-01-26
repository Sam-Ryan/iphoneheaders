/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/wirelessproxd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBPeripheral, CBCharacteristic, CBCentral, NSMutableData;

@interface ContinuityPeer : NSObject {

	BOOL _firstSentPacket;
	BOOL _firstReceivedPacket;
	BOOL _didConnectSent;
	BOOL _centralConnected;
	CBPeripheral* _peripheral;
	CBCharacteristic* _continuityCharacteristic;
	CBCentral* _central;
	NSMutableData* _dataToSend;
	unsigned long long _dataSendSize;
	NSMutableData* _receivedData;
	unsigned long long _receivedDataSize;

}

@property (retain) CBPeripheral * peripheral;                                //@synthesize peripheral=_peripheral - In the implementation block
@property (retain) CBCharacteristic * continuityCharacteristic;              //@synthesize continuityCharacteristic=_continuityCharacteristic - In the implementation block
@property (retain) CBCentral * central;                                      //@synthesize central=_central - In the implementation block
@property (retain) NSMutableData * dataToSend;                               //@synthesize dataToSend=_dataToSend - In the implementation block
@property (assign) unsigned long long dataSendSize;                          //@synthesize dataSendSize=_dataSendSize - In the implementation block
@property (assign) BOOL firstSentPacket;                                     //@synthesize firstSentPacket=_firstSentPacket - In the implementation block
@property (retain) NSMutableData * receivedData;                             //@synthesize receivedData=_receivedData - In the implementation block
@property (assign) unsigned long long receivedDataSize;                      //@synthesize receivedDataSize=_receivedDataSize - In the implementation block
@property (assign) BOOL firstReceivedPacket;                                 //@synthesize firstReceivedPacket=_firstReceivedPacket - In the implementation block
@property (assign) BOOL didConnectSent;                                      //@synthesize didConnectSent=_didConnectSent - In the implementation block
@property (assign) BOOL centralConnected;                                    //@synthesize centralConnected=_centralConnected - In the implementation block
-(CBCharacteristic *)continuityCharacteristic;
-(void)setContinuityCharacteristic:(CBCharacteristic *)arg1 ;
-(unsigned long long)dataSendSize;
-(void)setDataSendSize:(unsigned long long)arg1 ;
-(BOOL)firstSentPacket;
-(void)setFirstSentPacket:(BOOL)arg1 ;
-(unsigned long long)receivedDataSize;
-(void)setReceivedDataSize:(unsigned long long)arg1 ;
-(BOOL)firstReceivedPacket;
-(void)setFirstReceivedPacket:(BOOL)arg1 ;
-(BOOL)didConnectSent;
-(void)setDidConnectSent:(BOOL)arg1 ;
-(BOOL)centralConnected;
-(void)setCentralConnected:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)setDataToSend:(NSMutableData *)arg1 ;
-(NSMutableData *)dataToSend;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(CBCentral *)central;
-(void)setCentral:(CBCentral *)arg1 ;
@end

