/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisLayoutItem.h>

@class TSCHChartAxisSeriesLabelsLayoutItem, TSCHChartCategoryAxisLabelsLayoutItem;

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem {

	TSCHChartAxisSeriesLabelsLayoutItem* mSeriesLabels;
	TSCHChartCategoryAxisLabelsLayoutItem* mCategoryLabels;

}

@property (nonatomic,readonly) TSCHChartAxisSeriesLabelsLayoutItem * axisSeriesLabelsLayoutItem; 
@property (nonatomic,readonly) TSCHChartCategoryAxisLabelsLayoutItem * axisCategoryLabelsLayoutItem; 
-(TSCHChartCategoryAxisLabelsLayoutItem *)axisCategoryLabelsLayoutItem;
-(TSCHChartAxisSeriesLabelsLayoutItem *)axisSeriesLabelsLayoutItem;
-(id)renderersWithRep:(id)arg1 ;
-(void)buildSubTree;
-(void)p_layoutLabelsNow;
-(CGRect)protected_layoutSpaceRectForAllLabels;
-(void)dealloc;
@end

