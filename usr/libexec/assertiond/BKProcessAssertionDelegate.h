/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/assertiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKProcessAssertionDelegate
@required
-(void)processAssertion:(id)arg1 preventTaskSuspendChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventUIThrottleDownChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventCPUThrottleDownChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventIdleSleepChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 wantsForegroundResourcePriorityCountChange:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventSuspendOnSleepChanged:(BOOL)arg2;
-(void)processAssertionInvalidated:(id)arg1;
-(void)processAssertionSuspended:(id)arg1;
-(void)processAssertionResumed:(id)arg1;
-(id)processAssertionDelegateDescription:(id)arg1;

@end
