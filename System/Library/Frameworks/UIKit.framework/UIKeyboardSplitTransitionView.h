/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UIKeyboardKeyplaneTransitionDelegate, UIKeyboardSplitTransitionDataSource;
@class CADisplayLink, UIKeyboardSliceSet, NSArray;

@interface UIKeyboardSplitTransitionView : UIView {

	double _currentProgress;
	double _liftOffProgress;
	double _finishProgress;
	double _finishDuration;
	double _finalTransitionStartTime;
	CADisplayLink* _displayLink;
	/*^block*/id _completionBlock;
	CGRect _startFrame;
	CGRect _endFrame;
	id<UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
	id<UIKeyboardSplitTransitionDataSource> _transitionDataSource;
	BOOL _centerFilled;
	BOOL _isRebuilding;
	BOOL _isSplitTranslation;
	UIKeyboardSliceSet* _sliceSet;

}

@property (copy) id completionBlock;                                                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate;               //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardSplitTransitionDataSource> splitTransitionDataSource;              //@synthesize transitionDataSource=_transitionDataSource - In the implementation block
@property (readonly) NSArray * shadowLayers; 
@property (readonly) NSArray * backgroundLayers; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)finalizeTransition;
-(void)updateWithProgress:(double)arg1 ;
-(void)transitionToFinalState:(id)arg1 ;
-(void)finishWithProgress:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setSplitTransitionDelegate:(id<UIKeyboardKeyplaneTransitionDelegate>)arg1 ;
-(void)rebuildTransitionForSplitStyleChange:(id)arg1 ;
-(NSArray *)backgroundLayers;
-(NSArray *)shadowLayers;
-(id)topDropShadow;
-(id)centerDropShadow;
-(id)bottomDropShadow;
-(id)outerCenterDropShadow;
-(id)colorsForBackgroundLayer:(int)arg1 ;
-(BOOL)shouldAllowRubberiness;
-(id<UIKeyboardKeyplaneTransitionDelegate>)splitTransitionDelegate;
-(BOOL)transitionIsVisible;
-(void)transformForProgress:(double)arg1 ;
-(CGImageRef)defaultKeyboardImage;
-(CGImageRef)splitKeyboardImage;
-(void)initializeLayers;
-(CGSize)sizeForShadowLayer:(int)arg1 ;
-(CGRect)rectEnclosingKeyplane:(id)arg1 ;
-(void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(long long)arg3 orientation:(long long)arg4 ;
-(void)rebuildControlKeys:(unsigned long long)arg1 ;
-(BOOL)canDisplayTransition;
-(CGImageRef)keyImageWithToken:(id)arg1 ;
-(BOOL)showIntlKey;
-(BOOL)showDictationKey;
-(id<UIKeyboardSplitTransitionDataSource>)splitTransitionDataSource;
-(void)setSplitTransitionDataSource:(id<UIKeyboardSplitTransitionDataSource>)arg1 ;
@end

