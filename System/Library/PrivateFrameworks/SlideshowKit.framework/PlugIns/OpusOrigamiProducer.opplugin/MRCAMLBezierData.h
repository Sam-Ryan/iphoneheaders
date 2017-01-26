/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRCAMLBezierData : NSObject {

	double ax;
	double bx;
	double cx;
	double ay;
	double by;
	double cy;

}
-(double)sample_y_derivative:(double)arg1 ;
-(double)sample_x_derivative:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 ;
-(double)evaluate_inverseAtTime:(double)arg1 ;
-(double)solve_y:(double)arg1 epsilon:(double)arg2 ;
-(id)initWithControlPoints:(const double*)arg1 ;
-(double)solve_x:(double)arg1 epsilon:(double)arg2 ;
-(double)sample_x:(double)arg1 ;
-(double)sample_y:(double)arg1 ;
-(double)evaluatAtTime:(double)arg1 ;
@end

