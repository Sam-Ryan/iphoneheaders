/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VKDispatch : NSObject {

	NSObject*<OS_dispatch_queue> _homeQueue;
	NSObject*<OS_dispatch_queue> _layoutQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_queue> _layoutWorkerQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> homeQueue;                      //@synthesize homeQueue=_homeQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> layoutQueue;                    //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue;                    //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> layoutWorkerQueue;              //@synthesize layoutWorkerQueue=_layoutWorkerQueue - In the implementation block
+(id)tileDecodeQueue;
+(id)preemptiveLoadQueue;
+(id)defaultDispatch;
+(id)iconRenderQueue;
+(id)textureManagerRootQueue;
+(id)tileDecodeStylingQueue;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)homeQueue;
-(NSObject*<OS_dispatch_queue>)layoutQueue;
-(id)initWithHomeQueue:(id)arg1 ;
-(id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3 layoutWorkerQueue:(id)arg4 ;
-(id)_newLayoutQueue:(const char*)arg1 ;
-(id)_newLayoutWorkerQueue:(const char*)arg1 ;
-(id)_newRenderQueue:(const char*)arg1 ;
-(NSObject*<OS_dispatch_queue>)layoutWorkerQueue;
-(NSObject*<OS_dispatch_queue>)renderQueue;
@end

