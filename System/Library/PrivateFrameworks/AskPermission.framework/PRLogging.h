/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PRLogging : NSObject {

	NSObject*<OS_dispatch_queue> _logQueue;
	BOOL _logToFile;
	BOOL _logToSyslog;

}
+(id)sharedLogger;
-(id)init;
-(void)_reloadLogPreferences;
-(void)logMessageWithFormat:(id)arg1 args:(char*)arg2 ;
@end

