/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL configurable; 
@property (assign,nonatomic) BOOL enumerable; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (assign,nonatomic) BOOL writable; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * get; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * set; 
@property (assign,nonatomic) BOOL wasThrown; 
@property (assign,nonatomic) BOOL isOwn; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * symbol; 
@property (assign,nonatomic) BOOL nativeGetter; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(RWIProtocolRuntimeRemoteObject *)set;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)symbol;
-(void)setSymbol:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)get;
-(BOOL)writable;
-(void)setConfigurable:(BOOL)arg1 ;
-(void)setEnumerable:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 configurable:(BOOL)arg2 enumerable:(BOOL)arg3 ;
-(void)setWritable:(BOOL)arg1 ;
-(void)setGet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(BOOL)configurable;
-(BOOL)enumerable;
-(void)setWasThrown:(BOOL)arg1 ;
-(BOOL)wasThrown;
-(void)setIsOwn:(BOOL)arg1 ;
-(BOOL)isOwn;
-(void)setNativeGetter:(BOOL)arg1 ;
-(BOOL)nativeGetter;
-(void)setSet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
@end

