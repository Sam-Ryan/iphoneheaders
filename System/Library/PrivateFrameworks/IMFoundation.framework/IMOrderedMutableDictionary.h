/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IMDoubleLinkedList;

@interface IMOrderedMutableDictionary : NSObject {

	NSMutableDictionary* _dictionary;
	IMDoubleLinkedList* _linkedList;

}
-(void)dealloc;
-(id)init;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(void)removeOrderedObjectForKey:(id)arg1 ;
-(id)orderedObjects;
-(BOOL)containsOrderedObject:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
@end

