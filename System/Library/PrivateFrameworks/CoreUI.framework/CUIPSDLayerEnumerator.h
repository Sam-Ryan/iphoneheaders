/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {

	CUIPSDLayerGroupRef* _layerGroup;
	unsigned _currentIndex;

}
+(id)enumeratorWithPSDLayerGroup:(id)arg1 ;
+(id)enumeratorWithPSDImage:(id)arg1 ;
-(id)initWithPSDLayerGroup:(id)arg1 ;
-(id)initWithPSDImage:(id)arg1 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
@end
