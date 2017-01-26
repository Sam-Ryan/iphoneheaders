/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@interface DOMTouch : DOMObject

@property (readonly) id<DOMEventTarget> target; 
@property (readonly) unsigned identifier; 
@property (readonly) int clientX; 
@property (readonly) int clientY; 
@property (readonly) int pageX; 
@property (readonly) int pageY; 
@property (readonly) int screenX; 
@property (readonly) int screenY; 
-(int)screenX;
-(int)screenY;
-(int)clientX;
-(int)clientY;
-(int)pageX;
-(int)pageY;
-(void)dealloc;
-(unsigned)identifier;
-(double)force;
-(id<DOMEventTarget>)target;
-(void)finalize;
@end

