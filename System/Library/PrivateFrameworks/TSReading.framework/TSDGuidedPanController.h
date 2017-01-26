/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDPanGuide;
#import <TSReading/TSReading-Structs.h>
@class TSDInteractiveCanvasController, TSDCanvasView, TSDCanvasLayer, UIScrollView;

@interface TSDGuidedPanController : NSObject {

	TSDInteractiveCanvasController* _interactiveCanvasController;
	TSDCanvasView* _canvasView;
	TSDCanvasLayer* _canvasLayer;
	UIScrollView* _canvasScrollView;
	id<TSDPanGuide> _guide;
	CGPoint _startPoint;
	CGPoint _movement;
	CGPoint _velocity;

}

@property (nonatomic,retain) id<TSDPanGuide> guide;                                                     //@synthesize guide=_guide - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS68 touchContentPlacement; 
@property (nonatomic,readonly) SCD_Struct_TS68 centerPlusMovementContentPlacement; 
@property (assign,nonatomic) TSDInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (assign,nonatomic) TSDCanvasView * canvasView;                                                //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic) TSDCanvasLayer * canvasLayer;                                              //@synthesize canvasLayer=_canvasLayer - In the implementation block
@property (assign,nonatomic) UIScrollView * canvasScrollView;                                           //@synthesize canvasScrollView=_canvasScrollView - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                                                        //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint movement;                                                          //@synthesize movement=_movement - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                                                          //@synthesize velocity=_velocity - In the implementation block
-(void)setCanvasView:(TSDCanvasView *)arg1 ;
-(TSDCanvasView *)canvasView;
-(TSDCanvasLayer *)canvasLayer;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(void)setInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 ;
-(id)p_currentContentLocationWithPlacement:(SCD_Struct_TS68)arg1 ;
-(void)p_willBegin;
-(SCD_Struct_TS68)touchContentPlacement;
-(CATransform3D)p_transformForContentLocation:(id)arg1 placement:(SCD_Struct_TS68)arg2 ;
-(void)p_scrollToContentLocation:(id)arg1 placement:(SCD_Struct_TS68)arg2 ;
-(void)p_didEnd;
-(id)p_convertContentLocation:(id)arg1 fromPlacement:(SCD_Struct_TS68)arg2 toPlacement:(SCD_Struct_TS68)arg3 ;
-(CGPoint)p_boundsOffsetForContentLocation:(id)arg1 placement:(SCD_Struct_TS68)arg2 ;
-(id)convertContentLocation:(id)arg1 fromPlacement:(SCD_Struct_TS68)arg2 toPlacement:(SCD_Struct_TS68)arg3 ;
-(SCD_Struct_TS68)centerPlusMovementContentPlacement;
-(void)setCanvasLayer:(TSDCanvasLayer *)arg1 ;
-(UIScrollView *)canvasScrollView;
-(void)setCanvasScrollView:(UIScrollView *)arg1 ;
-(id<TSDPanGuide>)guide;
-(void)setGuide:(id<TSDPanGuide>)arg1 ;
-(void)dealloc;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocity;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)movement;
-(void)setMovement:(CGPoint)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
@end
