/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIResponder.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPDFPageView, UITapGestureRecognizer, UILongPressGestureRecognizer, UIMenuController, UIPDFSelectionController, UIPDFMagnifierController, NSString;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {

	UIPDFPageView* _pdfPageView;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UILongPressGestureRecognizer* _briefPressRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _twoFingerTapRecognizer;
	UIMenuController* _menuController;
	UIPDFSelectionController* _selectionController;
	UIPDFMagnifierController* _magnifyController;
	BOOL _trackingSelection;
	BOOL _showMagnifier;
	BOOL _showLoupe;
	BOOL _firstTouch;
	BOOL _useDelegateForLinks;
	BOOL _allowMenu;

}

@property (assign) BOOL allowMenu;                                  //@synthesize allowMenu=_allowMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)releaseViewManager;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)initWithView:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)showMenu;
-(void)enableRecognizers;
-(void)setAllowMenu:(BOOL)arg1 ;
-(void)disableRecognizers;
-(void)setFirstTouch;
-(void)hideMenu;
-(BOOL)allowMenu;
-(void)doubleTapRecognized:(id)arg1 ;
-(void)singleTapRecognized:(id)arg1 ;
-(void)twoFingerTapRecognized:(id)arg1 ;
-(void)briefPressRecognized:(id)arg1 ;
-(void)longPressRecognized:(id)arg1 ;
-(BOOL)delegateGesture:(id)arg1 kind:(int)arg2 ;
@end

