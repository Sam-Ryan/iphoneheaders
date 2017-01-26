/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	int _count;

}
+(id)backgroundTaskAssertionQueue;
-(void)dealloc;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)fireExpirationHandler;
@end

