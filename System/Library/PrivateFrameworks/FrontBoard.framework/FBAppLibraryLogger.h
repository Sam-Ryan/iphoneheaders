/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBFileLogger.h>

@protocol OS_os_log;
@class NSObject;

@interface FBAppLibraryLogger : FBFileLogger {

	NSObject*<OS_os_log> _aggregateLog;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)name;
-(int)level;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)logToAggregateInstallationLog:(unsigned long long)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 bundleID:(id)arg4 description:(id)arg5 ;
-(void)_setLevel:(int)arg1 ;
-(int)maxLogSize;
-(BOOL)shouldEnableOnInternalBuilds;
@end

