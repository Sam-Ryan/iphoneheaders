/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MDLVertexDescriptor, NSString, NSArray;

@interface GLKMesh : NSObject {

	NSMutableArray* _submeshes;
	NSMutableArray* _vertexBuffers;
	unsigned long long _vertexCount;
	MDLVertexDescriptor* _vertexDescriptor;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long vertexCount;                      //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) NSArray * vertexBuffers;                             //@synthesize vertexBuffers=_vertexBuffers - In the implementation block
@property (nonatomic,readonly) MDLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * submeshes;                                 //@synthesize submeshes=_submeshes - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
+(void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 error:(id*)arg4 ;
+(id)newMeshesFromAsset:(id)arg1 sourceMeshes:(id*)arg2 error:(id*)arg3 ;
-(NSString *)name;
-(unsigned long long)vertexCount;
-(id)initWithMesh:(id)arg1 error:(id*)arg2 ;
-(MDLVertexDescriptor *)vertexDescriptor;
-(NSArray *)submeshes;
-(NSArray *)vertexBuffers;
@end

