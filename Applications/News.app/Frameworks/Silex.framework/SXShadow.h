/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class UIColor;

@interface SXShadow : SXJSONObject

@property (nonatomic,readonly) double radius; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) CGPoint offset; 
@property (nonatomic,readonly) UIColor * color; 
-(UIColor *)color;
-(CGPoint)offset;
-(double)opacity;
-(double)radius;
-(id)TSDShadow;
@end

