/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ModelIO/ModelIO-Structs.h>
@class NSMutableArray, NSArray;

@interface MDLScene : NSObject {

	mutex* _sceneMutex;
	vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> >* _sceneObjects;
	vector<MDLLight *, std::__1::allocator<MDLLight *> >* _sceneLights;
	NSMutableArray* _objects;
	int _signature;

}

@property (nonatomic,retain,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)clear;
-(id)raytraceSceneWithCamera:(const RTCamera*)arg1 reflection:(id)arg2 irradiance:(id)arg3 ;
-(int)acquireLockGuard;
-(void)releaseLockGuard:(int)arg1 ;
-(5)hitTestRayFrom:(id)arg1 ;
-(BOOL)castRayFrom:(RTCamera*)arg1 withDirection:(RTIntersectionResult*)arg2 ;
-(NSArray *)objects;
@end

