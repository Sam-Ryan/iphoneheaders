/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonController : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
-(id)init;
-(id)_daemonConnection;
-(BOOL)setupAssistantNeedsToRun;
@end

