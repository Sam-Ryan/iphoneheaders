/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <VectorKit/VectorKit-Structs.h>
@class NSObject;

@interface VKMemoryObserver : NSObject {

	geo_weak_ptr<id> _target;
	SEL _selector;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;

}
-(void)dealloc;
-(void)_receivedMemoryNotification;
-(void)triggerMemoryNotification:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end
