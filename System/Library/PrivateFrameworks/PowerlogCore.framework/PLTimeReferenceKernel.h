/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLTimeReference.h>

@class NSDate;

@interface PLTimeReferenceKernel : PLTimeReference {

	NSDate* _lastSystemTimeRecalibrated;
	NSDate* _lastKernelTimeRecalibrated;

}

@property (retain) NSDate * lastSystemTimeRecalibrated;              //@synthesize lastSystemTimeRecalibrated=_lastSystemTimeRecalibrated - In the implementation block
@property (retain) NSDate * lastKernelTimeRecalibrated;              //@synthesize lastKernelTimeRecalibrated=_lastKernelTimeRecalibrated - In the implementation block
-(id)currentTime;
-(void)initializeOffsetWithEntries:(id)arg1 ;
-(NSDate *)lastSystemTimeRecalibrated;
-(NSDate *)lastKernelTimeRecalibrated;
-(void)setLastSystemTimeRecalibrated:(NSDate *)arg1 ;
-(void)setLastKernelTimeRecalibrated:(NSDate *)arg1 ;
-(double)resolution;
@end

