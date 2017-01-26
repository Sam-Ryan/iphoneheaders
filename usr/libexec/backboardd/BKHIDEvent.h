/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <backboardd/backboardd-Structs.h>
@class BKSHIDEventDescriptor, BKHIDServiceInfo;

@interface BKHIDEvent : NSObject {

	BKSHIDEventDescriptor* _descriptor;
	BKHIDServiceInfo* _senderInfo;

}

@property (assign,nonatomic) BKSHIDEventDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) BKHIDServiceInfo * senderInfo;                   //@synthesize senderInfo=_senderInfo - In the implementation block
-(void)_fillWithHIDEvent:(IOHIDEventRef)arg1 descriptor:(id)arg2 senderInfo:(id)arg3 ;
-(id)initWithHIDEventDescriptor:(id)arg1 senderInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setDescriptor:(BKSHIDEventDescriptor *)arg1 ;
-(BKSHIDEventDescriptor *)descriptor;
-(BKHIDServiceInfo *)senderInfo;
-(void)setSenderInfo:(BKHIDServiceInfo *)arg1 ;
@end
