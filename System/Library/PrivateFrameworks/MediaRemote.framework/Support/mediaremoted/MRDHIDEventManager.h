/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:51 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <mediaremoted/mediaremoted-Structs.h>
@interface MRDHIDEventManager : NSObject
-(void)_dispatchKeypressEventWithUsagePage:(unsigned)arg1 usage:(unsigned)arg2 ;
-(void)dispatchHIDEvent:(IOHIDEventRef)arg1 ;
-(void)dispatchHomeButton;
-(void)dispatchKeypressEvent:(unsigned long long)arg1 ;
-(void)dispatchUnicodeEventWithText:(id)arg1 ;
@end
