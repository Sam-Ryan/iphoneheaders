/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _UIBackdropViewObserver, _UIBackdropViewGraphicsQualityChangeDelegate;
@class NSHashTable, _UIBackdropViewSettings, _UIBackdropEffectView, NSString, UIImage, UIView, CAFilter, NSMutableSet, NSMutableDictionary, UIColor;

@interface _UIBackdropView : UIView {

	BOOL _autosizesToFitSuperview;
	BOOL _computesColorSettings;
	BOOL _appliesOutputSettingsAutomatically;
	BOOL _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
	BOOL _applyingBackdropChanges;
	BOOL _applyingTransition;
	BOOL _requiresTintViews;
	BOOL _wantsColorSettings;
	BOOL _blursBackground;
	BOOL _allowsColorSettingsSuppression;
	BOOL _contentViewAccessed;
	BOOL _contentViewAccessorGuard;
	BOOL _applySettingsAfterLayout;
	BOOL _updateMaskViewsForViewReentrancyGuard;
	BOOL _simulatesMasks;
	BOOL _backdropVisibilitySetOnce;
	BOOL _blurRadiusSetOnce;
	BOOL _disablesOccludedBackdropBlurs;
	BOOL __backdropVisible;
	BOOL __zoomsBack;
	long long _style;
	NSHashTable* _observers;
	id<_UIBackdropViewObserver> _observer;
	double _appliesOutputSettingsAnimationDuration;
	_UIBackdropViewSettings* _inputSettings;
	_UIBackdropViewSettings* _outputSettings;
	_UIBackdropViewSettings* _savedInputSettingsDuringRenderInContext;
	long long _configuration;
	_UIBackdropEffectView* _backdropEffectView;
	NSString* _groupName;
	UIImage* _filterMaskImage;
	UIView* _grayscaleTintView;
	UIImage* _grayscaleTintMaskImage;
	UIView* _colorTintView;
	UIImage* _colorTintMaskImage;
	UIView* _colorBurnTintView;
	UIImage* _colorBurnTintMaskImage;
	CAFilter* _gaussianBlurFilter;
	CAFilter* _colorSaturateFilter;
	CAFilter* _tintFilter;
	CAFilter* _colorOffsetFilter;
	UIView* _contentView;
	UIView* _darkeningTintView;
	UIImage* _darkeningTintMaskImage;
	long long _maskMode;
	NSMutableSet* _partialMaskViews;
	UIView* _grayscaleTintMaskViewContainer;
	NSMutableDictionary* _grayscaleTintMaskViewMap;
	UIView* _colorTintMaskViewContainer;
	NSMutableDictionary* _colorTintMaskViewMap;
	UIView* _colorBurnTintMaskViewContainer;
	NSMutableDictionary* _colorBurnTintMaskViewMap;
	UIView* _darkeningTintMaskViewContainer;
	NSMutableDictionary* _darkeningTintMaskViewMap;
	UIView* _filterMaskViewContainer;
	NSMutableDictionary* _filterMaskViewMap;
	id _computeAndApplySettingsNotificationObserver;
	double _colorMatrixGrayscaleTintLevel;
	double _colorMatrixGrayscaleTintAlpha;
	UIColor* _colorMatrixColorTint;
	double _colorMatrixColorTintAlpha;
	double _previousBackdropStatisticsRed;
	double _previousBackdropStatisticsGreen;
	double _previousBackdropStatisticsBlue;
	double _previousBackdropStatisticsContrast;
	id<_UIBackdropViewGraphicsQualityChangeDelegate> _graphicsQualityChangeDelegate;
	NSString* __blurQuality;
	double __blurRadius;
	double __saturationDeltaFactor;

}

