/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <backboardd/backboardd-Structs.h>
@interface BKDigitizerEventSchedulerBase : NSObject
-(void)scheduleEvent:(IOHIDEventRef)arg1 fromDigitizer:(id)arg2 toClient:(unsigned)arg3 ;
-(void)sendEvent:(IOHIDEventRef)arg1 recommendCoalescing:(BOOL)arg2 toClient:(unsigned)arg3 ;
-(void)digitizer:(id)arg1 touchingPathMaskDidChange:(unsigned)arg2 ;
@end

