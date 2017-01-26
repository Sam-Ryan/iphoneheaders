/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHPropertyValueStorageContainer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartStyle, TSCHLegendStyle, NSMutableArray, NSMutableDictionary, TSCHReferenceLineStyle;

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>

@property (nonatomic,retain) TSCHChartStyle * chartStyle; 
@property (nonatomic,retain) TSCHLegendStyle * legendStyle; 
@property (nonatomic,copy) NSMutableArray * valueAxisStyles; 
@property (nonatomic,copy) NSMutableArray * categoryAxisStyles; 
@property (nonatomic,copy) NSMutableArray * seriesThemeStyles; 
@property (nonatomic,copy) NSMutableArray * seriesPrivateStyles; 
@property (nonatomic,copy) NSMutableArray * paragraphStyles; 
@property (nonatomic,copy) NSMutableDictionary * referenceLineStyles; 
@property (nonatomic,retain) TSCHReferenceLineStyle * referenceLineThemeStyle; 
-(id)applyStyleSwapTuple:(id)arg1 ;
-(TSCHChartStyle *)chartStyle;
-(TSCHLegendStyle *)legendStyle;
-(NSMutableArray *)valueAxisStyles;
-(NSMutableArray *)categoryAxisStyles;
-(NSMutableArray *)paragraphStyles;
-(NSMutableArray *)seriesPrivateStyles;
-(NSMutableArray *)seriesThemeStyles;
-(NSMutableDictionary *)referenceLineStyles;
-(TSCHReferenceLineStyle *)referenceLineThemeStyle;
-(BOOL)otherStateIsEquivalent:(id)arg1 ;
-(void)setChartStyle:(TSCHChartStyle *)arg1 ;
-(void)setLegendStyle:(TSCHLegendStyle *)arg1 ;
-(void)setValueAxisStyles:(NSMutableArray *)arg1 ;
-(void)setCategoryAxisStyles:(NSMutableArray *)arg1 ;
-(void)setSeriesThemeStyles:(NSMutableArray *)arg1 ;
-(void)setSeriesPrivateStyles:(NSMutableArray *)arg1 ;
-(void)setParagraphStyles:(NSMutableArray *)arg1 ;
-(void)setReferenceLineStyles:(NSMutableDictionary *)arg1 ;
-(void)setReferenceLineThemeStyle:(TSCHReferenceLineStyle *)arg1 ;
-(id)allStyles;
-(id)usesOfParagraphStyleProperties;
-(id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(BOOL)arg2 ;
-(id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)arg1 ;
-(BOOL)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(BOOL)arg2 ;
-(id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)arg1 ;
-(id)stateByReducingSeriesPrivateStyles;
-(id)stateByReducingReferenceLineStyles;
-(id)semanticTagToStyleMap;
-(BOOL)paragraphStyleIndexesAreValid;
-(void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2 ;
-(id)stateByExpandingForSeriesCount:(unsigned long long)arg1 andReferenceLineCount:(unsigned long long)arg2 ;
-(id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
-(id)styleToSemanticTagsMap;
-(id)semanticUsagesToParagraphStyleMap;
-(void)setStyle:(id)arg1 withSemanticTag:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

