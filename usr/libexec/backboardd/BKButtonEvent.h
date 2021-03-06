/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKHIDEvent.h>

@interface BKButtonEvent : BKHIDEvent {

	long long _state;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
-(void)_fillWithHIDEvent:(IOHIDEventRef)arg1 descriptor:(id)arg2 senderInfo:(id)arg3 ;
-(id)initWithHIDEventKeyboardDescriptor:(id)arg1 senderInfo:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
@end

