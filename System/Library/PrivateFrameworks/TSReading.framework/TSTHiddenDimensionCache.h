/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, NSIndexSet;

@interface TSTHiddenDimensionCache : NSObject <NSCopying> {

	unsigned long long mCount;
	NSMutableIndexSet* mCachedVisible;
	NSMutableIndexSet* mCachedUserVisible;
	NSMutableIndexSet* mInvalidRanges;
	unsigned long long mMarkIndex;

}

@property (nonatomic,readonly) NSIndexSet * visibleIndices; 
-(id)initWithUserHiddenInformation:(BOOL)arg1 ;
-(BOOL)isIndexHidden:(unsigned long long)arg1 ;
-(BOOL)isIndexUserHidden:(unsigned long long)arg1 ;
-(unsigned long long)numberHiddenIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)numberUserHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)anyHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)anyUserHiddenIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)findPreviousVisibleIndex:(unsigned long long)arg1 ;
-(unsigned long long)findNextVisibleIndex:(unsigned long long)arg1 ;
-(unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(NSIndexSet *)visibleIndices;
-(unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(unsigned long long)arg1 ;
-(void)setMarkIndex:(unsigned long long)arg1 ;
-(void)setAllValuesToZero;
-(void)setAllInvalidValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)moveRangeFrom:(NSRange)arg1 toIndex:(unsigned long long)arg2 ;
-(void)insertRange:(NSRange)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)invalidate:(NSRange)arg1 ;
-(void)deleteRange:(NSRange)arg1 ;
@end

