/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMNode.h>

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode

@property (readonly) BOOL mf_isContainedInTable; 
@property (readonly) BOOL mf_isContainedInQuoteBlock; 
@property (readonly) DOMElement * mf_containingQuoteBlockElement; 
@property (copy,readonly) NSString * tagName; 
@property (readonly) DOMCSSStyleDeclaration * style; 
@property (readonly) int offsetLeft; 
@property (readonly) int offsetTop; 
@property (readonly) int offsetWidth; 
@property (readonly) int offsetHeight; 
@property (readonly) int clientLeft; 
@property (readonly) int clientTop; 
@property (readonly) int clientWidth; 
@property (readonly) int clientHeight; 
@property (assign) int scrollLeft; 
@property (assign) int scrollTop; 
@property (readonly) int scrollWidth; 
@property (readonly) int scrollHeight; 
@property (readonly) DOMElement * offsetParent; 
@property (copy) NSString * innerHTML; 
@property (copy) NSString * outerHTML; 
@property (copy) NSString * className; 
@property (copy,readonly) NSString * innerText; 
@property (readonly) DOMElement * previousElementSibling; 
@property (readonly) DOMElement * nextElementSibling; 
@property (readonly) DOMElement * firstElementChild; 
@property (readonly) DOMElement * lastElementChild; 
@property (readonly) unsigned childElementCount; 
+(BOOL)isRichTextStyle:(id)arg1 ;
+(id)_DOMElementFromJSContext:(OpaqueJSContextRef)arg1 value:(OpaqueJSValueRef)arg2 ;
-(void)mf_stripCSSStyle;
-(BOOL)isRichTextElementType;
-(BOOL)hasMarginsOfZero;
-(void)recursivelyRemoveMailAttributes;
-(DOMElement *)mf_containingQuoteBlockElement;
-(id)mf_computedBackgroundColor;
-(BOOL)isRichTextElement;
-(int)mf_quoteLevelDelta;
-(BOOL)mf_isContainedInTable;
-(BOOL)mf_isContainedInQuoteBlock;
-(BOOL)mf_isContainedInAnyElementInSet:(id)arg1 ;
-(BOOL)mf_hasBackgroundColorOrImage;
-(BOOL)selectable;
-(BOOL)hasCustomLineHeight;
-(BOOL)exceedsStructuralComplexity:(int)arg1 ;
-(BOOL)isHidden;
-(BOOL)inDocument;
-(id)tapHighlightColor;
-(BOOL)touchCalloutEnabled;
-(void)getTextWritingDirection:(long long*)arg1 override:(BOOL*)arg2 ;
-(int)structuralComplexityContribution;
-(id)_getURLAttribute:(id)arg1 ;
-(CTFontRef)_font;
-(BOOL)isFocused;
-(BOOL)matches:(id)arg1 ;
-(DOMElement *)previousElementSibling;
-(DOMElement *)lastElementChild;
-(unsigned)childElementCount;
-(id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 :(id)arg2 ;
-(id)querySelector:(id)arg1 ;
-(int)offsetLeft;
-(int)offsetTop;
-(int)clientLeft;
-(int)clientTop;
-(DOMElement *)offsetParent;
-(void)setOuterHTML:(NSString *)arg1 ;
-(id)classList;
-(id)webkitRegionOverset;
-(void)setAttribute:(id)arg1 :(id)arg2 ;
-(id)getAttributeNode:(id)arg1 ;
-(id)setAttributeNode:(id)arg1 ;
-(id)removeAttributeNode:(id)arg1 ;
-(id)getAttributeNS:(id)arg1 localName:(id)arg2 ;
-(id)getAttributeNS:(id)arg1 :(id)arg2 ;
-(void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3 ;
-(void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)removeAttributeNS:(id)arg1 localName:(id)arg2 ;
-(void)removeAttributeNS:(id)arg1 :(id)arg2 ;
-(id)getAttributeNodeNS:(id)arg1 localName:(id)arg2 ;
-(id)getAttributeNodeNS:(id)arg1 :(id)arg2 ;
-(id)setAttributeNodeNS:(id)arg1 ;
-(BOOL)hasAttributeNS:(id)arg1 localName:(id)arg2 ;
-(BOOL)hasAttributeNS:(id)arg1 :(id)arg2 ;
-(void)scrollIntoView:(BOOL)arg1 ;
-(void)scrollIntoViewIfNeeded:(BOOL)arg1 ;
-(void)scrollByLines:(int)arg1 ;
-(void)scrollByPages:(int)arg1 ;
-(id)closest:(id)arg1 ;
-(BOOL)webkitMatchesSelector:(id)arg1 ;
-(int)clientWidth;
-(int)clientHeight;
-(DOMCSSStyleDeclaration *)style;
-(void)setAttribute:(id)arg1 value:(id)arg2 ;
-(void)setInnerHTML:(NSString *)arg1 ;
-(NSString *)innerHTML;
-(NSString *)innerText;
-(NSString *)tagName;
-(id)getAttribute:(id)arg1 ;
-(int)scrollLeft;
-(int)scrollTop;
-(int)scrollWidth;
-(int)scrollHeight;
-(void)setScrollLeft:(int)arg1 ;
-(void)setScrollTop:(int)arg1 ;
-(NSString *)className;
-(id)getElementsByTagName:(id)arg1 ;
-(int)offsetWidth;
-(int)offsetHeight;
-(DOMElement *)firstElementChild;
-(DOMElement *)nextElementSibling;
-(void)remove;
-(void)blur;
-(void)focus;
-(id)getElementsByClassName:(id)arg1 ;
-(BOOL)hasAttribute:(id)arg1 ;
-(void)removeAttribute:(id)arg1 ;
-(NSString *)outerHTML;
-(id)querySelectorAll:(id)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(id)children;
@end

