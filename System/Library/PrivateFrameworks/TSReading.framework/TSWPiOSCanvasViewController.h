/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDiOSCanvasViewController.h>
#import <TSReading/_UINonEditableTextSelectionForceGestureDelegate.h>

@class UIGestureRecognizer, TSWPSwipeGestureRecognizer, TSWPTwoPartAction, NSMutableArray, UITapGestureRecognizer, TSWPHardPressGestureRecognizer, TSUColor, TSWPInteractiveCanvasController, NSString;

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController <_UINonEditableTextSelectionForceGestureDelegate> {

	UIGestureRecognizer* _hyperlinkGestureRecognizer;
	TSWPSwipeGestureRecognizer* _rightSwipeGestureRecognizer;
	TSWPSwipeGestureRecognizer* _leftSwipeGestureRecognizer;
	TSWPTwoPartAction* _delayedTapAction;
	NSMutableArray* _gestureRecognizers;
	UITapGestureRecognizer* _secondarySingleTapGestureRecognizer;
	TSWPHardPressGestureRecognizer* _hardPressGesture;

}

@property (nonatomic,readonly) TSWPSwipeGestureRecognizer * textLeftSwipeGestureRecognizer;               //@synthesize leftSwipeGestureRecognizer=_leftSwipeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TSWPSwipeGestureRecognizer * textRightSwipeGestureRecognizer;              //@synthesize rightSwipeGestureRecognizer=_rightSwipeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * secondarySingleTapGestureRecognizer;              //@synthesize secondarySingleTapGestureRecognizer=_secondarySingleTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * hyperlinkGestureRecognizer;                          //@synthesize hyperlinkGestureRecognizer=_hyperlinkGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TSUColor * backgroundColorForMagnifier; 
@property (nonatomic,retain) TSWPHardPressGestureRecognizer * hardPressGesture;                           //@synthesize hardPressGesture=_hardPressGesture - In the implementation block
@property (readonly) TSWPInteractiveCanvasController * interactiveCanvasController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gestureSequenceWillBegin;
-(void)gestureSequenceDidEnd;
-(TSWPInteractiveCanvasController *)interactiveCanvasController;
-(void)setUpGestureRecognizers;
-(id)hyperlinkUICustomStringForURLString:(id)arg1 ;
-(BOOL)shouldHideCanvasLayerInMagnifier;
-(TSUColor *)backgroundColorForMagnifier;
-(UIGestureRecognizer *)hyperlinkGestureRecognizer;
-(void)cancelDelayedTapAction;
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3 ;
-(void)startDelayedTapAction:(id)arg1 ;
-(BOOL)onlyAllowTextSwipesWhenEditing;
-(void)addSwipeGestureRecognizers;
-(void)removeSwipeGestureRecognizers;
-(BOOL)hasDelayedTapAction;
-(void)finishDelayedTapAction;
-(TSWPHardPressGestureRecognizer *)hardPressGesture;
-(void)p_handleHardPressGestureRecognizer:(id)arg1 ;
-(id)p_newSwipeGestureRecognizerWithDirection:(int)arg1 numberOfTouchesRequired:(unsigned)arg2 ;
-(void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)arg1 ;
-(void)p_addSwipeGestureRecognizer:(id)arg1 failRequiredFor:(id)arg2 ;
-(BOOL)canDisplayHyperlinkUI;
-(void)hyperlinkUIWillShow;
-(void)hyperlinkUIDidHide;
-(BOOL)hyperlinkUIShouldShowCustomUI;
-(BOOL)hyperlinkUIShouldShow;
-(void)hyperlinkUIShowCustomUIforRep:(id)arg1 field:(id)arg2 ;
-(TSWPSwipeGestureRecognizer *)textLeftSwipeGestureRecognizer;
-(TSWPSwipeGestureRecognizer *)textRightSwipeGestureRecognizer;
-(UITapGestureRecognizer *)secondarySingleTapGestureRecognizer;
-(void)setHardPressGesture:(TSWPHardPressGestureRecognizer *)arg1 ;
-(void)dealloc;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willBeginGesture;
-(void)teardown;
@end

