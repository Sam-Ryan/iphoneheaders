/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIView.h>
#import <TSReading/TSWPTextMagnifier.h>
#import <TSReading/TSWPTextMagnifierRendererDelegate.h>

@class TSWPRep, NSString, TSWPTextMagnifierTimeWeightedPoint, TSWPTextMagnifierRenderer;

@interface TSWPTextMagnifierRanged : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate> {

	TSWPRep* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	CGPoint _animationPoint;
	TSWPTextMagnifierTimeWeightedPoint* _weightedPoint;
	TSWPTextMagnifierRenderer* _magnifierRenderer;
	BOOL _inPlace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSWPRep * target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint; 
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully; 
@property (assign,nonatomic) CGPoint magnificationPoint; 
@property (assign,nonatomic) CGPoint offset;                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                           //@synthesize animationPoint=_animationPoint - In the implementation block
@property (nonatomic,readonly) NSString * underlayImageName; 
@property (nonatomic,readonly) NSString * overlayImageName; 
@property (nonatomic,readonly) NSString * maskImageName; 
-(void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 ;
-(void)canvasNeedsDisplay;
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)shouldHideCanvasLayer;
-(NSString *)underlayImageName;
-(NSString *)overlayImageName;
-(NSString *)maskImageName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTarget:(TSWPRep *)arg1 ;
-(TSWPRep *)target;
-(void)autoscrollWillNotStart;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)terminalPoint;
-(BOOL)terminalPointPlacedCarefully;
-(double)horizontalMovement;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(CGPoint)magnificationPoint;
-(CGPoint)animationPoint;
-(void)updateFrame;
-(double)horizontalMovementAtTime:(double)arg1 ;
-(BOOL)wasPlacedCarefullyAtTime:(double)arg1 ;
-(double)currentOffset;
@end

