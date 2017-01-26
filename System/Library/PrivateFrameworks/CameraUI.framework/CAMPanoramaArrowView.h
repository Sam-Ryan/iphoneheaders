/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, CAShapeLayer;

@interface CAMPanoramaArrowView : UIView {

	UIImageView* _arrowHead;
	UIView* _arrowTail;
	CAShapeLayer* _arrowTailPiecesLayer;
	CGPathRef _currentTailPiecesPath;
	CGRect _arrowTailRect;
	double _currentNormalizedSpeed;
	double _tailBiggestDelta;
	double _tailBigDelta;
	double _tailMediumDelta;
	double _tailSmallDelta;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reset;
-(CGSize)intrinsicContentSize;
-(void)_updateTailWithAnimationDuration:(double)arg1 ;
-(CGPathRef)_newTailPiecesPathOfWidth:(double*)arg1 ;
-(void)animateWithNormalizedSpeed:(double)arg1 duration:(double)arg2 ;
@end

