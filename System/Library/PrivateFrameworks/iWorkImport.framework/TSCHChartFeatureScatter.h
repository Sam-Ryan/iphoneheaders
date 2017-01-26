/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCHChartFeature.h>

@interface TSCHChartFeatureScatter : TSCHChartFeature
-(id)supportedAxisScales;
-(unsigned long long)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(int)arg2 ;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)userInterfaceName;
-(Class)presetImagerClass;
-(id)supportedSeriesTypes;
-(BOOL)supportsSymbolOverhang;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsCategoryLabelsInChartRangeEditor;
-(BOOL)supportsSharedAndSeparateX;
-(unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1 ;
-(int)representativeGridValueAxisType;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(void)p_initializeAxisIDs;
@end

