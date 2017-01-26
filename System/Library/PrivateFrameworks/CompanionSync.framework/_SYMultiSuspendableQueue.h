/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _SYMultiSuspendableQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	int _resumeCount;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,readonly) unsigned qosClass; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(void)suspend;
-(void)resume;
-(unsigned)qosClass;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(BOOL)arg3 ;
-(void)barrierAsync:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
-(void)barrierSync:(/*^block*/id)arg1 ;
@end