@property (assign,nonatomic) long long style;                                                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL autosizesToFitSuperview;                                                                //@synthesize autosizesToFitSuperview=_autosizesToFitSuperview - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                     //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewObserver> observer;                                                        //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL computesColorSettings;                                                                  //@synthesize computesColorSettings=_computesColorSettings - In the implementation block
@property (assign,nonatomic) BOOL appliesOutputSettingsAutomatically;                                                     //@synthesize appliesOutputSettingsAutomatically=_appliesOutputSettingsAutomatically - In the implementation block
@property (assign,nonatomic) double appliesOutputSettingsAnimationDuration;                                               //@synthesize appliesOutputSettingsAnimationDuration=_appliesOutputSettingsAnimationDuration - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettings;                                                     //@synthesize inputSettings=_inputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettings;                                                    //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * savedInputSettingsDuringRenderInContext;                           //@synthesize savedInputSettingsDuringRenderInContext=_savedInputSettingsDuringRenderInContext - In the implementation block
@property (nonatomic,readonly) UIView * effectView; 
@property (assign,nonatomic) long long configuration;                                                                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;                         //@synthesize appliesOutputSettingsAutomaticallyEnabledComputesColorSettings=_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings - In the implementation block
@property (assign,nonatomic) BOOL applyingBackdropChanges;                                                                //@synthesize applyingBackdropChanges=_applyingBackdropChanges - In the implementation block
@property (assign,nonatomic) BOOL applyingTransition;                                                                     //@synthesize applyingTransition=_applyingTransition - In the implementation block
@property (assign,nonatomic) BOOL requiresTintViews;                                                                      //@synthesize requiresTintViews=_requiresTintViews - In the implementation block
@property (assign,nonatomic) BOOL wantsColorSettings;                                                                     //@synthesize wantsColorSettings=_wantsColorSettings - In the implementation block
@property (assign,nonatomic) BOOL blursBackground;                                                                        //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) BOOL allowsColorSettingsSuppression;                                                         //@synthesize allowsColorSettingsSuppression=_allowsColorSettingsSuppression - In the implementation block
@property (nonatomic,retain) _UIBackdropEffectView * backdropEffectView;                                                  //@synthesize backdropEffectView=_backdropEffectView - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                                          //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) UIImage * filterMaskImage;                                                                   //@synthesize filterMaskImage=_filterMaskImage - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                                                                  //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIImage * grayscaleTintMaskImage;                                                            //@synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                                                                      //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorTintMaskImage;                                                                //@synthesize colorTintMaskImage=_colorTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintView;                                                                  //@synthesize colorBurnTintView=_colorBurnTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorBurnTintMaskImage;                                                            //@synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage - In the implementation block
@property (nonatomic,retain) CAFilter * gaussianBlurFilter;                                                               //@synthesize gaussianBlurFilter=_gaussianBlurFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorSaturateFilter;                                                              //@synthesize colorSaturateFilter=_colorSaturateFilter - In the implementation block
@property (nonatomic,retain) CAFilter * tintFilter;                                                                       //@synthesize tintFilter=_tintFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorOffsetFilter;                                                                //@synthesize colorOffsetFilter=_colorOffsetFilter - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintView;                                                                  //@synthesize darkeningTintView=_darkeningTintView - In the implementation block
@property (nonatomic,retain) UIImage * darkeningTintMaskImage;                                                            //@synthesize darkeningTintMaskImage=_darkeningTintMaskImage - In the implementation block
@property (assign,nonatomic) BOOL contentViewAccessed;                                                                    //@synthesize contentViewAccessed=_contentViewAccessed - In the implementation block
@property (assign,nonatomic) BOOL contentViewAccessorGuard;                                                               //@synthesize contentViewAccessorGuard=_contentViewAccessorGuard - In the implementation block
@property (assign,nonatomic) long long maskMode;                                                                          //@synthesize maskMode=_maskMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * partialMaskViews;                                                             //@synthesize partialMaskViews=_partialMaskViews - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintMaskViewContainer;                                                     //@synthesize grayscaleTintMaskViewContainer=_grayscaleTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * grayscaleTintMaskViewMap;                                              //@synthesize grayscaleTintMaskViewMap=_grayscaleTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorTintMaskViewContainer;                                                         //@synthesize colorTintMaskViewContainer=_colorTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorTintMaskViewMap;                                                  //@synthesize colorTintMaskViewMap=_colorTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintMaskViewContainer;                                                     //@synthesize colorBurnTintMaskViewContainer=_colorBurnTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorBurnTintMaskViewMap;                                              //@synthesize colorBurnTintMaskViewMap=_colorBurnTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintMaskViewContainer;                                                     //@synthesize darkeningTintMaskViewContainer=_darkeningTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * darkeningTintMaskViewMap;                                              //@synthesize darkeningTintMaskViewMap=_darkeningTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * filterMaskViewContainer;                                                            //@synthesize filterMaskViewContainer=_filterMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterMaskViewMap;                                                     //@synthesize filterMaskViewMap=_filterMaskViewMap - In the implementation block
@property (assign,nonatomic) BOOL applySettingsAfterLayout;                                                               //@synthesize applySettingsAfterLayout=_applySettingsAfterLayout - In the implementation block
@property (nonatomic,retain) id computeAndApplySettingsNotificationObserver;                                              //@synthesize computeAndApplySettingsNotificationObserver=_computeAndApplySettingsNotificationObserver - In the implementation block
@property (assign,nonatomic) BOOL updateMaskViewsForViewReentrancyGuard;                                                  //@synthesize updateMaskViewsForViewReentrancyGuard=_updateMaskViewsForViewReentrancyGuard - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintLevel;                                                        //@synthesize colorMatrixGrayscaleTintLevel=_colorMatrixGrayscaleTintLevel - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintAlpha;                                                        //@synthesize colorMatrixGrayscaleTintAlpha=_colorMatrixGrayscaleTintAlpha - In the implementation block
@property (nonatomic,retain) UIColor * colorMatrixColorTint;                                                              //@synthesize colorMatrixColorTint=_colorMatrixColorTint - In the implementation block
@property (assign,nonatomic) double colorMatrixColorTintAlpha;                                                            //@synthesize colorMatrixColorTintAlpha=_colorMatrixColorTintAlpha - In the implementation block
@property (assign,nonatomic) BOOL simulatesMasks;                                                                         //@synthesize simulatesMasks=_simulatesMasks - In the implementation block
@property (assign,nonatomic) BOOL backdropVisibilitySetOnce;                                                              //@synthesize backdropVisibilitySetOnce=_backdropVisibilitySetOnce - In the implementation block
@property (assign,nonatomic) BOOL blurRadiusSetOnce;                                                                      //@synthesize blurRadiusSetOnce=_blurRadiusSetOnce - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsRed;                                                        //@synthesize previousBackdropStatisticsRed=_previousBackdropStatisticsRed - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsGreen;                                                      //@synthesize previousBackdropStatisticsGreen=_previousBackdropStatisticsGreen - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsBlue;                                                       //@synthesize previousBackdropStatisticsBlue=_previousBackdropStatisticsBlue - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsContrast;                                                   //@synthesize previousBackdropStatisticsContrast=_previousBackdropStatisticsContrast - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewGraphicsQualityChangeDelegate> graphicsQualityChangeDelegate;              //@synthesize graphicsQualityChangeDelegate=_graphicsQualityChangeDelegate - In the implementation block
@property (assign,nonatomic) BOOL disablesOccludedBackdropBlurs;                                                          //@synthesize disablesOccludedBackdropBlurs=_disablesOccludedBackdropBlurs - In the implementation block
@property (nonatomic,copy) NSString * _blurQuality;                                                                       //@synthesize _blurQuality=__blurQuality - In the implementation block
@property (assign,nonatomic) double _blurRadius;                                                                          //@synthesize _blurRadius=__blurRadius - In the implementation block
@property (assign,nonatomic) double _saturationDeltaFactor;                                                               //@synthesize _saturationDeltaFactor=__saturationDeltaFactor - In the implementation block
@property (assign,nonatomic) BOOL _backdropVisible;                                                                       //@synthesize _backdropVisible=__backdropVisible - In the implementation block
@property (assign,setter=setZoomsBack:,nonatomic) BOOL _zoomsBack;                                                        //@synthesize _zoomsBack=__zoomsBack - In the implementation block
+(Class)layerClass;
+(id)allBackdropViews;
+(void)setAllBackdropViewsToGraphicsQuality:(long long)arg1 ;
+(Class)defaultSettingsClass;
+(void)suppressColorSettingsForRunLoopModePush:(id)arg1 ;
+(void)restoreColorSettingsForRunLoopModePop:(id)arg1 ;
+(void)suppressColorSettingsForWillResignActive:(id)arg1 ;
+(void)restoreColorSettingsForDidBecomeActive:(id)arg1 ;
+(void)suppressColorSettingsForRequester:(id)arg1 ;
+(void)restoreColorSettingsForRequester:(id)arg1 ;
+(void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)addObserver:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(void)setGrayscaleTintMaskImage:(UIImage *)arg1 ;
-(void)setColorTintMaskImage:(UIImage *)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(void)setFilterMaskImage:(UIImage *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(UIImage *)grayscaleTintMaskImage;
-(UIImage *)colorTintMaskImage;
-(UIImage *)filterMaskImage;
-(double)blurRadius;
-(double)saturationDeltaFactor;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)didMoveToSuperview;
-(id)filters;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setGraphicsQualityChangeDelegate:(id<_UIBackdropViewGraphicsQualityChangeDelegate>)arg1 ;
-(id)initWithPrivateStyle:(long long)arg1 ;
-(_UIBackdropViewSettings *)inputSettings;
-(void)applySettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)updateMaskViewsForView:(id)arg1 ;
-(id<_UIBackdropViewObserver>)observer;
-(void)setObserver:(id<_UIBackdropViewObserver>)arg1 ;
-(void)_transitionToGraphicsQuality:(long long)arg1 ;
-(void)setComputesColorSettings:(BOOL)arg1 ;
-(void)setAllowsColorSettingsSuppression:(BOOL)arg1 ;
-(void)setConfiguration:(long long)arg1 ;
-(UIView *)grayscaleTintMaskViewContainer;
-(UIView *)colorTintMaskViewContainer;
-(UIView *)colorBurnTintMaskViewContainer;
-(UIView *)darkeningTintMaskViewContainer;
-(UIView *)filterMaskViewContainer;
-(void)transitionToStyle:(long long)arg1 ;
-(BOOL)computesColorSettings;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(void)setTintOpacity:(double)arg1 ;
-(NSString *)groupName;
-(UIView *)effectView;
-(void)setZoomsBack:(BOOL)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(void)transitionToPrivateStyle:(long long)arg1 ;
-(void)setShouldRasterizeEffectsView:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(_UIBackdropViewSettings *)outputSettings;
-(void)setAppliesOutputSettingsAutomatically:(BOOL)arg1 ;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg1 ;
-(void)backdropLayerStatisticsDidChange:(id)arg1 ;
-(id)blurQuality;
-(double)_blurRadius;
-(void)transitionToSettings:(id)arg1 ;
-(void)settingsDidChange:(id)arg1 ;
-(void)setBlurQuality:(id)arg1 ;
-(void)setColorBurnTintMaskImage:(UIImage *)arg1 ;
-(void)setDarkeningTintMaskImage:(UIImage *)arg1 ;
-(BOOL)isBackdropVisible;
-(UIImage *)colorBurnTintMaskImage;
-(UIImage *)darkeningTintMaskImage;
-(BOOL)_backdropVisible;
-(BOOL)_zoomsBack;
-(NSString *)_blurQuality;
-(double)_saturationDeltaFactor;
-(long long)configuration;
-(void)setAppliesOutputSettingsAnimationDuration:(double)arg1 ;
-(BOOL)allowsColorSettingsSuppression;
-(void)setWantsColorSettings:(BOOL)arg1 ;
-(BOOL)wantsColorSettings;
-(id<_UIBackdropViewGraphicsQualityChangeDelegate>)graphicsQualityChangeDelegate;
-(id)backdropViewLayer;
-(void)setAutosizesToFitSuperview:(BOOL)arg1 ;
-(BOOL)autosizesToFitSuperview;
-(void)setInputSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setOutputSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)updateSubviewHierarchyIfNeededForSettings:(id)arg1 ;
-(void)computeAndApplySettings:(id)arg1 ;
-(void)setComputeAndApplySettingsNotificationObserver:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 autosizesToFitSuperview:(BOOL)arg2 settings:(id)arg3 ;
-(id)computeAndApplySettingsNotificationObserver;
-(_UIBackdropEffectView *)backdropEffectView;
-(BOOL)applyingBackdropChanges;
-(BOOL)appliesOutputSettingsAutomatically;
-(void)applySettingsWithBuiltInAnimation:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setApplyingBackdropChanges:(BOOL)arg1 ;
-(void)delayedComputeAndApplySettings;
-(void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(BOOL)arg1 ;
-(BOOL)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
-(void)setApplySettingsAfterLayout:(BOOL)arg1 ;
-(BOOL)applySettingsAfterLayout;
-(void)adjustTintImplementationIfNeeded:(id)arg1 ;
-(void)setMaskImage:(id)arg1 onLayer:(id)arg2 ;
-(UIView *)grayscaleTintView;
-(UIView *)colorTintView;
-(UIView *)colorBurnTintView;
-(UIView *)darkeningTintView;
-(NSMutableDictionary *)grayscaleTintMaskViewMap;
-(NSMutableDictionary *)colorTintMaskViewMap;
-(NSMutableDictionary *)colorBurnTintMaskViewMap;
-(NSMutableDictionary *)darkeningTintMaskViewMap;
-(NSMutableDictionary *)filterMaskViewMap;
-(long long)maskMode;
-(void)setGrayscaleTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setGrayscaleTintMaskViewContainer:(UIView *)arg1 ;
-(void)setColorTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setColorTintMaskViewContainer:(UIView *)arg1 ;
-(void)setColorBurnTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setColorBurnTintMaskViewContainer:(UIView *)arg1 ;
-(void)setDarkeningTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setDarkeningTintMaskViewContainer:(UIView *)arg1 ;
-(void)setFilterMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setFilterMaskViewContainer:(UIView *)arg1 ;
-(BOOL)simulatesMasks;
-(void)removeOverlayBlendModeFromView:(id)arg1 ;
-(void)applyOverlayBlendModeToView:(id)arg1 ;
-(BOOL)updateMaskViewsForViewReentrancyGuard;
-(void)setUpdateMaskViewsForViewReentrancyGuard:(BOOL)arg1 ;
-(NSMutableSet *)partialMaskViews;
-(void)setPartialMaskViews:(NSMutableSet *)arg1 ;
-(void)updateMaskViewForView:(id)arg1 flag:(long long)arg2 ;
-(BOOL)blurRadiusSetOnce;
-(void)setBlurRadiusSetOnce:(BOOL)arg1 ;
-(void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2 ;
-(CAFilter *)gaussianBlurFilter;
-(void)setGaussianBlurFilter:(CAFilter *)arg1 ;
-(void)_updateFilters;
-(void)ensureProperSubviewOrdering;
-(void)setApplyingTransition:(BOOL)arg1 ;
-(void)prepareForTransitionToSettings:(id)arg1 ;
-(void)computeAndApplySettingsForTransition;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)transitionIncrementallyToStyle:(long long)arg1 weighting:(double)arg2 ;
-(BOOL)contentViewAccessorGuard;
-(void)setContentViewAccessorGuard:(BOOL)arg1 ;
-(void)setContentViewAccessed:(BOOL)arg1 ;
-(void)addBackdropEffectViewIfNeededForSettings:(id)arg1 ;
-(void)addGrayscaleTintViewIfNeededForSettings:(id)arg1 ;
-(void)addColorTintViewIfNeededForSettings:(id)arg1 ;
-(void)addColorBurnTintViewIfNeededForSettings:(id)arg1 ;
-(void)addContentViewIfNeededForSettings:(id)arg1 ;
-(void)addDarkeningTintViewIfNeededForSettings:(id)arg1 ;
-(void)setBackdropEffectView:(_UIBackdropEffectView *)arg1 ;
-(void)setGrayscaleTintView:(UIView *)arg1 ;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)setColorBurnTintView:(UIView *)arg1 ;
-(void)setDarkeningTintView:(UIView *)arg1 ;
-(BOOL)contentViewAccessed;
-(void)setBackdropVisibilitySetOnce:(BOOL)arg1 ;
-(BOOL)applyingTransition;
-(CAFilter *)tintFilter;
-(BOOL)requiresTintViews;
-(void)setTintFilter:(CAFilter *)arg1 ;
-(void)setTintFilterForSettings:(id)arg1 ;
-(void)transitionComplete;
-(void)setColorOffsetFilterForSettings:(id)arg1 ;
-(void)setMaskMode:(long long)arg1 ;
-(void)removeMaskViews;
-(void)applyOverlayBlendMode:(long long)arg1 toView:(id)arg2 ;
-(void)setUsesZoom;
-(void)_setBlursBackground:(BOOL)arg1 ;
-(void)transitionToColor:(id)arg1 ;
-(void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2 ;
-(double)appliesOutputSettingsAnimationDuration;
-(_UIBackdropViewSettings *)savedInputSettingsDuringRenderInContext;
-(void)setSavedInputSettingsDuringRenderInContext:(_UIBackdropViewSettings *)arg1 ;
-(void)setRequiresTintViews:(BOOL)arg1 ;
-(BOOL)blursBackground;
-(void)setBlursBackground:(BOOL)arg1 ;
-(CAFilter *)colorSaturateFilter;
-(void)setColorSaturateFilter:(CAFilter *)arg1 ;
-(CAFilter *)colorOffsetFilter;
-(void)setColorOffsetFilter:(CAFilter *)arg1 ;
-(double)colorMatrixGrayscaleTintLevel;
-(void)setColorMatrixGrayscaleTintLevel:(double)arg1 ;
-(double)colorMatrixGrayscaleTintAlpha;
-(void)setColorMatrixGrayscaleTintAlpha:(double)arg1 ;
-(UIColor *)colorMatrixColorTint;
-(void)setColorMatrixColorTint:(UIColor *)arg1 ;
-(double)colorMatrixColorTintAlpha;
-(void)setColorMatrixColorTintAlpha:(double)arg1 ;
-(void)setSimulatesMasks:(BOOL)arg1 ;
-(BOOL)backdropVisibilitySetOnce;
-(double)previousBackdropStatisticsRed;
-(void)setPreviousBackdropStatisticsRed:(double)arg1 ;
-(double)previousBackdropStatisticsGreen;
-(void)setPreviousBackdropStatisticsGreen:(double)arg1 ;
-(double)previousBackdropStatisticsBlue;
-(void)setPreviousBackdropStatisticsBlue:(double)arg1 ;
-(double)previousBackdropStatisticsContrast;
-(void)setPreviousBackdropStatisticsContrast:(double)arg1 ;
-(BOOL)disablesOccludedBackdropBlurs;
-(void)set_blurQuality:(NSString *)arg1 ;
-(void)set_blurRadius:(double)arg1 ;
-(void)set_saturationDeltaFactor:(double)arg1 ;
-(void)set_backdropVisible:(BOOL)arg1 ;
@end

