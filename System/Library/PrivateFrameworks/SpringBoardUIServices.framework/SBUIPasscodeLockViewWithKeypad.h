/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <libobjc.A.dylib/SBUIPasscodeLockNumberPadDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeEntryFieldDelegate.h>

@class UILabel, UIView, SBUIPasscodeLockNumberPad, NSString;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate> {

	UILabel* _statusTitleView;
	UILabel* _statusSubtitleView;
	UIView* _statusBackgroundView;
	SBUIPasscodeLockNumberPad* _numberPad;
	UIView* _topToStatusFieldOrEntryFieldFiller;
	UIView* _entryFieldToNumberPadFiller;
	UIView* _leftToNumberPadFiller;
	UIView* _rightToNumberPadFiller;
	UIView* _bottomToNumberPadFiller;
	NSString* _lastCharacterBeforeBackspace;
	BOOL _undoInputOnTouchCancellation;
	BOOL _useLightStyle;

}

@property (assign,setter=_setUndoInputOnTouchCancellation:,getter=_undoInputOnTouchCancellation,nonatomic) BOOL undoInputOnTouchCancellation;              //@synthesize undoInputOnTouchCancellation=_undoInputOnTouchCancellation - In the implementation block
@property (nonatomic,retain) NSString * lastCharacterBeforeBackspace;                                                                                      //@synthesize lastCharacterBeforeBackspace=_lastCharacterBeforeBackspace - In the implementation block
@property (nonatomic,retain) UILabel * statusTitleView;                                                                                                    //@synthesize statusTitleView=_statusTitleView - In the implementation block
@property (nonatomic,retain) UILabel * statusSubtitleView;                                                                                                 //@synthesize statusSubtitleView=_statusSubtitleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)reset;
-(void)setBackgroundAlpha:(double)arg1 ;
-(id)passcode;
-(void)_luminanceBoostDidChange;
-(double)backgroundAlpha;
-(id)initWithLightStyle:(BOOL)arg1 ;
-(id)_newStatusSubtitleView;
-(void)setStatusSubtitleView:(UILabel *)arg1 ;
-(void)_toggleForStatusField;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(UILabel *)statusSubtitleView;
-(void)_layoutStatusView;
-(double)_statusTitleWidth;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(id)_statusTitleView;
-(id)_statusSubtitleView;
-(BOOL)_usesLightStyle;
-(id)_numberPad;
-(id)_statusBackgroundView;
-(void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2 ;
-(void)passcodeLockNumberPadCancelButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1 ;
-(BOOL)_includesStatusView;
-(id)_newStatusTitleView;
-(void)setStatusTitleView:(UILabel *)arg1 ;
-(UILabel *)statusTitleView;
-(id)_newEntryField;
-(void)_setHasInput:(BOOL)arg1 ;
-(double)_numberPadOffsetFromTopOfScreen;
-(double)_entryFieldBottomYDistanceFromNumberPadTopButton;
-(void)setLastCharacterBeforeBackspace:(NSString *)arg1 ;
-(id)_statusTitleViewTitleFont;
-(id)_statusSubtitleViewTitleFont;
-(id)_numericEntryFieldIfExists;
-(void)_noteBackspaceHit;
-(void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(BOOL)arg2 ;
-(void)_noteKeyUp:(id)arg1 ;
-(BOOL)_undoInputOnTouchCancellation;
-(void)_setUndoInputOnTouchCancellation:(BOOL)arg1 ;
-(NSString *)lastCharacterBeforeBackspace;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)resetForFailedPasscode;
@end

