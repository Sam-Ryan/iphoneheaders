/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {

	SCD_Struct_CF7* _children;

}
+(Class)childClass;
-(id)initWithParent:(id)arg1 childKeyCallbacks:(const SCD_Struct_CF1*)arg2 ;
-(void)resetChildren;
-(void)dealloc;
-(void)invalidate;
-(void)removeChild:(id)arg1 ;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)finalize;
@end
