/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * condition; 
@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) BOOL autoContinue; 
@property (assign,nonatomic) int ignoreCount; 
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(NSString *)condition;
-(void)setCondition:(NSString *)arg1 ;
-(void)setAutoContinue:(BOOL)arg1 ;
-(BOOL)autoContinue;
-(void)setIgnoreCount:(int)arg1 ;
-(int)ignoreCount;
@end

