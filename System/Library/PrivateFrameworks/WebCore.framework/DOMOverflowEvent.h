/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient; 
@property (readonly) BOOL horizontalOverflow; 
@property (readonly) BOOL verticalOverflow; 
-(unsigned short)orient;
-(BOOL)horizontalOverflow;
-(BOOL)verticalOverflow;
-(void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(BOOL)arg2 verticalOverflow:(BOOL)arg3 ;
@end

