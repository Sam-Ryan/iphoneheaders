/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
+(void)setCurrentEphemeralUserPasscodeTypeFromUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2 ;
+(BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 ;
+(id)sharedManager;
-(void)_setPrivatePasscodeDict:(id)arg1 ;
-(void)_sendPasscodeChangedNotification;
-(BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3 ;
-(BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3 ;
@end
