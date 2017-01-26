/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUTaskMemoryCache : NSObject {

	mapped_memory_tRef _memoryRegions;
	unsigned _task;
	BOOL _taskIs64Bit;
	BOOL _stopped;
	BOOL _shouldTouchPages;

}
+(BOOL)taskIs64Bit:(unsigned)arg1 ;
+(id)taskMemoryCacheForTask:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 ;
-(BOOL)copyRange:(VMURange)arg1 to:(void*)arg2 ;
-(int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void*)arg3 ;
-(int)startPeeking;
-(void)flushMemoryCache;
-(int)stopPeeking;
-(int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2 ;
-(void)finalize;
@end

