/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UIBackdropView, _UIBackdropColorSettings, UIImage, UIColor, NSString, NSValue;

@interface _UIBackdropViewSettings : NSObject {

	CFRunLoopObserverRef _runLoopObserver;
	_UIBackdropView* _backdrop;
	long long _style;
	long long _graphicsQuality;
	BOOL _explicitlySetGraphicsQuality;
	BOOL _requiresColorStatistics;
	_UIBackdropColorSettings* _colorSettings;
	long long _renderingHint;
	long long _stackingLevel;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _enabled;
	BOOL _backdropVisible;
	BOOL _zoomsBack;
	double _grayscaleTintLevel;
	double _grayscaleTintAlpha;
	double _grayscaleTintMaskAlpha;
	UIImage* _grayscaleTintMaskImage;
	BOOL _lightenGrayscaleWithSourceOver;
	UIColor* _colorTint;
	double _colorTintAlpha;
	double _colorTintMaskAlpha;
	UIImage* _colorTintMaskImage;
	double _colorBurnTintLevel;
	double _colorBurnTintAlpha;
	UIImage* _colorBurnTintMaskImage;
	double _darkeningTintAlpha;
	double _darkeningTintHue;
	double _darkeningTintSaturation;
	double _darkeningTintBrightness;
	UIImage* _darkeningTintMaskImage;
	BOOL _darkenWithSourceOver;
	double _blurRadius;
	NSString* _blurQuality;
	double _saturationDeltaFactor;
	double _filterMaskAlpha;
	UIImage* _filterMaskImage;
	double _extendedRangeClamp;
	UIColor* _legibleColor;
	UIColor* _combinedTintColor;
	double _scale;
	double _statisticsInterval;
	BOOL _usesBackdropEffectView;
	BOOL _usesGrayscaleTintView;
	BOOL _usesColorTintView;
	BOOL _usesColorBurnTintView;
	BOOL _usesContentView;
	BOOL _usesDarkeningTintView;
	BOOL _usesColorOffset;
	double _colorOffsetAlpha;
	NSValue* _colorOffsetMatrix;
	BOOL _appliesTintAndBlurSettings;
	long long _suppressSettingsDidChange;
	BOOL _designMode;
	long long _blurHardEdges;
	unsigned long long _version;
	double _zoom;

}

