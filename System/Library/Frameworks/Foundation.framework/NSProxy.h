/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface NSProxy <NSObject> {

	Class isa;

}

@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
+(BOOL)ICLogging_isLoggingEnabledAtLevel:(int)arg1 ;
+(BOOL)isAncestorOfObject:(id)arg1 ;
+(id)_copyDescription;
+(Class)class;
+(id)alloc;
+(void)dealloc;
+(BOOL)respondsToSelector:(SEL)arg1 ;
+(id)init;
+(BOOL)isKindOfClass:(Class)arg1 ;
+(BOOL)isEqual:(id)arg1 ;
+(id)self;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(BOOL)isProxy;
+(BOOL)isMemberOfClass:(Class)arg1 ;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(id)retain;
+(oneway void)release;
+(id)autorelease;
+(unsigned long long)retainCount;
+(NSZone*)zone;
+(unsigned long long)hash;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(id)copy;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(id)mutableCopy;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(void)initialize;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(BOOL)_isDeallocating;
+(BOOL)allowsWeakReference;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(BOOL)retainWeakReference;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(BOOL)_tryRetain;
+(BOOL)isFault;
+(void)finalize;
-(BOOL)ICLogging_isLoggingEnabledAtLevel:(int)arg1 ;
-(id)_accessibilityValueForKey:(id)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(int)arg3 ;
-(void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_accessibilityBoolValueForKey:(id)arg1 ;
-(long long)_accessibilityIntegerValueForKey:(id)arg1 ;
-(unsigned long long)_accessibilityUnsignedIntegerValueForKey:(id)arg1 ;
-(void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2 ;
-(void)_accessibilitySetBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_accessibilitySetIntegerValue:(long long)arg1 forKey:(id)arg2 ;
-(void)_accessibilitySetUnsignedIntegerValue:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)_accessibilityRemoveValueForKey:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)_copyDescription;
-(Class)class;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)self;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)allowsWeakReference;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)retainWeakReference;
-(BOOL)_tryRetain;
-(BOOL)isFault;
-(void)finalize;
@end

