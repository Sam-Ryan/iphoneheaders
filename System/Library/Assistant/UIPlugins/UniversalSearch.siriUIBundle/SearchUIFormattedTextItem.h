/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol SearchUIFormattedTextItem <NSObject>
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,readonly) UIImage * glyph; 
@property (nonatomic,readonly) BOOL highlighted; 
@property (nonatomic,readonly) BOOL bold; 
@required
-(NSString *)text;
-(BOOL)highlighted;
-(UIImage *)glyph;
-(BOOL)bold;

@end

