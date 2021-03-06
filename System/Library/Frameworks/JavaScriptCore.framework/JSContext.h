/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSVirtualMachine, JSWrapperMap, RWIProtocolInspector, JSValue, NSString;

@interface JSContext : NSObject {

	JSVirtualMachine* m_virtualMachine;
	OpaqueJSContextRef m_context;
	JSWrapperMap* m_wrapperMap;
	Strong<JSC::JSObject>* m_exception;
	/*^block*/id exceptionHandler;

}

@property (nonatomic,readonly) RWIProtocolInspector * _inspector; 
@property (retain,readonly) JSWrapperMap * wrapperMap; 
@property (readonly) JSValue * globalObject; 
@property (retain) JSValue * exception; 
@property (copy) id exceptionHandler; 
@property (readonly) JSVirtualMachine * virtualMachine; 
@property (copy) NSString * name; 
+(id)contextWithJSGlobalContextRef:(OpaqueJSContextRef)arg1 ;
+(id)currentCallee;
+(id)currentArguments;
+(id)currentContext;
+(id)currentThis;
-(RWIProtocolInspector *)_inspector;
-(void)notifyException:(OpaqueJSValueRef)arg1 ;
-(id)initWithGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(BOOL)boolFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)beginCallbackWithData:(CallbackData*)arg1 calleeValue:(OpaqueJSValueRef)arg2 thisValue:(OpaqueJSValueRef)arg3 argumentCount:(unsigned long long)arg4 arguments:(const OpaqueJSValue*)arg5 ;
-(void)endCallbackWithData:(CallbackData*)arg1 ;
-(id)wrapperForObjCObject:(id)arg1 ;
-(id)wrapperForJSObject:(OpaqueJSValueRef)arg1 ;
-(id)valueFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)exceptionHandler;
-(JSWrapperMap *)wrapperMap;
-(BOOL)_remoteInspectionEnabled;
-(BOOL)_includesNativeCallStackWhenReportingExceptions;
-(void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1 ;
-(CFRunLoopRef)_debuggerRunLoop;
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(JSValue *)exception;
-(void)_setDebuggerRunLoop:(CFRunLoopRef)arg1 ;
-(void)_setRemoteInspectionEnabled:(BOOL)arg1 ;
-(id)evaluateScript:(id)arg1 withSourceURL:(id)arg2 ;
-(JSValue *)globalObject;
-(JSVirtualMachine *)virtualMachine;
-(void)setException:(JSValue *)arg1 ;
-(OpaqueJSContextRef)JSGlobalContextRef;
-(id)evaluateScript:(id)arg1 ;
-(void)setExceptionHandler:(id)arg1 ;
-(id)initWithVirtualMachine:(id)arg1 ;
@end

