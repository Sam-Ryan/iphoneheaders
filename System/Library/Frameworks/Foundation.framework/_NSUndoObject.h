/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSUndoObject : NSObject {

	_NSUndoObject* next;
	_NSUndoObject* previous;
	id _target;

}
-(BOOL)isEndMark;
-(BOOL)isBeginMark;
-(id)init;
-(void)invoke;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
@end

