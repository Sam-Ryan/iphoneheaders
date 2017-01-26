/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger {

	BOOL _hasDeviceBeenUnlockedSinceBoot;

}

@property (assign) BOOL hasDeviceBeenUnlockedSinceBoot;              //@synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot - In the implementation block
+(id)instance;
-(id)init;
-(void)reFetch;
-(BOOL)hasDeviceBeenUnlockedSinceBoot;
-(void)setupMobileKeyBag;
-(void)cacheUnlockSinceBootState;
-(void)setHasDeviceBeenUnlockedSinceBoot:(BOOL)arg1 ;
@end

