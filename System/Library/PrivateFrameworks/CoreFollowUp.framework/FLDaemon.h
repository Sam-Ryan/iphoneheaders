/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSLock;

@interface FLDaemon : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;

}
+(id)sharedInstance;
+(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectInterface;
-(id)init;
-(id)connection;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)invalidateConnection;
@end

