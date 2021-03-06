/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class NSString, MTLStructType;

@interface MTLArgument : NSObject

@property (readonly) NSString * name; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long access; 
@property (readonly) unsigned long long index; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long bufferAlignment; 
@property (readonly) unsigned long long bufferDataSize; 
@property (readonly) unsigned long long bufferDataType; 
@property (readonly) MTLStructType * bufferStructType; 
@property (readonly) unsigned long long threadgroupMemoryAlignment; 
@property (readonly) unsigned long long threadgroupMemoryDataSize; 
@property (readonly) unsigned long long textureType; 
@property (readonly) unsigned long long textureDataType; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
@end

