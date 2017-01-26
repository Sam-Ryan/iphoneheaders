/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType; 
@property (readonly) double numberValue; 
@property (copy,readonly) NSString * stringValue; 
@property (readonly) BOOL booleanValue; 
@property (readonly) DOMNode * singleNodeValue; 
@property (readonly) BOOL invalidIteratorState; 
@property (readonly) unsigned snapshotLength; 
-(DOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(unsigned)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)stringValue;
-(double)numberValue;
-(unsigned short)resultType;
-(BOOL)booleanValue;
-(void)finalize;
@end

