/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class UIView, NSMutableArray;

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _characterIndicatorsContainerView;
	NSMutableArray* _characterIndicators;
	double _backgroundAlpha;
	UIView* _springView;
	UIView* _springViewParent;

}
-(void)layoutSubviews;
-(void)reset;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/id)arg1 ;
-(void)_setLuminosityBoost:(double)arg1 ;
-(void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 numberOfDigits:(unsigned long long)arg2 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(CGRect)_entryFieldBoundsWithXOffset:(double)arg1 ;
-(UIEdgeInsets)_entryFieldPaddingOutsideRing;
-(void)_deleteLastCharacter;
-(BOOL)_hasAnyCharacters;
-(CGSize)_viewSize;
-(void)_appendString:(id)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
@end

