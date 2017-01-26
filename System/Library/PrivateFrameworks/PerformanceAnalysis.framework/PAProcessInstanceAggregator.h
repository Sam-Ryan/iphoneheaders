/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator {

	unsigned long long _timestampsDisplayOffset;
	unsigned long long _startingTSDSIndex;
	NSString* _headerNote;
	unsigned long long _stackshotFrameAddress;
	unsigned long long _idleWorkQueueFrameAddress;
	unsigned long long _timestampIndexWhenTransitionedToSamplingAllProcesses;

}

@property (copy) NSString * headerNote;                                                                    //@synthesize headerNote=_headerNote - In the implementation block
@property (assign) BOOL printSpinSignatureStack; 
@property (assign) BOOL printHeavyStacks; 
@property (readonly) BOOL hasTargetProcess; 
@property (assign) unsigned long long stackshotFrameAddress;                                               //@synthesize stackshotFrameAddress=_stackshotFrameAddress - In the implementation block
@property (assign) unsigned long long idleWorkQueueFrameAddress;                                           //@synthesize idleWorkQueueFrameAddress=_idleWorkQueueFrameAddress - In the implementation block
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses;              //@synthesize timestampIndexWhenTransitionedToSamplingAllProcesses=_timestampIndexWhenTransitionedToSamplingAllProcesses - In the implementation block
-(void)dealloc;
-(void)setSamples:(id)arg1 ;
-(BOOL)printSpinSignatureStack;
-(void)setPrintSpinSignatureStack:(BOOL)arg1 ;
-(BOOL)printHeavyStacks;
-(void)setPrintHeavyStacks:(BOOL)arg1 ;
-(void)printHeaderToStream:(_sFILE*)arg1 ;
-(id)sortedTasks;
-(void)printFooterToStream:(_sFILE*)arg1 ;
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)initWithSampleStore:(id)arg1 ;
-(id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(BOOL)hasTargetProcess;
-(int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1 ;
-(unsigned long long)timestampIndexWhenTransitionedToSamplingAllProcesses;
-(id)kernelSampleTaskAtTimestampIndex:(unsigned long long)arg1 ;
-(unsigned long long)stackshotFrameAddress;
-(void)setStackshotFrameAddress:(unsigned long long)arg1 ;
-(unsigned long long)idleWorkQueueFrameAddress;
-(void)setIdleWorkQueueFrameAddress:(unsigned long long)arg1 ;
-(unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1 ;
-(void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(NSString *)headerNote;
-(void)setHeaderNote:(NSString *)arg1 ;
@end

