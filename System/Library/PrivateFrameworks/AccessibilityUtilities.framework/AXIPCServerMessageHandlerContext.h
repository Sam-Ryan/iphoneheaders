/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXIPCServerMessageHandlerContext : NSObject {

	BOOL _async;
	/*^block*/id _handler;
	id _target;
	SEL _selector;

}

@property (nonatomic,readonly) id handler;                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id target;                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;              //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL async;                //@synthesize async=_async - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 ;
-(BOOL)async;
@end
