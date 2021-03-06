/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXNotificationRegistrationContainer, _CFXNotificationRegistrar;

@interface _CFXNotificationRegistrationBase : NSObject {

	_CFXNotificationRegistrationContainer* _parent;
	os_lock_handoff_s* _lock;

}

@property (__weak,readonly) _CFXNotificationRegistrationContainer * parent; 
@property (readonly) _CFXNotificationRegistrar * registrar; 
@property (readonly) void* key; 
+(const SCD_Struct_CF1*)keyCallbacks;
-(_CFXNotificationRegistrar *)registrar;
-(void)dealloc;
-(id)init;
-(void*)key;
-(void)removeFromParent;
-(id)initWithParent:(id)arg1 ;
-(_CFXNotificationRegistrationContainer *)parent;
-(void)setParent:(_CFXNotificationRegistrationContainer *)arg1 ;
@end

