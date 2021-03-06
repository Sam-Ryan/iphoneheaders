/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/ASTGestureRecorderGradientView.h>

@protocol ASTGestureRecorderViewDelegate;
@class NSMutableArray, NSMutableDictionary, ASTGestureRecorderStyleProvider, UIView, UIColor, UIAccessibilityCustomAction;

@interface ASTGestureRecorderView : ASTGestureRecorderGradientView {

	double _freezeDryStartTime;
	double _freezeDryDrawPercentage;
	double _freezeDryStartIndex;
	NSMutableArray* _freezedDynamicPaths;
	NSMutableDictionary* _activeLayers;
	NSMutableDictionary* _instantReplayViews;
	NSMutableArray* _staticLayers;
	NSMutableArray* _transitionLayers;
	BOOL _replayMode;
	id<ASTGestureRecorderViewDelegate> _dataSource;
	ASTGestureRecorderStyleProvider* _styleProvider;
	UIView* _dynamicFingerPathsContainerView;
	UIColor* _dynamicFingerPathBackgroundGradientPatternColor;
	UIAccessibilityCustomAction* _hideControlsAction;
	UIAccessibilityCustomAction* _showControlsAction;
	NSMutableDictionary* _previouslyActiveLayersByInstantReplayFingerIndex;
	CGRect _constrainedBoundsForDrawing;

}

@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                                     //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) id<ASTGestureRecorderViewDelegate> dataSource;                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL replayMode;                                                                     //@synthesize replayMode=_replayMode - In the implementation block
@property (nonatomic,retain) UIView * dynamicFingerPathsContainerView;                                            //@synthesize dynamicFingerPathsContainerView=_dynamicFingerPathsContainerView - In the implementation block
@property (nonatomic,retain) UIColor * dynamicFingerPathBackgroundGradientPatternColor;                           //@synthesize dynamicFingerPathBackgroundGradientPatternColor=_dynamicFingerPathBackgroundGradientPatternColor - In the implementation block
@property (assign,nonatomic) CGRect constrainedBoundsForDrawing;                                                  //@synthesize constrainedBoundsForDrawing=_constrainedBoundsForDrawing - In the implementation block
@property (nonatomic,retain) UIAccessibilityCustomAction * hideControlsAction;                                    //@synthesize hideControlsAction=_hideControlsAction - In the implementation block
@property (nonatomic,retain) UIAccessibilityCustomAction * showControlsAction;                                    //@synthesize showControlsAction=_showControlsAction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * previouslyActiveLayersByInstantReplayFingerIndex;              //@synthesize previouslyActiveLayersByInstantReplayFingerIndex=_previouslyActiveLayersByInstantReplayFingerIndex - In the implementation block
-(UIAccessibilityCustomAction *)showControlsAction;
-(void)reloadDynamicFingerPathAtIndex:(unsigned long long)arg1 ;
-(void)fingerPathDidChange:(unsigned long long)arg1 ;
-(id)_dynamicFingerPathAtIndex:(unsigned long long)arg1 ;
-(void)insertDynamicFingerPathAtIndex:(unsigned long long)arg1 ;
-(void)finishInstantReplayAtIndex:(unsigned long long)arg1 ;
-(void)clearInstantReplayFingerPaths;
-(void)setHideControlsAction:(UIAccessibilityCustomAction *)arg1 ;
-(UIAccessibilityCustomAction *)hideControlsAction;
-(void)freezeAllDynamicFingerPaths;
-(void)deleteAllFingerPaths;
-(void)setDynamicFingerPathsContainerView:(UIView *)arg1 ;
-(void)_showControls;
-(void)_performTransitionToStaticFingers:(id)arg1 transitionLayers:(id)arg2 hasExistingStaticFingers:(BOOL)arg3 ;
-(void)setReplayMode:(BOOL)arg1 ;
-(void)setShowControlsAction:(UIAccessibilityCustomAction *)arg1 ;
-(UIColor *)dynamicFingerPathBackgroundGradientPatternColor;
-(NSMutableDictionary *)previouslyActiveLayersByInstantReplayFingerIndex;
-(void)setConstrainedBoundsForDrawing:(CGRect)arg1 ;
-(void)hideStaticView;
-(void)setPreviouslyActiveLayersByInstantReplayFingerIndex:(NSMutableDictionary *)arg1 ;
-(void)_hideControls;
-(void)freezeAllDynamicFingerPathsWithInstantReplayOffset:(unsigned long long)arg1 ;
-(BOOL)replayMode;
-(UIView *)dynamicFingerPathsContainerView;
-(CGRect)constrainedBoundsForDrawing;
-(void)setDynamicFingerPathBackgroundGradientPatternColor:(UIColor *)arg1 ;
-(void)updateInstantReplayAtIndex:(unsigned long long)arg1 withPartialPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<ASTGestureRecorderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id<ASTGestureRecorderViewDelegate>)dataSource;
-(void)_commonInit;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityCustomActions;
-(ASTGestureRecorderStyleProvider *)styleProvider;
-(void)setStyleProvider:(ASTGestureRecorderStyleProvider *)arg1 ;
@end

