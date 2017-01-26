/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SBPieChartView : UIView {

	NSArray* _slices;
	double _valueTotal;
	double _radius;
	CGPoint _center;
	double _defaultRotation;

}
-(void)_updateMetrics;
-(void)_rotateContext;
-(void)_drawSlice:(id)arg1 atValue:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSlices:(id)arg1 ;
@end
