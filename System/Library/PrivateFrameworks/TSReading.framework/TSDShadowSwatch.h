/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathPainter.h>

@class TSDShadow, NSString;

@interface TSDShadowSwatch : NSObject <TSDPathPainter> {

	TSDShadow* mShadow;

}

@property (nonatomic,readonly) TSDShadow * shadow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 forImage:(CGImageRef)arg3 swatchRect:(CGRect)arg4 wantsStroke:(BOOL)arg5 ;
-(void)p_drawContactShadowInContext:(CGContextRef)arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5 ;
-(void)p_drawCurvedShadowInContext:(CGContextRef)arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5 ;
-(id)initWithShadow:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(TSDShadow *)shadow;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
@end
