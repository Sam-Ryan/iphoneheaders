/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Library/Audio/Plug-Ins/HAL/AirTunesHAL.pdev/AirTunesHAL
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirTunesHAL/AirTunesHAL-Structs.h>
@interface AirPlayBTLEDevice : NSObject {

	unsigned long long _lastQueryTicks;
	unsigned long long _lastUpdateTicks;
	SCD_Struct_Ai0 _lastAdvData;
	int _lastRSSI;
	CFDictionaryRef _lastInfo;
	HTTPClientPrivateRef _httpClient;
	unsigned long long _deviceID;
	unsigned char _soloCapable;
	unsigned char _supportsMediaControlPort;

}
@end

