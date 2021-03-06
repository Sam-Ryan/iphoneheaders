/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCurvedShadow.h>

@class TSUColor;

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (assign,nonatomic) double curve; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) double opacity; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) TSUColor * TSUColor; 
-(void)setTSUColor:(TSUColor *)arg1 ;
-(void)setCurve:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
@end

