/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class TSTTableStyle, TSTCellStyle, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration> {

	unsigned long long mPresetIndex;
	TSTTableStyle* mTableStyle;
	TSTCellStyle* mHeaderRowCellStyle;
	TSTCellStyle* mHeaderColumnCellStyle;
	TSTCellStyle* mFooterRowCellStyle;
	TSTCellStyle* mBodyCellStyle;
	TSWPParagraphStyle* mHeaderRowTextStyle;
	TSWPParagraphStyle* mHeaderColumnTextStyle;
	TSWPParagraphStyle* mFooterRowTextStyle;
	TSWPParagraphStyle* mBodyTextStyle;
	TSWPParagraphStyle* mTableNameStyle;
	TSWPShapeStyle* mTableNameShapeStyle;

}

@property (nonatomic,retain) TSTTableStyle * tableStyle; 
@property (nonatomic,readonly) TSTCellStyle * bodyCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerColumnCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * footerRowCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerRowCellStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * bodyTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerColumnTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * footerRowTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerRowTextStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * tableNameStyle; 
@property (nonatomic,retain) TSWPShapeStyle * tableNameShapeStyle; 
@property (assign,nonatomic) unsigned long long presetIndex; 
+(id)tableNameStyleIDForPreset:(unsigned long long)arg1 ;
+(id)defaultTableNameShapeStyleWithContext:(id)arg1 ;
+(id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1 ;
+(id)networkFromStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2 ;
+(id)networkFromTableModel:(id)arg1 ;
+(id)networkWithContext:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4 ;
+(id)createStylesInStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4 ;
+(id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2 ;
+(id)identifiersForPresetIndex:(unsigned long long)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 context:(id)arg2 ;
-(void)setStylesFromTableModel:(id)arg1 ;
-(unsigned long long)presetIndex;
-(void)setPresetIndex:(unsigned long long)arg1 ;
-(void)setTableStyle:(TSTTableStyle *)arg1 ;
-(void)setCellStyle:(id)arg1 forTableArea:(unsigned)arg2 ;
-(void)setTextStyle:(id)arg1 forTableArea:(unsigned)arg2 ;
-(void)setTableNameStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setTableNameShapeStyle:(TSWPShapeStyle *)arg1 ;
-(TSTCellStyle *)bodyCellStyle;
-(TSTCellStyle *)headerColumnCellStyle;
-(TSTCellStyle *)footerRowCellStyle;
-(TSTCellStyle *)headerRowCellStyle;
-(TSWPParagraphStyle *)headerColumnTextStyle;
-(TSWPParagraphStyle *)footerRowTextStyle;
-(TSWPParagraphStyle *)headerRowTextStyle;
-(TSWPParagraphStyle *)tableNameStyle;
-(TSWPShapeStyle *)tableNameShapeStyle;
-(void)setBodyCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderColumnCellStyle:(TSTCellStyle *)arg1 ;
-(void)setFooterRowCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderRowCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderColumnTextStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setFooterRowTextStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setHeaderRowTextStyle:(TSWPParagraphStyle *)arg1 ;
-(id)initWithContext:(id)arg1 fromArray:(id)arg2 presetIndex:(unsigned long long)arg3 ;
-(BOOL)stylesInStylesheet:(id)arg1 ;
-(id)cellStyleForTableArea:(unsigned)arg1 ;
-(id)textStyleForTableArea:(unsigned)arg1 ;
-(id)styleArray;
-(id)dictionaryWithPreset:(unsigned long long)arg1 ;
-(id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS54*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(BOOL)valid;
-(TSTTableStyle *)tableStyle;
-(void)setBodyTextStyle:(TSWPParagraphStyle *)arg1 ;
-(TSWPParagraphStyle *)bodyTextStyle;
@end

