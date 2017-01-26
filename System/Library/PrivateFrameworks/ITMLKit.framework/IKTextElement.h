/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSMutableArray, NSAttributedString, NSArray, UIColor;

@interface IKTextElement : IKViewElement {

	IKTextParser* _textParser;
	NSMutableArray* _textBadges;
	unsigned long long _textStyle;

}

@property (nonatomic,retain,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) NSArray * badges; 
@property (nonatomic,readonly) unsigned long long textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) long long maxLines; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) UIColor * color; 
+(BOOL)shouldParseChildDOMElements;
-(id)textAttributes;
-(NSAttributedString *)text;
-(unsigned long long)alignment;
-(UIColor *)color;
-(unsigned long long)textStyle;
-(id)accessibilityText;
-(unsigned long long)_styleForTagName:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSArray *)badges;
-(id)attributedStringWithFont:(id)arg1 ;
-(long long)maxLines;
@end

