/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class UIColor, NSString;

@interface SXStrokeStyle : SXJSONObject

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSString * width; 
@property (nonatomic,readonly) int style; 
-(int)style;
-(NSString *)width;
-(UIColor *)color;
-(id)convertibleValueFromValue:(id)arg1 ;
-(int)styleWithValue:(id)arg1 withType:(int)arg2 ;
-(id)widthWithValue:(id)arg1 withType:(int)arg2 ;
@end

