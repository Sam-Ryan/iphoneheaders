/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DVectorDataBuffer.h>

@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer {

	vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > >* mContainer;

}

@property (nonatomic,readonly) vector<TSCH3D::PODType<unsigned char>* container; 
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)elementsAtIndices:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)data;
-(vector<TSCH3D::PODType<unsigned char>*)container;
-(void)clear;
-(unsigned long long)components;
-(int)componentType;
@end

