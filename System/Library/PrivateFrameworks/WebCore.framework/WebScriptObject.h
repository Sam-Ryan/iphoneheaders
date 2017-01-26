/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {

	WebScriptObjectPrivate* _private;

}
+(id)_convertValueToObjcValue:(JSValue*)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(void)initialize;
+(id)scriptObjectForJSObject:(OpaqueJSValueRef)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(BOOL)throwException:(id)arg1 ;
-(id)copyJSONDataWithContext:(OpaqueJSContextRef)arg1 ;
-(id)safeValueForKey:(id)arg1 ;
-(id)copyArrayValueWithValidator:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)copyValuesForKeys:(id)arg1 ;
-(id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(id)copyArrayOrDictionaryWithContext:(OpaqueJSContextRef)arg1 ;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)_initializeScriptDOMNodeImp;
-(id)_init;
-(void)_setImp:(JSObject*)arg1 originRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg2 rootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg3 ;
-(BOOL)_hasImp;
-(void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg1 andRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg2 ;
-(id)_initWithJSObject:(JSObject*)arg1 originRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg2 rootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg3 ;
-(BOOL)_isSafeScript;
-(OpaqueJSContextRef)_globalContextRef;
-(id)evaluateWebScript:(id)arg1 ;
-(void)removeWebScriptKey:(id)arg1 ;
-(BOOL)hasWebScriptKey:(id)arg1 ;
-(void)setWebScriptValueAtIndex:(unsigned)arg1 value:(id)arg2 ;
-(id)JSValue;
-(JSObject*)_imp;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(oneway void)release;
-(id)stringRepresentation;
-(id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(id)webScriptValueAtIndex:(unsigned)arg1 ;
-(OpaqueJSValueRef)JSObject;
-(RootObject*)_rootObject;
-(RootObject*)_originRootObject;
-(void)setException:(id)arg1 ;
-(void)finalize;
@end
