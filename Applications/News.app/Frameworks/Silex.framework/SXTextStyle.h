/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class NSString, UIColor, SXShadow, SXTextDecoration, SXJSONArray, SXTextStroke;

@interface SXTextStyle : SXJSONObject

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) long long fontSize; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) SXShadow * textShadow; 
@property (nonatomic,readonly) long long textTransform; 
@property (nonatomic,readonly) double tracking; 
@property (nonatomic,readonly) SXTextDecoration * underline; 
@property (nonatomic,readonly) SXTextDecoration * strikethrough; 
@property (nonatomic,readonly) SXJSONArray * listStyle; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) SXTextStroke * stroke; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXTextStroke *)stroke;
-(int)verticalAlignment;
-(UIColor *)backgroundColor;
-(SXJSONArray *)listStyle;
-(SXTextDecoration *)strikethrough;
-(SXTextDecoration *)underline;
-(double)tracking;
-(long long)textTransform;
-(SXShadow *)textShadow;
-(UIColor *)textColor;
-(long long)fontSize;
-(NSString *)fontName;
-(NSString *)identifier;
-(int)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)textTransformWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)fontSizeWithValue:(id)arg1 withType:(int)arg2 ;
@end
