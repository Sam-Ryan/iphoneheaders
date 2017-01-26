/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned long long _max;
	unsigned long long _count;
	unsigned long long _nestingLevel;
	_NSUndoObject* _head;

}
-(id)topUndoObject;
-(void)setMax:(unsigned long long)arg1 ;
-(void)markBegin;
-(BOOL)isDiscardable;
-(id)popUndoObject;
-(void)markEnd;
-(unsigned long long)max;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(BOOL)arg1 ;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)_removeBottom;
-(id)_beginMark;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(BOOL)popAndInvoke;
-(id)groupIdentifier;
-(void)push:(id)arg1 ;
-(unsigned long long)nestingLevel;
@end
