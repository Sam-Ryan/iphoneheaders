/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
#import <Metal/Metal-Structs.h>
@class _MTLDevice, NSMutableArray, NSObject, NSString, NSMutableDictionary;

@interface _MTLCommandQueue : NSObject {

	_MTLDevice* _dev;
	NSMutableArray* _pendingQueue;
	NSMutableArray* _submittedQueue;
	opaque_pthread_mutex_t _pendingQueueLock;
	opaque_pthread_mutex_t _submittedQueueLock;
	NSObject*<OS_dispatch_group> _submittedGroup;
	NSObject*<OS_dispatch_queue> _commandQueueDispatch;
	NSObject*<OS_dispatch_source> _commandQueueEventSource;
	NSObject*<OS_dispatch_semaphore> _commandBufferSemaphore;
	NSString* _label;
	int _backgroundTrackingPID;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	BOOL _profilingEnabled;
	/*^block*/id _perfSampleHandlerBlock;
	BOOL _StatEnabled;
	unsigned long long _StatOptions;
	unsigned long long _StatLocations;
	unsigned long long _numRequestedCounters;
	unsigned long long _numInternalSampleCounters;
	NSMutableDictionary* _counterInfo;
	unsigned long long _numCommandBuffers;
	BOOL _executionEnabled;
	BOOL _skipRender;

}

@property (assign) int backgroundTrackingPID;                                                                            //@synthesize backgroundTrackingPID=_backgroundTrackingPID - In the implementation block
@property (readonly) unsigned long long globalTraceObjectID;                                                             //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (assign) BOOL skipRender;                                                                                      //@synthesize skipRender=_skipRender - In the implementation block
@property (assign) BOOL executionEnabled;                                                                                //@synthesize executionEnabled=_executionEnabled - In the implementation block
@property (copy) NSString * label;                                                                                       //@synthesize label=_label - In the implementation block
@property (getter=isProfilingEnabled) BOOL profilingEnabled;                                                             //@synthesize profilingEnabled=_profilingEnabled - In the implementation block
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) BOOL StatEnabled;                                    //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,setter=tatOptions,getter=getStatOptions,nonatomic) unsigned long long StatOptions;                     //@synthesize StatOptions=_StatOptions - In the implementation block
@property (assign,setter=tatLocations,getter=getStatLocations,nonatomic) unsigned long long StatLocations;               //@synthesize StatLocations=_StatLocations - In the implementation block
@property (assign,getter=numRequestedCounters,nonatomic) unsigned long long numRequestedCounters;                        //@synthesize numRequestedCounters=_numRequestedCounters - In the implementation block
@property (assign,getter=numInternalSampleCounters,nonatomic) unsigned long long numInternalSampleCounters;              //@synthesize numInternalSampleCounters=_numInternalSampleCounters - In the implementation block
@property (getter=counterInfo,retain) NSMutableDictionary * counterInfo;                                                 //@synthesize counterInfo=_counterInfo - In the implementation block
@property (assign,nonatomic) unsigned long long numCommandBuffers;                                                       //@synthesize numCommandBuffers=_numCommandBuffers - In the implementation block
-(unsigned long long)globalTraceObjectID;
-(BOOL)isProfilingEnabled;
-(unsigned long long)numCommandBuffers;
-(BOOL)isStatEnabled;
-(unsigned long long)getStatOptions;
-(unsigned long long)getStatLocations;
-(unsigned long long)numRequestedCounters;
-(id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2 ;
-(void)commandBufferDidComplete:(id)arg1 timestamp:(unsigned long long)arg2 error:(unsigned)arg3 ;
-(int)backgroundTrackingPID;
-(void)submitCommandBuffers:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setStatEnabled:(BOOL)arg1 ;
-(void)setCounterInfo:(NSMutableDictionary *)arg1 ;
-(void)setNumRequestedCounters:(unsigned long long)arg1 ;
-(void)setNumInternalSampleCounters:(unsigned long long)arg1 ;
-(unsigned long long)getAndIncrementNumCommandBuffers;
-(unsigned long long)numInternalSampleCounters;
-(void)enqueueCommandBuffer:(id)arg1 ;
-(void)commitCommandBuffer:(id)arg1 wake:(BOOL)arg2 ;
-(BOOL)skipRender;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(void)_submitAvailableCommandBuffers;
-(void)completeCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)StatOptions;
-(unsigned long long)StatLocations;
-(void)availableCounters;
-(void)requestCounters:(id)arg1 ;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(void)setSkipRender:(BOOL)arg1 ;
-(NSMutableDictionary *)counterInfo;
-(void)setNumCommandBuffers:(unsigned long long)arg1 ;
-(BOOL)executionEnabled;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(void)insertDebugCaptureBoundary;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)finish;
-(id)initWithDevice:(id)arg1 ;
@end

