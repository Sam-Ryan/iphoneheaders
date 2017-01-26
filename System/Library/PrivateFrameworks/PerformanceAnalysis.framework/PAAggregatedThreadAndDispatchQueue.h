/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PAAggregatedStack.h>

@class PAAggregatedProcessInstance, NSMutableArray, PAProcessInstanceAggregator, NSString;

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack> {

	PAAggregatedProcessInstance* _aggregatedTask;
	NSMutableArray* _contiguousThreadArrays;
	int _minPriority;
	int _maxPriority;
	int _minBasePriority;
	int _maxBasePriority;
	unsigned long long _dispatchQueueId;
	unsigned long long _threadId;
	unsigned long long _cpuTimeNsCached;

}

@property (readonly) PAAggregatedProcessInstance * aggregatedTask;              //@synthesize aggregatedTask=_aggregatedTask - In the implementation block
@property (readonly) PAProcessInstanceAggregator * aggregator; 
@property (readonly) unsigned long long firstTimestampIndex; 
@property (readonly) unsigned long long lastTimestampIndex; 
@property (assign) unsigned long long dispatchQueueId;                          //@synthesize dispatchQueueId=_dispatchQueueId - In the implementation block
@property (assign) unsigned long long threadId;                                 //@synthesize threadId=_threadId - In the implementation block
@property (assign) int minPriority;                                             //@synthesize minPriority=_minPriority - In the implementation block
@property (assign) int maxPriority;                                             //@synthesize maxPriority=_maxPriority - In the implementation block
@property (assign) int minBasePriority;                                         //@synthesize minBasePriority=_minBasePriority - In the implementation block
@property (assign) int maxBasePriority;                                         //@synthesize maxBasePriority=_maxBasePriority - In the implementation block
@property (readonly) BOOL isMainThread; 
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) BOOL isIdleWorkQueueThread; 
@property (readonly) NSMutableArray * contiguousThreadArrays; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(long long)compare:(id)arg1 ;
-(BOOL)isMainThread;
-(unsigned long long)dispatchQueueId;
-(id)sampleStore;
-(void)printHeaderToStream:(_sFILE*)arg1 ;
-(void)printToStream:(_sFILE*)arg1 ;
-(PAProcessInstanceAggregator *)aggregator;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3 ;
-(unsigned long long)threadId;
-(unsigned long long)firstTimestampIndex;
-(BOOL)isProcessorIdleThread;
-(unsigned long long)cpuTimeNs;
-(unsigned long long)lastTimestampIndex;
-(BOOL)isIdleWorkQueueThread;
-(PAAggregatedProcessInstance *)aggregatedTask;
-(NSMutableArray *)contiguousThreadArrays;
-(int)minPriority;
-(void)setMinPriority:(int)arg1 ;
-(int)maxPriority;
-(void)setMaxPriority:(int)arg1 ;
-(int)minBasePriority;
-(void)setMinBasePriority:(int)arg1 ;
-(int)maxBasePriority;
-(void)setMaxBasePriority:(int)arg1 ;
-(unsigned long long)numMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned long long)arg1 ;
-(id)copyDescriptionForSampleFrame:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)printHeavyStacksToStream:(_sFILE*)arg1 onlyPrintHeaviest:(BOOL)arg2 ;
-(BOOL)isSingleStack;
-(id)copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned long long)arg1 ;
-(void)printStackToStream:(_sFILE*)arg1 ;
-(id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2 ;
-(void)setDispatchQueueId:(unsigned long long)arg1 ;
-(void)setThreadId:(unsigned long long)arg1 ;
@end

