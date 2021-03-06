/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <VectorKit/VectorKit-Structs.h>
@class VKWorld, NSMutableArray, NSObject, NSArray;

@interface VKModelObject : NSObject {

	VKWorld* _world;
	VKModelObject* _supermodel;
	NSMutableArray* _submodels;
	BOOL _active;
	unsigned _needsLayout;
	unsigned _needsDisplay;
	NSObject*<OS_dispatch_semaphore> _drawReady;
	map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > >* _commandBuffers;
	CommandBufferIdSet* _supportedPassIds;

}

@property (assign,nonatomic) VKWorld * world;                                            //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) NSArray * submodels;                                      //@synthesize submodels=_submodels - In the implementation block
@property (nonatomic,readonly) VKModelObject * supermodel;                               //@synthesize supermodel=_supermodel - In the implementation block
@property (nonatomic,readonly) shared_ptr<gss::StyleManager>* styleManager; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                //@synthesize active=_active - In the implementation block
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setNeedsLayout;
-(id)init;
-(BOOL)isActive;
-(void)reset;
-(void)setActive:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)addSubmodel:(id)arg1 ;
-(BOOL)shouldLayoutWithoutStyleManager;
-(void)setSupermodel:(VKModelObject *)arg1 ;
-(void)willMoveToSupermodel:(id)arg1 ;
-(void)clearCommandBuffers;
-(void)lockCommandBuffers:(RenderQueue*)arg1 ;
-(void)didRemoveFromSuperModel;
-(void)unLockCommandBuffers:(RenderQueue*)arg1 ;
-(void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 dispatchQueue:(id)arg4 ;
-(VKWorld *)world;
-(VKModelObject *)supermodel;
-(NSArray *)submodels;
-(const CommandBufferIdSet*)supportedRenderPasses;
-(void)removeSubmodel:(id)arg1 ;
-(void)_removeSubmodel:(id)arg1 ;
-(void)setWorld:(VKWorld *)arg1 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)didMoveToSupermodel;
-(void)removeFromSupermodel;
-(void)setSupportedPasses:(const CommandBufferIdSet*)arg1 ;
-(void)runAnimation:(id)arg1 ;
@end

