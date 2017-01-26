/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject {

	unsigned mOffset;
	unsigned mCount;
	double* mCoordinates;
	double mAverage;
	NSMutableIndexSet* mVisibleIndices;
	BOOL mLayoutDirectionIsLeftToRight;
	double mTableWidth;

}
-(void)hasRightToLeftOrderingWithWidth:(double)arg1 ;
-(id)initWithCount:(unsigned)arg1 atOffset:(unsigned)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

