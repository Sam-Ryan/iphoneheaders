/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBControlCenterSettingsSectionSettings, SBControlCenterShortcutSectionSettings, UIColor;

@interface SBControlCenterSettings : _UISettings {

	BOOL _highlightUsesPlusL;
	BOOL _forceVibrantControls;
	BOOL _useNewBounce;
	SBControlCenterSettingsSectionSettings* _settingsSectionSettings;
	SBControlCenterShortcutSectionSettings* _shortcutSectionSettings;
	double _controlAlpha;
	double _controlAlpha1x;
	double _minControlAlpha;
	double _maxControlAlpha;
	double _disabledAlpha;
	double _disabledAlpha1x;
	double _highlightAlpha;
	double _glowAlpha;
	UIColor* _highlightColor;
	double _oldBounceFriction;
	double _bounceDensityFactor;
	double _bounceResistance;
	double _minVelocity;
	double _maxVelocity;
	double _attachmentThreshold;
	double _attachmentFrequencyAbove;
	double _attachmentFrequencyBelow;
	double _attachmentVelocityDamping;
	double _attachmentMinDamping;
	double _attachmentMaxDamping;
	double _backgroundAlphaFactor;

}

@property (retain) SBControlCenterSettingsSectionSettings * settingsSectionSettings;              //@synthesize settingsSectionSettings=_settingsSectionSettings - In the implementation block
@property (retain) SBControlCenterShortcutSectionSettings * shortcutSectionSettings;              //@synthesize shortcutSectionSettings=_shortcutSectionSettings - In the implementation block
@property (assign) double controlAlpha;                                                           //@synthesize controlAlpha=_controlAlpha - In the implementation block
@property (assign) double controlAlpha1x;                                                         //@synthesize controlAlpha1x=_controlAlpha1x - In the implementation block
@property (assign) double minControlAlpha;                                                        //@synthesize minControlAlpha=_minControlAlpha - In the implementation block
@property (assign) double maxControlAlpha;                                                        //@synthesize maxControlAlpha=_maxControlAlpha - In the implementation block
@property (assign) double disabledAlpha;                                                          //@synthesize disabledAlpha=_disabledAlpha - In the implementation block
@property (assign) double disabledAlpha1x;                                                        //@synthesize disabledAlpha1x=_disabledAlpha1x - In the implementation block
@property (assign) double highlightAlpha;                                                         //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (assign) BOOL highlightUsesPlusL;                                                       //@synthesize highlightUsesPlusL=_highlightUsesPlusL - In the implementation block
@property (assign) BOOL forceVibrantControls;                                                     //@synthesize forceVibrantControls=_forceVibrantControls - In the implementation block
@property (assign) double glowAlpha;                                                              //@synthesize glowAlpha=_glowAlpha - In the implementation block
@property (retain) UIColor * highlightColor;                                                      //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign) BOOL useNewBounce;                                                             //@synthesize useNewBounce=_useNewBounce - In the implementation block
@property (assign) double oldBounceFriction;                                                      //@synthesize oldBounceFriction=_oldBounceFriction - In the implementation block
@property (assign) double bounceDensityFactor;                                                    //@synthesize bounceDensityFactor=_bounceDensityFactor - In the implementation block
@property (assign) double bounceResistance;                                                       //@synthesize bounceResistance=_bounceResistance - In the implementation block
@property (assign) double minVelocity;                                                            //@synthesize minVelocity=_minVelocity - In the implementation block
@property (assign) double maxVelocity;                                                            //@synthesize maxVelocity=_maxVelocity - In the implementation block
@property (assign) double attachmentThreshold;                                                    //@synthesize attachmentThreshold=_attachmentThreshold - In the implementation block
@property (assign) double attachmentFrequencyAbove;                                               //@synthesize attachmentFrequencyAbove=_attachmentFrequencyAbove - In the implementation block
@property (assign) double attachmentFrequencyBelow;                                               //@synthesize attachmentFrequencyBelow=_attachmentFrequencyBelow - In the implementation block
@property (assign) double attachmentVelocityDamping;                                              //@synthesize attachmentVelocityDamping=_attachmentVelocityDamping - In the implementation block
@property (assign) double attachmentMinDamping;                                                   //@synthesize attachmentMinDamping=_attachmentMinDamping - In the implementation block
@property (assign) double attachmentMaxDamping;                                                   //@synthesize attachmentMaxDamping=_attachmentMaxDamping - In the implementation block
@property (assign) double backgroundAlphaFactor;                                                  //@synthesize backgroundAlphaFactor=_backgroundAlphaFactor - In the implementation block
+(id)settingsControllerModule;
-(SBControlCenterShortcutSectionSettings *)shortcutSectionSettings;
-(double)oldBounceFriction;
-(BOOL)useNewBounce;
-(double)bounceResistance;
-(double)bounceDensityFactor;
-(double)maxVelocity;
-(double)minVelocity;
-(double)attachmentThreshold;
-(double)attachmentFrequencyAbove;
-(double)attachmentFrequencyBelow;
-(double)attachmentVelocityDamping;
-(double)attachmentMaxDamping;
-(double)attachmentMinDamping;
-(SBControlCenterSettingsSectionSettings *)settingsSectionSettings;
-(void)setForceVibrantControls:(BOOL)arg1 ;
-(void)setControlAlpha:(double)arg1 ;
-(void)setControlAlpha1x:(double)arg1 ;
-(void)setMinControlAlpha:(double)arg1 ;
-(void)setMaxControlAlpha:(double)arg1 ;
-(void)setDisabledAlpha:(double)arg1 ;
-(void)setDisabledAlpha1x:(double)arg1 ;
-(void)setHighlightAlpha:(double)arg1 ;
-(void)setHighlightUsesPlusL:(BOOL)arg1 ;
-(void)setUseNewBounce:(BOOL)arg1 ;
-(void)setOldBounceFriction:(double)arg1 ;
-(void)setBounceDensityFactor:(double)arg1 ;
-(void)setBounceResistance:(double)arg1 ;
-(void)setMinVelocity:(double)arg1 ;
-(void)setMaxVelocity:(double)arg1 ;
-(void)setAttachmentThreshold:(double)arg1 ;
-(void)setAttachmentFrequencyAbove:(double)arg1 ;
-(void)setAttachmentFrequencyBelow:(double)arg1 ;
-(void)setAttachmentVelocityDamping:(double)arg1 ;
-(void)setAttachmentMinDamping:(double)arg1 ;
-(void)setAttachmentMaxDamping:(double)arg1 ;
-(double)controlAlpha1x;
-(double)disabledAlpha1x;
-(double)disabledAlpha;
-(void)setSettingsSectionSettings:(SBControlCenterSettingsSectionSettings *)arg1 ;
-(void)setShortcutSectionSettings:(SBControlCenterShortcutSectionSettings *)arg1 ;
-(double)glowAlpha;
-(void)setGlowAlpha:(double)arg1 ;
-(void)setDefaultValues;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(double)controlAlpha;
-(double)resolvedControlAlpha;
-(double)highlightAlpha;
-(double)resolvedDisabledAlpha;
-(BOOL)highlightUsesPlusL;
-(BOOL)forceVibrantControls;
-(double)maxControlAlpha;
-(double)minControlAlpha;
-(void)setBackgroundAlphaFactor:(double)arg1 ;
-(double)backgroundAlphaFactor;
@end

