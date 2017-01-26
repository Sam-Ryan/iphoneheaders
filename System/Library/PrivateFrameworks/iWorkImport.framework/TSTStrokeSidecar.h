/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTCustomStrokeProviding.h>

@class NSPointerArray, NSString;

@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding> {

	int _maxOrder;
	NSPointerArray* _leftColumnStrokes;
	NSPointerArray* _rightColumnStrokes;
	NSPointerArray* _topRowStrokes;
	NSPointerArray* _bottomRowStrokes;

}

@property (assign,nonatomic) int maxOrder;                                     //@synthesize maxOrder=_maxOrder - In the implementation block
@property (nonatomic,retain) NSPointerArray * leftColumnStrokes;               //@synthesize leftColumnStrokes=_leftColumnStrokes - In the implementation block
@property (nonatomic,retain) NSPointerArray * rightColumnStrokes;              //@synthesize rightColumnStrokes=_rightColumnStrokes - In the implementation block
@property (nonatomic,retain) NSPointerArray * topRowStrokes;                   //@synthesize topRowStrokes=_topRowStrokes - In the implementation block
@property (nonatomic,retain) NSPointerArray * bottomRowStrokes;                //@synthesize bottomRowStrokes=_bottomRowStrokes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initForUpgradeWithTableModel:(id)arg1 ;
-(void)setCellBorder:(id)arg1 atCellID:(SCD_Struct_TS315)arg2 ;
-(void)flattenStrokeOrder;
-(id)cellBorderAtCellID:(SCD_Struct_TS315)arg1 ;
-(void)setBordersWithCellMap:(id)arg1 ;
-(void)insertRows:(NSRange)arg1 ;
-(void)insertColumns:(NSRange)arg1 ;
-(void)removeRows:(NSRange)arg1 ;
-(void)removeColumns:(NSRange)arg1 ;
-(void)moveRowIndexRange:(NSRange)arg1 toIndex:(unsigned short)arg2 ;
-(void)moveColumnIndexRange:(NSRange)arg1 toIndex:(unsigned char)arg2 ;
-(void)swapRowAtIndex:(unsigned short)arg1 withRowAtIndex:(unsigned short)arg2 ;
-(int)maxOrder;
-(void)setStroke:(id)arg1 forTopOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(TSTSimpleRange)arg4 ;
-(void)setStroke:(id)arg1 forBottomOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(TSTSimpleRange)arg4 ;
-(void)setStroke:(id)arg1 forLeftOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(TSTSimpleRange)arg4 ;
-(void)setStroke:(id)arg1 forRightOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(TSTSimpleRange)arg4 ;
-(id)strokeLayerForLeftSideOfColumn:(unsigned char)arg1 ;
-(id)strokeLayerForRightSideOfColumn:(unsigned char)arg1 ;
-(id)strokeLayerForTopOfRow:(unsigned short)arg1 ;
-(id)strokeLayerForBottomOfRow:(unsigned short)arg1 ;
-(NSPointerArray *)leftColumnStrokes;
-(NSPointerArray *)rightColumnStrokes;
-(NSPointerArray *)topRowStrokes;
-(NSPointerArray *)bottomRowStrokes;
-(void)setLeftStroke:(id)arg1 order:(int)arg2 atCellID:(SCD_Struct_TS315)arg3 ;
-(void)setRightStroke:(id)arg1 order:(int)arg2 atCellID:(SCD_Struct_TS315)arg3 ;
-(void)setTopStroke:(id)arg1 order:(int)arg2 atCellID:(SCD_Struct_TS315)arg3 ;
-(void)setBottomStroke:(id)arg1 order:(int)arg2 atCellID:(SCD_Struct_TS315)arg3 ;
-(void)setMaxOrder:(int)arg1 ;
-(id)p_flattenMajorStrokeLayer:(id)arg1 minorStrokeLayer:(id)arg2 ;
-(void)setLeftColumnStrokes:(NSPointerArray *)arg1 ;
-(void)setRightColumnStrokes:(NSPointerArray *)arg1 ;
-(void)setTopRowStrokes:(NSPointerArray *)arg1 ;
-(void)setBottomRowStrokes:(NSPointerArray *)arg1 ;
@end

