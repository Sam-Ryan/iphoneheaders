/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSLoggingDelegate;
@interface ICSLogger : NSObject {

	int _logCount;
	id<ICSLoggingDelegate> _loggingDelegate;

}
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 ;
+(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
@end

