/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface _SFUnresponsiveWebProcessController : NSObject {

	NSTimer* _webProcessWatchdogTimer;
	BOOL _shouldIgnoreDidBecomeResponsive;

}

@property (assign,nonatomic) BOOL shouldIgnoreDidBecomeResponsive;              //@synthesize shouldIgnoreDidBecomeResponsive=_shouldIgnoreDidBecomeResponsive - In the implementation block
+(id)sharedController;
-(void)setShouldIgnoreDidBecomeResponsive:(BOOL)arg1 ;
-(void)_webProcessWatchdogTimerFired:(id)arg1 ;
-(void)unscheduleWatchdogTimer;
-(void)scheduleWatchdogTimer;
-(BOOL)shouldIgnoreDidBecomeResponsive;
@end