@property (assign,nonatomic) BOOL requiresColorStatistics; 
@property (assign,nonatomic) _UIBackdropView * backdrop;                                 //@synthesize backdrop=_backdrop - In the implementation block
@property (nonatomic,readonly) long long style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long graphicsQuality;                                  //@synthesize graphicsQuality=_graphicsQuality - In the implementation block
@property (assign,nonatomic) BOOL explicitlySetGraphicsQuality;                          //@synthesize explicitlySetGraphicsQuality=_explicitlySetGraphicsQuality - In the implementation block
@property (assign,nonatomic) BOOL requiresColorStatistics;                               //@synthesize requiresColorStatistics=_requiresColorStatistics - In the implementation block
@property (nonatomic,retain) _UIBackdropColorSettings * colorSettings;                   //@synthesize colorSettings=_colorSettings - In the implementation block
@property (assign,nonatomic) long long renderingHint;                                    //@synthesize renderingHint=_renderingHint - In the implementation block
@property (assign,nonatomic) long long stackingLevel;                                    //@synthesize stackingLevel=_stackingLevel - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                            //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isBackdropVisible,nonatomic) BOOL backdropVisible;              //@synthesize backdropVisible=_backdropVisible - In the implementation block
@property (assign,nonatomic) BOOL zoomsBack;                                             //@synthesize zoomsBack=_zoomsBack - In the implementation block
@property (assign,nonatomic) double grayscaleTintLevel;                                  //@synthesize grayscaleTintLevel=_grayscaleTintLevel - In the implementation block
@property (assign,nonatomic) double grayscaleTintAlpha;                                  //@synthesize grayscaleTintAlpha=_grayscaleTintAlpha - In the implementation block
@property (assign,nonatomic) double grayscaleTintMaskAlpha;                              //@synthesize grayscaleTintMaskAlpha=_grayscaleTintMaskAlpha - In the implementation block
@property (nonatomic,retain) UIImage * grayscaleTintMaskImage;                           //@synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage - In the implementation block
@property (assign,nonatomic) BOOL lightenGrayscaleWithSourceOver;                        //@synthesize lightenGrayscaleWithSourceOver=_lightenGrayscaleWithSourceOver - In the implementation block
@property (nonatomic,retain) UIColor * colorTint;                                        //@synthesize colorTint=_colorTint - In the implementation block
@property (assign,nonatomic) double colorTintAlpha;                                      //@synthesize colorTintAlpha=_colorTintAlpha - In the implementation block
@property (assign,nonatomic) double colorTintMaskAlpha;                                  //@synthesize colorTintMaskAlpha=_colorTintMaskAlpha - In the implementation block
@property (nonatomic,retain) UIImage * colorTintMaskImage;                               //@synthesize colorTintMaskImage=_colorTintMaskImage - In the implementation block
@property (assign,nonatomic) double colorBurnTintLevel;                                  //@synthesize colorBurnTintLevel=_colorBurnTintLevel - In the implementation block
@property (assign,nonatomic) double colorBurnTintAlpha;                                  //@synthesize colorBurnTintAlpha=_colorBurnTintAlpha - In the implementation block
@property (nonatomic,retain) UIImage * colorBurnTintMaskImage;                           //@synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage - In the implementation block
@property (assign,nonatomic) double darkeningTintAlpha;                                  //@synthesize darkeningTintAlpha=_darkeningTintAlpha - In the implementation block
@property (assign,nonatomic) double darkeningTintHue;                                    //@synthesize darkeningTintHue=_darkeningTintHue - In the implementation block
@property (assign,nonatomic) double darkeningTintSaturation;                             //@synthesize darkeningTintSaturation=_darkeningTintSaturation - In the implementation block
@property (assign,nonatomic) double darkeningTintBrightness;                             //@synthesize darkeningTintBrightness=_darkeningTintBrightness - In the implementation block
@property (nonatomic,retain) UIImage * darkeningTintMaskImage;                           //@synthesize darkeningTintMaskImage=_darkeningTintMaskImage - In the implementation block
@property (assign,nonatomic) BOOL darkenWithSourceOver;                                  //@synthesize darkenWithSourceOver=_darkenWithSourceOver - In the implementation block
@property (assign,nonatomic) double blurRadius;                                          //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,copy) NSString * blurQuality;                                       //@synthesize blurQuality=_blurQuality - In the implementation block
@property (assign,nonatomic) long long blurHardEdges;                                    //@synthesize blurHardEdges=_blurHardEdges - In the implementation block
@property (assign,nonatomic) BOOL blursWithHardEdges; 
@property (assign,nonatomic) double saturationDeltaFactor;                               //@synthesize saturationDeltaFactor=_saturationDeltaFactor - In the implementation block
@property (assign,nonatomic) double filterMaskAlpha;                                     //@synthesize filterMaskAlpha=_filterMaskAlpha - In the implementation block
@property (nonatomic,retain) UIImage * filterMaskImage;                                  //@synthesize filterMaskImage=_filterMaskImage - In the implementation block
@property (assign,nonatomic) double extendedRangeClamp;                                  //@synthesize extendedRangeClamp=_extendedRangeClamp - In the implementation block
@property (nonatomic,retain) UIColor * legibleColor;                                     //@synthesize legibleColor=_legibleColor - In the implementation block
@property (nonatomic,readonly) UIColor * combinedTintColor; 
@property (assign,nonatomic) double scale;                                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double statisticsInterval;                                  //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                 //@synthesize version=_version - In the implementation block
@property (assign,setter=setDesignMode:,nonatomic) BOOL designMode;                      //@synthesize designMode=_designMode - In the implementation block
@property (assign,nonatomic) BOOL usesBackdropEffectView;                                //@synthesize usesBackdropEffectView=_usesBackdropEffectView - In the implementation block
@property (assign,nonatomic) BOOL usesGrayscaleTintView;                                 //@synthesize usesGrayscaleTintView=_usesGrayscaleTintView - In the implementation block
@property (assign,nonatomic) BOOL usesColorTintView;                                     //@synthesize usesColorTintView=_usesColorTintView - In the implementation block
@property (assign,nonatomic) BOOL usesColorBurnTintView;                                 //@synthesize usesColorBurnTintView=_usesColorBurnTintView - In the implementation block
@property (assign,nonatomic) BOOL usesContentView;                                       //@synthesize usesContentView=_usesContentView - In the implementation block
@property (assign,nonatomic) BOOL usesDarkeningTintView;                                 //@synthesize usesDarkeningTintView=_usesDarkeningTintView - In the implementation block
@property (assign,nonatomic) BOOL usesColorOffset;                                       //@synthesize usesColorOffset=_usesColorOffset - In the implementation block
@property (assign,nonatomic) double colorOffsetAlpha;                                    //@synthesize colorOffsetAlpha=_colorOffsetAlpha - In the implementation block
@property (nonatomic,retain) NSValue * colorOffsetMatrix;                                //@synthesize colorOffsetMatrix=_colorOffsetMatrix - In the implementation block
@property (assign,nonatomic) BOOL appliesTintAndBlurSettings;                            //@synthesize appliesTintAndBlurSettings=_appliesTintAndBlurSettings - In the implementation block
@property (assign,nonatomic) double zoom;                                                //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) long long suppressSettingsDidChange;                        //@synthesize suppressSettingsDidChange=_suppressSettingsDidChange - In the implementation block
+(id)MPU_settingsForNowPlayingBackdrop;
+(id)MPU_settingsForNowPlayingVibrantContent;
+(id)settingsForStyle:(long long)arg1 ;
+(id)settingsForPrivateStyle:(long long)arg1 graphicsQuality:(long long)arg2 ;
+(id)settingsForPrivateStyle:(long long)arg1 ;
+(id)darkeningTintColor;
+(id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2 ;
+(id)settingsPreservingHintsFromSettings:(id)arg1 graphicsQuality:(long long)arg2 ;
-(id)initWithDefaultValues;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setDefaultValues;
-(long long)graphicsQuality;
-(void)setRequiresColorStatistics:(BOOL)arg1 ;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(void)setUsesBackdropEffectView:(BOOL)arg1 ;
-(void)setUsesColorTintView:(BOOL)arg1 ;
-(void)setGrayscaleTintLevel:(double)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(void)setGrayscaleTintMaskAlpha:(double)arg1 ;
-(void)setGrayscaleTintMaskImage:(UIImage *)arg1 ;
-(void)setColorTint:(UIColor *)arg1 ;
-(void)setColorTintAlpha:(double)arg1 ;
-(void)setColorTintMaskAlpha:(double)arg1 ;
-(void)setColorTintMaskImage:(UIImage *)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(void)setFilterMaskAlpha:(double)arg1 ;
-(void)setFilterMaskImage:(UIImage *)arg1 ;
-(void)setLegibleColor:(UIColor *)arg1 ;
-(UIImage *)grayscaleTintMaskImage;
-(UIImage *)colorTintMaskImage;
-(UIImage *)filterMaskImage;
-(double)blurRadius;
-(double)saturationDeltaFactor;
-(BOOL)usesBackdropEffectView;
-(void)setValuesFromModel:(id)arg1 ;
-(BOOL)requiresColorStatistics;
-(_UIBackdropColorSettings *)colorSettings;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(BOOL)usesGrayscaleTintView;
-(double)grayscaleTintAlpha;
-(double)grayscaleTintLevel;
-(BOOL)usesColorTintView;
-(UIColor *)colorTint;
-(double)colorTintAlpha;
-(void)setUsesGrayscaleTintView:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setRenderingHint:(long long)arg1 ;
-(double)darkeningTintAlpha;
-(void)setDarkeningTintAlpha:(double)arg1 ;
-(void)addKeyPathObserver:(id)arg1 ;
-(void)removeKeyPathObserver:(id)arg1 ;
-(void)restoreDefaultValues;
-(void)setUsesColorOffset:(BOOL)arg1 ;
-(void)setColorOffsetAlpha:(double)arg1 ;
-(BOOL)lightenGrayscaleWithSourceOver;
-(void)setLightenGrayscaleWithSourceOver:(BOOL)arg1 ;
-(double)colorBurnTintLevel;
-(void)setColorBurnTintLevel:(double)arg1 ;
-(double)colorBurnTintAlpha;
-(void)setColorBurnTintAlpha:(double)arg1 ;
-(double)darkeningTintHue;
-(void)setDarkeningTintHue:(double)arg1 ;
-(double)darkeningTintSaturation;
-(void)setDarkeningTintSaturation:(double)arg1 ;
-(BOOL)darkenWithSourceOver;
-(void)setDarkenWithSourceOver:(BOOL)arg1 ;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(void)setZoomsBack:(BOOL)arg1 ;
-(void)setGraphicsQuality:(long long)arg1 ;
-(void)setUsesDarkeningTintView:(BOOL)arg1 ;
-(double)statisticsInterval;
-(void)setStatisticsInterval:(double)arg1 ;
-(NSString *)blurQuality;
-(void)setExtendedRangeClamp:(double)arg1 ;
-(NSValue *)colorOffsetMatrix;
-(double)colorOffsetAlpha;
-(long long)blurHardEdges;
-(void)setBlurHardEdges:(long long)arg1 ;
-(double)darkeningTintBrightness;
-(BOOL)usesColorBurnTintView;
-(BOOL)usesDarkeningTintView;
-(long long)renderingHint;
-(long long)stackingLevel;
-(void)setStackingLevel:(long long)arg1 ;
-(void)copyAdditionalSettingsFromSettings:(id)arg1 ;
-(id)initWithDefaultValuesForGraphicsQuality:(long long)arg1 ;
-(void)scheduleSettingsDidChangeIfNeeded;
-(void)clearRunLoopObserver;
-(void)setAppliesTintAndBlurSettings:(BOOL)arg1 ;
-(void)setBlurQuality:(NSString *)arg1 ;
-(void)setBlursWithHardEdges:(BOOL)arg1 ;
-(void)setColorBurnTintMaskImage:(UIImage *)arg1 ;
-(void)setDarkeningTintBrightness:(double)arg1 ;
-(void)setDarkeningTintMaskImage:(UIImage *)arg1 ;
-(void)setStackinglevel:(long long)arg1 ;
-(void)setUsesColorBurnTintView:(BOOL)arg1 ;
-(void)setUsesContentView:(BOOL)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(BOOL)requiresBackdropLayer;
-(BOOL)blursWithHardEdges;
-(UIColor *)combinedTintColor;
-(_UIBackdropView *)backdrop;
-(void)setBackdrop:(_UIBackdropView *)arg1 ;
-(BOOL)explicitlySetGraphicsQuality;
-(void)setExplicitlySetGraphicsQuality:(BOOL)arg1 ;
-(void)setColorSettings:(_UIBackdropColorSettings *)arg1 ;
-(BOOL)isBackdropVisible;
-(BOOL)zoomsBack;
-(double)grayscaleTintMaskAlpha;
-(double)colorTintMaskAlpha;
-(UIImage *)colorBurnTintMaskImage;
-(UIImage *)darkeningTintMaskImage;
-(double)filterMaskAlpha;
-(double)extendedRangeClamp;
-(UIColor *)legibleColor;
-(unsigned long long)version;
-(BOOL)designMode;
-(void)setDesignMode:(BOOL)arg1 ;
-(BOOL)usesContentView;
-(BOOL)usesColorOffset;
-(void)setColorOffsetMatrix:(NSValue *)arg1 ;
-(BOOL)appliesTintAndBlurSettings;
-(long long)suppressSettingsDidChange;
-(void)setSuppressSettingsDidChange:(long long)arg1 ;
@end

