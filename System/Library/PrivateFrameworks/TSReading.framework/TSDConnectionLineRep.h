/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeRep.h>

@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {

	TSDPathSource* mLastPathSource;

}
+(BOOL)canConnectToRep:(id)arg1 ;
+(id)infosToConnectFromSelection:(id)arg1 withInteractiveCanvasController:(id)arg2 ;
-(CGRect)targetRectForEditMenu;
-(BOOL)directlyManagesLayerContent;
-(BOOL)shouldCreateKnobs;
-(unsigned long long)enabledKnobMask;
-(BOOL)shouldCreateSelectionKnobs;
-(BOOL)shouldShowCommentHighlight;
-(double)shortestDistanceToPoint:(CGPoint)arg1 countAsHit:(BOOL*)arg2 ;
-(id)additionalRepsForDragging;
-(void)updateFromLayout;
-(BOOL)canUseSpecializedHitRegionForKnob:(id)arg1 ;
-(CGPoint)i_dragOffset;
-(BOOL)i_editMenuOverlapsEndKnobs;
-(BOOL)shouldShowSmartShapeKnobs;
-(BOOL)canBeUsedForImageMask;
-(BOOL)canMakePathEditable;
-(BOOL)canConnectToRep:(id)arg1 ;
-(id)connectionLineLayout;
-(BOOL)p_isConnected;
-(BOOL)p_isConnectedToLockedObjects;
-(BOOL)p_controlKnobVisible;
-(void)dealloc;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(BOOL)isSelectable;
-(BOOL)isDraggable;
@end
