/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying> {

	unsigned long long mCellRangesCount;
	TSUColumnRowRect* mCellRanges;
	TSUColumnRowRect mBoundingCellRange;
	unsigned long long mCellCount;
	NSIndexSet* mIntersectingColumnsIndexSet;
	NSIndexSet* mIntersectingRowsIndexSet;
	SCD_Struct_TS315 mFirstCellID;
	SCD_Struct_TS315 mLastCellID;

}

@property (nonatomic,readonly) TSUColumnRowRect boundingCellRange; 
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isRectangle; 
@property (nonatomic,readonly) SCD_Struct_TS315 firstCellID; 
@property (nonatomic,readonly) SCD_Struct_TS315 lastCellID; 
@property (nonatomic,readonly) SCD_Struct_TS315 boundingTopLeftCellID; 
@property (nonatomic,readonly) SCD_Struct_TS315 boundingBottomRightCellID; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingColumns; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingRows; 
+(id)invalidRegion;
+(id)regionFromRange:(TSUColumnRowRect)arg1 ;
+(id)regionFromCellIDVector:(const vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >*)arg1 ;
+(id)regionFromColumnIndexes:(id)arg1 rowIndexes:(id)arg2 ;
+(id)region:(id)arg1 addingRange:(TSUColumnRowRect)arg2 ;
+(id)regionFromMergeList:(const vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >*)arg1 ;
+(id)regionFromMergeMap:(id)arg1 ;
+(id)regionFromColumnIndices:(id)arg1 ;
+(id)region:(id)arg1 addingRegion:(id)arg2 ;
+(id)regionFromRowIndices:(id)arg1 ;
+(id)regionFromCellMap:(id)arg1 withTableInfo:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)region:(id)arg1 subtractingRange:(TSUColumnRowRect)arg2 ;
+(id)region:(id)arg1 intersectingRange:(TSUColumnRowRect)arg2 ;
+(id)unionEveryRangeInRegion:(id)arg1 withRange:(TSUColumnRowRect)arg2 ;
+(id)region:(id)arg1 subtractingRegion:(id)arg2 ;
+(id)region:(id)arg1 intersectingRegion:(id)arg2 ;
+(id)regionFromCellMap:(id)arg1 withTableInfo:(id)arg2 ;
+(id)regionFromCellDiffMap:(id)arg1 withTableInfo:(id)arg2 ;
+(id)regionFromMergeActionArray:(id)arg1 withTableInfo:(id)arg2 ;
+(id)regionFillingColumnsFromRegion:(id)arg1 ;
+(id)regionFillingRowsFromRegion:(id)arg1 ;
+(id)regionFromPropertyListRepresentation:(id)arg1 ;
-(void)fillCellRangeColMajorSet:(set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(void)fillCellRangeRowMajorSet:(set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(void)saveToMessage:(CellRegion*)arg1 ;
-(id)initFromMessage:(const CellRegion*)arg1 ;
-(TSUColumnRowRect)boundingCellRange;
-(BOOL)isRectangle;
-(BOOL)containsCellRange:(TSUColumnRowRect)arg1 ;
-(BOOL)partiallyIntersectsCellRange:(TSUColumnRowRect)arg1 ;
-(id)regionByAddingRange:(TSUColumnRowRect)arg1 ;
-(void)enumerateCellIDsUsingBlock:(/*^block*/id)arg1 ;
-(NSObject*)iterator;
-(id)regionByIntersectingRange:(TSUColumnRowRect)arg1 ;
-(id)regionOffsetBy:(SCD_Struct_TS271)arg1 ;
-(NSObject*)rightToLeftIterator;
-(void)enumerateMissingRowsIntersectingCellRange:(TSUColumnRowRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateRowsIntersectingCellRange:(TSUColumnRowRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateMissingColumnsIntersectingCellRange:(TSUColumnRowRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateColumnsIntersectingCellRange:(TSUColumnRowRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateCellRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)intersectsCellRange:(TSUColumnRowRect)arg1 ;
-(vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >*)cellRanges;
-(BOOL)containsCellID:(SCD_Struct_TS315)arg1 ;
-(id)regionByAddingRegion:(id)arg1 ;
-(id)regionBySubtractingRange:(TSUColumnRowRect)arg1 ;
-(id)regionBySubtractingRegion:(id)arg1 ;
-(BOOL)equalsCellRegion:(id)arg1 ;
-(id)regionByIntersectingColumnIndices:(id)arg1 ;
-(id)regionByIntersectingRowIndices:(id)arg1 ;
-(unsigned short)numberOfIntersectingRows;
-(id)intersectingRowsIndexSet;
-(id)regionByUnioningEveryRangeInRegionWithRange:(TSUColumnRowRect)arg1 ;
-(id)regionByMovingColumnsFromRange:(NSRange)arg1 toIndex:(unsigned char)arg2 ;
-(id)regionByMovingRowsFromRange:(NSRange)arg1 toIndex:(unsigned short)arg2 ;
-(id)intersectingColumnsIndexSet;
-(id)regionByRemovingColumns:(id)arg1 ;
-(id)regionByAddingColumns:(id)arg1 ;
-(id)regionByRemovingRows:(id)arg1 ;
-(id)regionByAddingRows:(id)arg1 ;
-(void)enumerateColumnRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateRowRangesInReverseUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateRowRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateColumnRangesInReverseUsingBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_TS315)suitableAnchor;
-(SCD_Struct_TS315)suitableCursor;
-(SCD_Struct_TS315)firstCellID;
-(SCD_Struct_TS315)lastCellID;
-(BOOL)equalsCellRange:(TSUColumnRowRect)arg1 ;
-(BOOL)containsCellRegion:(id)arg1 ;
-(SCD_Struct_TS315)boundingTopLeftCellID;
-(unsigned short)numberOfIntersectingColumns;
-(void)p_calculateAncillaryInformation;
-(void)p_insertRangeIntoRegion:(TSUColumnRowRect)arg1 ;
-(id)p_copy;
-(void)enumerateCellsInTable:(id)arg1 withFlags:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)p_calculateIntersectingColumns;
-(void)p_calculateIntersectingRows;
-(void)p_calculateUpperLeftAndBottomRightCellIDAndBoundingCellRange;
-(id)regionByIntersectingRegion:(id)arg1 ;
-(id)regionByApplyingRowMapping:(id)arg1 ;
-(id)regionUpToColumnIndex:(unsigned char)arg1 ;
-(id)regionUpToColumnIndexRtoL:(unsigned char)arg1 maxColumnIndex:(unsigned char)arg2 ;
-(id)regionAfterColumnIndex:(unsigned char)arg1 ;
-(id)regionAfterColumnIndexRtoL:(unsigned char)arg1 ;
-(id)regionUpToRowIndex:(unsigned short)arg1 ;
-(id)regionAfterRowIndex:(unsigned short)arg1 ;
-(SCD_Struct_TS315)boundingBottomRightCellID;
-(TSUColumnRowRect)largestRangeContainingCellID:(SCD_Struct_TS315)arg1 ;
-(BOOL)intersectsColumn:(unsigned char)arg1 ;
-(BOOL)intersectsRow:(unsigned short)arg1 ;
-(NSObject*)topToBottomIterator;
-(void)enumerateColumnsInReverseUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateRowsInReverseUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInDirection:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateGridColumnsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateGridRowsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCellsInTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)propertyListRepresentation;
-(void)enumerateColumnsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)cellCount;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
@end

