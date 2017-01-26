/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebSelectionAssistant.h>

@class _UITextServiceSession, UILongPressGestureRecognizer;

@interface UIWKSelectionAssistant : UIWebSelectionAssistant {

	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;

}

@property (nonatomic,readonly) UILongPressGestureRecognizer * selectionLongPressRecognizer; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)selectionChanged;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)willBeginGesture;
-(CGRect)selectionFrame;
-(void)showSelectionCommands;
-(void)initializeSelectionView;
-(id)interactionView;
-(id)asyncSelectionView;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)blockSelectionChangedWithTouch:(long long)arg1 withFlags:(long long)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4 ;
-(UILongPressGestureRecognizer *)selectionLongPressRecognizer;
-(BOOL)shouldHandleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
@end

