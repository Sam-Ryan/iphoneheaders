/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PAStackshotTask;

@interface PAStackshotThread : NSObject {

	thread_snapshot* thread_snap;
	PAStackshotTask* _task;
	const void* _kernelFrames;
	const void* _userFrames;
	unsigned long long _kernelFrameSize;
	unsigned long long _userFrameSize;
	unsigned long long _bytesUsed;

}

@property (readonly) BOOL isFromMicrostackshot; 
-(id)initWithTask:(id)arg1 ;
-(BOOL)hasDispatchQueue;
-(BOOL)isFromMicrostackshot;
-(const void*)firstFrame;
-(void)_calculateOffsets;
-(id)frameIterator;
-(unsigned long long)_frameSize:(BOOL)arg1 ;
-(BOOL)isDarwinBG;
-(unsigned)powerstatsFlags;
-(unsigned long long)kernelFrameSize;
-(unsigned long long)userFrameSize;
-(BOOL)hasKernelContinuation;
-(unsigned long long)dispatchQueueId;
-(unsigned long long)kernelFramesOffsetFromHeaderStart;
-(unsigned long long)userFramesOffsetFromHeaderStart;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(unsigned long long)bytesUsedInBuffer;
@end

