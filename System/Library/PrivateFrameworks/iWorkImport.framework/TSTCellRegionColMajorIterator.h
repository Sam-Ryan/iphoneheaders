/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellRegionIterating.h>

@class NSString;

@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating> {

	set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> >* mCellRangeSet;
	SCD_Struct_TS315 mCellID;
	TSUColumnRowRect mBoundingCellRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_TS315)getNext;
-(id)initWithCellRegion:(id)arg1 ;
-(void)dealloc;
-(void)terminate;
@end

