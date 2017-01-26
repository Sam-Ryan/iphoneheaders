/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@class DOMNode, NSString;

@interface DOMMutationEvent : DOMEvent

@property (readonly) DOMNode * relatedNode; 
@property (copy,readonly) NSString * prevValue; 
@property (copy,readonly) NSString * newValue; 
@property (copy,readonly) NSString * attrName; 
@property (readonly) unsigned short attrChange; 
-(DOMNode *)relatedNode;
-(NSString *)prevValue;
-(NSString *)attrName;
-(unsigned short)attrChange;
-(void)initMutationEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 relatedNode:(id)arg4 prevValue:(id)arg5 newValue:(id)arg6 attrName:(id)arg7 attrChange:(unsigned short)arg8 ;
-(void)initMutationEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(id)arg7 :(unsigned short)arg8 ;
-(NSString *)newValue;
@end

