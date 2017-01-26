/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBUIBiometricEventObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeLockView_Internal.h>
#import <libobjc.A.dylib/SBUIPasscodeLockView.h>

@protocol SBFLegibilitySettingsProvider, SBUIPasscodeLockViewDelegate;
@class NSString, UIColor, SBUIPasscodeEntryField, _UILegibilitySettings, NSTimer;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricEventObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView_Internal, SBUIPasscodeLockView> {

	int _style;
	BOOL _playsKeypadSounds;
	BOOL _showsEmergencyCallButton;
	BOOL _showsStatusField;
	BOOL _becameVisible;
	double _backgroundAlpha;
	UIColor* _customBackgroundColor;
	SBUIPasscodeEntryField* _entryField;
	id<SBFLegibilitySettingsProvider> _backgroundLegibilitySettingsProvider;
	double _luminanceBoost;
	double _currentBacklightLevel;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
	BOOL _mesaLockedOut;
	unsigned long long _biometricMatchMode;
	BOOL _deviceHasBeenUnlockedOnceSinceBoot;
	BOOL _appearingForSmartCoverUnlock;
	BOOL _enabledMatching;
	BOOL _screenOn;
	BOOL _shouldResetForFailedPasscodeAttempt;
	id<SBUIPasscodeLockViewDelegate> _delegate;
	NSString* _statusText;
	NSString* _statusSubtitleText;
	unsigned long long _statusState;
	NSTimer* _screenBrightnessChangedTimer;

}

@property (assign,nonatomic) int style;                                                                                   //@synthesize style=_style - In the implementation block
@property (assign,setter=_setLuminosityBoost:,getter=_luminosityBoost,nonatomic) double luminosityBoost;                  //@synthesize luminanceBoost=_luminanceBoost - In the implementation block
@property (setter=_setEntryField:,getter=_entryField,nonatomic,retain) SBUIPasscodeEntryField * _entryField;              //@synthesize entryField=_entryField - In the implementation block
@property (getter=_statusText,nonatomic,copy,readonly) NSString * statusText;                                             //@synthesize statusText=_statusText - In the implementation block
@property (getter=_statusSubtitleText,nonatomic,copy,readonly) NSString * statusSubtitleText;                             //@synthesize statusSubtitleText=_statusSubtitleText - In the implementation block
@property (assign,nonatomic) BOOL shouldResetForFailedPasscodeAttempt;                                                    //@synthesize shouldResetForFailedPasscodeAttempt=_shouldResetForFailedPasscodeAttempt - In the implementation block
@property (assign,setter=_setStatusState:,getter=_statusState,nonatomic) unsigned long long statusState;                  //@synthesize statusState=_statusState - In the implementation block
@property (retain) NSTimer * screenBrightnessChangedTimer;                                                                //@synthesize screenBrightnessChangedTimer=_screenBrightnessChangedTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBUIPasscodeLockViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * passcode; 
@property (assign,nonatomic) BOOL playsKeypadSounds; 
@property (assign,nonatomic) BOOL showsStatusField;                                                                       //@synthesize showsStatusField=_showsStatusField - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyCallButton;                                                               //@synthesize showsEmergencyCallButton=_showsEmergencyCallButton - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                                                                      //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (nonatomic,retain) UIColor * customBackgroundColor;                                                             //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
@property (nonatomic,retain) id<SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider;                      //@synthesize backgroundLegibilitySettingsProvider=_backgroundLegibilitySettingsProvider - In the implementation block
@property (assign,getter=isScreenOn,nonatomic) BOOL screenOn;                                                             //@synthesize screenOn=_screenOn - In the implementation block
@property (assign,nonatomic) unsigned long long biometricMatchMode;                                                       //@synthesize biometricMatchMode=_biometricMatchMode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBUIPasscodeLockViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id<SBUIPasscodeLockViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(void)reset;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(void)_setLegibilitySettings:(id)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(NSString *)passcode;
-(void)setPlaysKeypadSounds:(BOOL)arg1 ;
-(BOOL)_wantsBiometricAuthentication;
-(void)_updateStatusStateForLockout;
-(void)_noteScreenBrightnessDidChange;
-(void)_noteBioMatchingEnabledDidChange;
-(void)updateStatusTextAnimated:(BOOL)arg1 ;
-(void)_clearBrightnessChangeTimer;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(unsigned long long)_statusState;
-(void)_setStatusState:(unsigned long long)arg1 ;
-(BOOL)isScreenOn;
-(void)setKeyPressClicksPrewarmed:(BOOL)arg1 ;
-(void)resetForScreenOff;
-(BOOL)playsKeypadSounds;
-(void)_resetForFailedMesaAttempt;
-(SBUIPasscodeEntryField *)_entryField;
-(void)_resetStatusText;
-(void)_luminanceBoostDidChange;
-(void)_evaluateLuminance;
-(double)_luminosityBoost;
-(void)_setLuminosityBoost:(double)arg1 ;
-(unsigned long long)_statusStateForLockoutState:(unsigned long long)arg1 ;
-(id)_defaultStatusText;
-(void)_setStatusText:(id)arg1 ;
-(void)_setStatusSubtitleText:(id)arg1 ;
-(id)_statusSubtitleText;
-(unsigned long long)biometricMatchMode;
-(NSTimer *)screenBrightnessChangedTimer;
-(void)setScreenBrightnessChangedTimer:(NSTimer *)arg1 ;
-(void)_screenBrightnessReallyDidChange;
-(double)_luminanceBoostFromLegibility;
-(double)_luminanceBoostFromDisplayBrightness;
-(void)_notifyDelegatePasscodeEnteredViaMesa;
-(void)updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_handleBiometricEvent:(unsigned long long)arg1 ;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2 ;
-(void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(BOOL)arg1 ;
-(void)_noteAppearingForSmartCoverUnlock:(BOOL)arg1 ;
-(void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2 ;
-(void)autofillForSuccessfulMesaAttemptWithCompletion:(/*^block*/id)arg1 ;
-(void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1 ;
-(BOOL)showsStatusField;
-(BOOL)showsEmergencyCallButton;
-(double)backgroundAlpha;
-(id<SBFLegibilitySettingsProvider>)backgroundLegibilitySettingsProvider;
-(void)setScreenOn:(BOOL)arg1 ;
-(void)setBiometricMatchMode:(unsigned long long)arg1 ;
-(BOOL)_isBoundsPortraitOriented;
-(void)_sendDelegateKeypadKeyDown;
-(void)_sendDelegateKeypadKeyUp;
-(void)_setEntryField:(id)arg1 ;
-(BOOL)shouldResetForFailedPasscodeAttempt;
-(void)setShouldResetForFailedPasscodeAttempt:(BOOL)arg1 ;
-(long long)_orientation;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)_statusText;
-(UIColor *)customBackgroundColor;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundLegibilitySettingsProvider:(id<SBFLegibilitySettingsProvider>)arg1 ;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)resetForFailedPasscode;
@end

