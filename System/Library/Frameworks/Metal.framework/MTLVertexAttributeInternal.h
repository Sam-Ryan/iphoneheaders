/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLVertexAttribute.h>

@class NSString;

@interface MTLVertexAttributeInternal : MTLVertexAttribute {

	NSString* _name;
	unsigned long long _attributeIndex;
	unsigned long long _attributeType;
	BOOL _active;

}
-(unsigned long long)attributeType;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 isActive:(BOOL)arg4 ;
-(unsigned long long)attributeIndex;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(id)name;
@end
