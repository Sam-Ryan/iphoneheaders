/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <APTransport/APTransport-Structs.h>
@class NSUUID;

@interface APTargetBTLEDevice : NSObject {

	BOOL _isSoloCapable;
	BOOL _supportsMediaControlPort;
	int _lastRSSI;
	SCD_Struct_AP0 _lastData;
	NSUUID* _deviceID;
	unsigned long long _lastBeaconTicks;

}

@property (nonatomic,retain) NSUUID * deviceID;                               //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isSoloCapable;                              //@synthesize isSoloCapable=_isSoloCapable - In the implementation block
@property (assign,nonatomic) BOOL supportsMediaControlPort;                   //@synthesize supportsMediaControlPort=_supportsMediaControlPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AP0 lastData;                         //@synthesize lastData=_lastData - In the implementation block
@property (assign,nonatomic) unsigned long long lastBeaconTicks;              //@synthesize lastBeaconTicks=_lastBeaconTicks - In the implementation block
@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
-(void)dealloc;
-(BOOL)isSoloCapable;
-(void)setIsSoloCapable:(BOOL)arg1 ;
-(BOOL)supportsMediaControlPort;
-(void)setSupportsMediaControlPort:(BOOL)arg1 ;
-(SCD_Struct_AP0)lastData;
-(void)setLastData:(SCD_Struct_AP0)arg1 ;
-(unsigned long long)lastBeaconTicks;
-(void)setLastBeaconTicks:(unsigned long long)arg1 ;
-(int)lastRSSI;
-(void)setLastRSSI:(int)arg1 ;
-(void)setDeviceID:(NSUUID *)arg1 ;
-(NSUUID *)deviceID;
@end

