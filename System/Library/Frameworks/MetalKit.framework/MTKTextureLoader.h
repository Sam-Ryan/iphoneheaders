/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, MTLDevice;
#import <MetalKit/MetalKit-Structs.h>
@class NSObject;

@interface MTKTextureLoader : NSObject {

	NSObject*<OS_dispatch_queue> _loadQueue;
	NSObject*<OS_dispatch_queue> _uploadQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSObject*<OS_dispatch_semaphore> _loadSemaphore;
	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(void)dealloc;
-(void)_loadData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newTextureWithData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newTextureWithCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_determineFileType:(id)arg1 ;
-(id)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTextureWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTextureWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)device;
@end

