/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:10:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSApplicationUtil : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(id)_connection;
-(void)restartApplication:(/*^block*/id)arg1 ;
@end

