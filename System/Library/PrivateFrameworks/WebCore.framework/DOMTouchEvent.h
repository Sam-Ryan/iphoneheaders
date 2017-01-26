/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@class DOMTouchList;

@interface DOMTouchEvent : DOMUIEvent

@property (readonly) DOMTouchList * touches; 
@property (readonly) DOMTouchList * targetTouches; 
@property (readonly) DOMTouchList * changedTouches; 
@property (readonly) float scale; 
@property (readonly) float rotation; 
@property (readonly) BOOL ctrlKey; 
@property (readonly) BOOL shiftKey; 
@property (readonly) BOOL altKey; 
@property (readonly) BOOL metaKey; 
-(BOOL)ctrlKey;
-(BOOL)shiftKey;
-(BOOL)altKey;
-(BOOL)metaKey;
-(DOMTouchList *)targetTouches;
-(DOMTouchList *)changedTouches;
-(void)initTouchEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 touches:(id)arg14 targetTouches:(id)arg15 changedTouches:(id)arg16 scale:(float)arg17 rotation:(float)arg18 ;
-(float)scale;
-(DOMTouchList *)touches;
-(float)rotation;
@end

