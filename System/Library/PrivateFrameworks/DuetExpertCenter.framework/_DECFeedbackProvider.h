/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _DECFeedbackProvider : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
+(void)setCategory:(unsigned long long)arg1 ;
+(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 ;
+(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 ;
+(void)userEngaged:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 ;
+(void)userAbandoned:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 ;
-(id)init;
@end

