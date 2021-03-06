/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:37 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BTServer/BTServer-Structs.h>
#import <BTServer/UserNotification.h>

@interface PairingNotification : UserNotification {

	int _pairingType;
	unsigned long long _passkey;

}

@property (assign) int pairingType;                         //@synthesize pairingType=_pairingType - In the implementation block
@property (assign) unsigned long long passkey;              //@synthesize passkey=_passkey - In the implementation block
-(id)initWithType:(int)arg1 passkey:(unsigned long long)arg2 device:(LeUuid)arg3 ;
-(unsigned long long)passkey;
-(void)setPasskey:(unsigned long long)arg1 ;
-(void)setPairingType:(int)arg1 ;
-(int)pairingType;
@end

