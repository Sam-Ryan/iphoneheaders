/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContactShadow.h>

@class TSUColor;

@interface TSDMutableContactShadow : TSDContactShadow

@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double perspective; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) double radius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) TSUColor * TSUColor; 
-(void)setTSUColor:(TSUColor *)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
-(void)setPerspective:(double)arg1 ;
@end

