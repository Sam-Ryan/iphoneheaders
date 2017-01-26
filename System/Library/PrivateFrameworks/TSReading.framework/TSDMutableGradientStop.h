/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDGradientStop.h>

@class TSUColor;

@interface TSDMutableGradientStop : TSDGradientStop

@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double fraction; 
@property (assign,nonatomic) double inflection; 
-(void)setFraction:(double)arg1 ;
-(void)setInflection:(double)arg1 ;
-(void)setColor:(TSUColor *)arg1 ;
@end

