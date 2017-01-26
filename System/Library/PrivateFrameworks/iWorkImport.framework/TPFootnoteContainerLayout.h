/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayout.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPFootnoteMarkProvider.h>

@protocol TSWPFootnoteMarkProvider;
@class TSWPPadding, NSString;

@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider> {

	double _width;
	double _maxFootnoteHeight;
	double _footnoteSpacing;
	BOOL _includeFootnoteSeparatorLine;
	id<TSWPFootnoteMarkProvider> _footnoteMarkProvider;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) double height; 
@property (assign,nonatomic) BOOL includeFootnoteSeparatorLine;                //@synthesize includeFootnoteSeparatorLine=_includeFootnoteSeparatorLine - In the implementation block
@property (nonatomic,readonly) CGRect footnoteSeparatorLineFrame; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(BOOL)shouldProvideSizingGuides;
-(BOOL)textIsVertical;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(double)maxAutoGrowHeightForTextLayout:(id)arg1 ;
-(id)markStringForFootnoteReferenceStorage:(id)arg1 ;
-(void)trimFootnoteLayoutsFromIndex:(unsigned long long)arg1 ;
-(void)setIncludeFootnoteSeparatorLine:(BOOL)arg1 ;
-(void)setFootnoteSpacing:(long long)arg1 ;
-(id)initWithFootnoteMarkProvider:(id)arg1 width:(double)arg2 maxFootnoteHeight:(double)arg3 footnoteSpacing:(double)arg4 ;
-(void)removeFootnoteLayout:(id)arg1 ;
-(void)addFootnoteLayout:(id)arg1 ;
-(void)removeFootnoteLayoutWithInfo:(id)arg1 ;
-(void)removeAllFootnoteLayouts;
-(CGRect)footnoteSeparatorLineFrame;
-(BOOL)includeFootnoteSeparatorLine;
-(BOOL)isEmpty;
-(TSWPPadding *)layoutMargins;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(unsigned long long)columnCount;
-(void)validate;
@end

