/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStroke.h>

@class TSUColor, TSDStrokePattern;

@interface TSDMutableStroke : TSDStroke

@property (assign,nonatomic) BOOL dontClearBackground; 
@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) TSDStrokePattern * pattern; 
+(id)emptyStroke;
+(id)stroke;
-(void)setDontClearBackground:(BOOL)arg1 ;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

