/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTTableMergeRangeProviding <NSObject>
@required
-(TSUColumnRowRect*)expandCellRangeToCoverMergedCells:(TSUColumnRowRect)arg1;
-(id)expandCellRegionToCoverMergedCells:(id)arg1;
-(id)allMergeRanges;
-(id)mergeRangesForCellRange:(TSUColumnRowRect)arg1;
-(id)mergeRangesForCellRegion:(id)arg1;

@end
