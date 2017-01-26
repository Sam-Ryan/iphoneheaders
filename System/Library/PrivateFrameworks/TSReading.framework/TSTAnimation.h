/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying> {

	TSTLayout* mLayout;
	int mKind;
	SCD_Struct_TS138* mCellRanges;
	unsigned long long mCellRangeCount;
	unsigned long long mStageCount;
	unsigned long long mStage;
	BOOL mFinal;
	BOOL mByColumn;
	BOOL mByRow;
	BOOL mByCell;
	BOOL mByContent;
	BOOL mByCellRange;
	BOOL mByMissingCellRange;
	BOOL mReverse;
	BOOL mShowsTableChrome;
	BOOL mShowsOverlayLayers;
	BOOL mExpandBackgroundFill;
	BOOL mDrawsBlackAndWhite;

}

@property (readonly) unsigned long long stageCount; 
@property (readonly) unsigned long long stage; 
@property (readonly) BOOL final; 
@property (assign) BOOL showsTableChrome; 
@property (assign) BOOL showsOverlayLayers; 
@property (assign) BOOL expandBackgroundFill; 
@property (assign) BOOL drawsBlackAndWhite; 
@property (readonly) unsigned long long cellRangeCount; 
@property (readonly) BOOL drawTableName; 
@property (readonly) BOOL drawTableBackground; 
@property (readonly) BOOL drawCellBackground; 
@property (readonly) BOOL drawCellContent; 
@property (readonly) BOOL clipStrokes; 
@property (readonly) BOOL drawStrokes; 
@property (readonly) BOOL enabled; 
+(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
+(id)newAnimationWithLayout:(id)arg1 andCellRange:(SCD_Struct_TS138)arg2 ;
+(id)textureDeliveryStylesLocalized:(BOOL)arg1 ;
+(id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2 ;
+(unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 andTable:(id)arg2 ;
+(BOOL)deliveryStyleSupportedForExport:(unsigned long long)arg1 ;
-(BOOL)drawTableName;
-(unsigned long long)cellRangeCount;
-(SCD_Struct_TS138)cellRangeAtIndex:(unsigned long long)arg1 ;
-(BOOL)drawTableBackground;
-(BOOL)drawCellBackground;
-(BOOL)expandBackgroundFill;
-(BOOL)drawCellContent;
-(BOOL)drawStrokes;
-(BOOL)drawsBlackAndWhite;
-(void)addCellRange:(SCD_Struct_TS138)arg1 ;
-(void)setStage:(unsigned long long)arg1 andFinal:(BOOL)arg2 ;
-(void)clearCellRanges;
-(BOOL)clipStrokes;
-(unsigned long long)stageCount;
-(BOOL)showsTableChrome;
-(void)setShowsTableChrome:(BOOL)arg1 ;
-(BOOL)showsOverlayLayers;
-(void)setShowsOverlayLayers:(BOOL)arg1 ;
-(void)setExpandBackgroundFill:(BOOL)arg1 ;
-(void)setDrawsBlackAndWhite:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)stage;
-(BOOL)final;
@end

