/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSArray, CADisplayLink;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {

	BOOL _holdingBoundsInvalidation;
	BOOL _useInitialLayoutAttributesForRotation;
	BOOL _isResting;
	BOOL _easingUp;
	BOOL _shouldDisplayLinkInvalidateLayout;
	BOOL _hasLoadMore;
	double _anchorYPosition;
	NSArray* _layoutAttributes;
	CADisplayLink* _displayLink;
	double _prevTimestamp;
	CGPoint _targetContentOffset;
	CGSize _contentSize;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) double anchorYPosition;                                                                                   //@synthesize anchorYPosition=_anchorYPosition - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                                                              //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,getter=isHoldingBoundsInvalidation,nonatomic) BOOL holdingBoundsInvalidation;                                        //@synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation - In the implementation block
@property (assign,getter=isUsingInitialLayoutAttributesForRotation,nonatomic) BOOL useInitialLayoutAttributesForRotation;              //@synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation - In the implementation block
@property (assign,nonatomic) BOOL isResting;                                                                                           //@synthesize isResting=_isResting - In the implementation block
@property (nonatomic,copy) NSArray * layoutAttributes;                                                                                 //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                                              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                                                                                     //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) double prevTimestamp;                                                                                     //@synthesize prevTimestamp=_prevTimestamp - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL easingUp;                                                                                            //@synthesize easingUp=_easingUp - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayLinkInvalidateLayout;                                                                   //@synthesize shouldDisplayLinkInvalidateLayout=_shouldDisplayLinkInvalidateLayout - In the implementation block
@property (assign,nonatomic) BOOL hasLoadMore;                                                                                         //@synthesize hasLoadMore=_hasLoadMore - In the implementation block
+(Class)layoutAttributesClass;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(CGSize)contentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGRect)visibleBounds;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)invalidateDisplayLink;
-(CGSize)collectionViewContentSize;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)setLayoutAttributes:(NSArray *)arg1 ;
-(NSArray *)layoutAttributes;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(BOOL)isResting;
-(void)setUseInitialLayoutAttributesForRotation:(BOOL)arg1 ;
-(void)setAnchorYPosition:(double)arg1 ;
-(void)setHoldingBoundsInvalidation:(BOOL)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(void)setIsResting:(BOOL)arg1 ;
-(void)reduceMotionSettingChanged;
-(BOOL)hasLoadMore;
-(void)prepareLayoutForRotisserieScrolling;
-(void)updateContentSize;
-(double)prevTimestamp;
-(void)setEasingUp:(BOOL)arg1 ;
-(void)setPrevTimestamp:(double)arg1 ;
-(void)setShouldDisplayLinkInvalidateLayout:(BOOL)arg1 ;
-(BOOL)isUsingInitialLayoutAttributesForRotation;
-(BOOL)isHoldingBoundsInvalidation;
-(void)setHasLoadMore:(BOOL)arg1 ;
-(void)updateFrames;
-(double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5 ;
-(double)anchorYPosition;
-(BOOL)shouldDisplayLinkInvalidateLayout;
-(BOOL)easingUp;
@end

