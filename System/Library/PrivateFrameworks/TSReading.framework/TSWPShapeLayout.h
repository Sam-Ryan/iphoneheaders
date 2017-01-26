/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeLayout.h>
#import <TSReading/TSWPLayoutParent.h>
#import <TSReading/TSWPColumnMetrics.h>
#import <TSReading/TSWPStorageObserver.h>

@protocol TSWPShapeLayoutDelegate;
@class TSWPPadding, TSWPLayout, TSDWrapPolygon;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver> {

	TSWPLayout* _containedLayout;
	TSDWrapPolygon* _cachedInteriorWrapPolygon;
	id<TSWPShapeLayoutDelegate> _delegate;
	BOOL _observingStorage;

}

@property (nonatomic,readonly) TSWPLayout * containedLayout;                //@synthesize containedLayout=_containedLayout - In the implementation block
@property (nonatomic,readonly) BOOL autosizes; 
@property (assign) id<TSWPShapeLayoutDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(id)childSearchTargets;
-(BOOL)supportsRotation;
-(void)processChangedProperty:(int)arg1 ;
-(void)updateChildrenFromInfo;
-(id)dependentLayouts;
-(void)invalidateSize;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(id)interiorWrapPath;
-(id)pathSource;
-(CGAffineTransform)computeLayoutTransform;
-(BOOL)isInvisibleAutosizingShape;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1 ;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg1 ;
-(BOOL)allowsLastLineTruncation:(id)arg1 ;
-(unsigned)maxLineCountForTextLayout:(id)arg1 ;
-(CGSize)adjustedInsets;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(id)textWrapper;
-(id)interiorClippingPath;
-(TSWPLayout *)containedLayout;
-(void)createContainedLayoutForEditing;
-(void)createContainedLayoutForInstructionalText;
-(BOOL)autosizes;
-(id)instructionalStorageForContainedStorage:(id)arg1 storageKind:(int)arg2 ;
-(void)destroyContainedLayoutForInstructionalText;
-(id)interiorWrapPolygon;
-(CGAffineTransform)autosizedTransform;
-(CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 ;
-(CGPoint)autosizePositionOffsetForFixedWidth:(BOOL)arg1 height:(BOOL)arg2 ;
-(unsigned)cropLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 ;
-(CGPoint)autosizePositionOffset;
-(id)initWithInfo:(id)arg1 ;
-(void)setDelegate:(id<TSWPShapeLayoutDelegate>)arg1 ;
-(void)dealloc;
-(id<TSWPShapeLayoutDelegate>)delegate;
-(TSWPPadding *)layoutMargins;
-(void)setGeometry:(id)arg1 ;
-(unsigned long long)columnCount;
-(void)setChildren:(id)arg1 ;
-(void)invalidatePath;
-(void)addChild:(id)arg1 ;
-(id)children;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
@end

