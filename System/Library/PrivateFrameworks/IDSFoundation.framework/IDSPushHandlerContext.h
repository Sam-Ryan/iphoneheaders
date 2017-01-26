/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface IDSPushHandlerContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _topics;
	NSSet* _commands;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSSet * topics;                                      //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy) NSSet * commands;                                    //@synthesize commands=_commands - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSSet *)commands;
-(void)setCommands:(NSSet *)arg1 ;
-(id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3 ;
-(NSSet *)topics;
-(void)setTopics:(NSSet *)arg1 ;
@end

