/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTBatteryManagerNotificationChargerConnected : RTNotification {

	BOOL _connected;

}

@property (nonatomic,readonly) BOOL connected;              //@synthesize connected=_connected - In the implementation block
+(id)notificationName;
-(BOOL)connected;
-(id)initWithChargerConnected:(BOOL)arg1 ;
@end

