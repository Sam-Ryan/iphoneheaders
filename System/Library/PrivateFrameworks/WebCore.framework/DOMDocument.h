/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMNode.h>

@class WebFrame, DOMDocumentType, DOMImplementation, DOMElement, NSString, DOMAbstractView, DOMStyleSheetList, DOMHTMLElement, DOMHTMLCollection;

@interface DOMDocument : DOMNode

@property (nonatomic,readonly) WebFrame * webFrame; 
@property (readonly) DOMDocumentType * doctype; 
@property (readonly) DOMImplementation * implementation; 
@property (readonly) DOMElement * documentElement; 
@property (copy,readonly) NSString * inputEncoding; 
@property (copy,readonly) NSString * xmlEncoding; 
@property (copy) NSString * xmlVersion; 
@property (assign) BOOL xmlStandalone; 
@property (copy) NSString * documentURI; 
@property (readonly) DOMAbstractView * defaultView; 
@property (readonly) DOMStyleSheetList * styleSheets; 
@property (copy) NSString * title; 
@property (copy,readonly) NSString * referrer; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * URL; 
@property (copy) NSString * cookie; 
@property (retain) DOMHTMLElement * body; 
@property (readonly) DOMHTMLCollection * images; 
@property (readonly) DOMHTMLCollection * applets; 
@property (readonly) DOMHTMLCollection * links; 
@property (readonly) DOMHTMLCollection * forms; 
@property (readonly) DOMHTMLCollection * anchors; 
@property (copy,readonly) NSString * lastModified; 
@property (copy) NSString * charset; 
@property (copy,readonly) NSString * defaultCharset; 
@property (copy,readonly) NSString * readyState; 
@property (copy,readonly) NSString * characterSet; 
@property (copy,readonly) NSString * preferredStylesheetSet; 
@property (copy) NSString * selectedStylesheetSet; 
@property (readonly) DOMElement * activeElement; 
-(void)dd_resetResults;
-(id)createBlockPlaceholder;
-(id)_documentRange;
-(id)URLWithAttributeString:(id)arg1 ;
-(WebFrame *)webFrame;
-(DOMDocumentType *)doctype;
-(DOMImplementation *)implementation;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(NSString *)arg1 ;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1 ;
-(NSString *)documentURI;
-(void)setDocumentURI:(NSString *)arg1 ;
-(NSString *)referrer;
-(DOMHTMLCollection *)applets;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(NSString *)defaultCharset;
-(NSString *)preferredStylesheetSet;
-(NSString *)selectedStylesheetSet;
-(void)setSelectedStylesheetSet:(NSString *)arg1 ;
-(DOMElement *)activeElement;
-(id)compatMode;
-(id)currentScript;
-(id)scrollingElement;
-(id)lastElementChild;
-(unsigned)childElementCount;
-(id)createComment:(id)arg1 ;
-(id)createCDATASection:(id)arg1 ;
-(id)createProcessingInstruction:(id)arg1 data:(id)arg2 ;
-(id)createProcessingInstruction:(id)arg1 :(id)arg2 ;
-(id)createAttribute:(id)arg1 ;
-(id)createEntityReference:(id)arg1 ;
-(id)importNode:(id)arg1 deep:(BOOL)arg2 ;
-(id)importNode:(id)arg1 :(BOOL)arg2 ;
-(id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2 ;
-(id)createAttributeNS:(id)arg1 :(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 :(id)arg2 ;
-(id)adoptNode:(id)arg1 ;
-(id)createEvent:(id)arg1 ;
-(id)createNodeIterator:(id)arg1 :(unsigned)arg2 :(id)arg3 :(BOOL)arg4 ;
-(id)createTreeWalker:(id)arg1 whatToShow:(unsigned)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4 ;
-(id)createTreeWalker:(id)arg1 :(unsigned)arg2 :(id)arg3 :(BOOL)arg4 ;
-(id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2 ;
-(id)getOverrideStyle:(id)arg1 :(id)arg2 ;
-(id)createExpression:(id)arg1 resolver:(id)arg2 ;
-(id)createExpression:(id)arg1 :(id)arg2 ;
-(id)createNSResolver:(id)arg1 ;
-(id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5 ;
-(id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5 ;
-(BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3 ;
-(BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 ;
-(BOOL)execCommand:(id)arg1 ;
-(BOOL)queryCommandEnabled:(id)arg1 ;
-(BOOL)queryCommandIndeterm:(id)arg1 ;
-(BOOL)queryCommandState:(id)arg1 ;
-(BOOL)queryCommandSupported:(id)arg1 ;
-(id)queryCommandValue:(id)arg1 ;
-(id)getElementsByName:(id)arg1 ;
-(id)elementFromPoint:(int)arg1 y:(int)arg2 ;
-(id)caretRangeFromPoint:(int)arg1 y:(int)arg2 ;
-(id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 ;
-(id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3 ;
-(BOOL)hasFocus;
-(id)webkitGetNamedFlows;
-(id)createTouch:(id)arg1 target:(id)arg2 identifier:(int)arg3 pageX:(int)arg4 pageY:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 ;
-(id)createTouchList;
-(id)querySelector:(id)arg1 ;
-(id)getComputedStyle:(id)arg1 :(id)arg2 ;
-(id)createElementNS:(id)arg1 qualifiedName:(id)arg2 ;
-(id)createElementNS:(id)arg1 :(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)domain;
-(DOMHTMLCollection *)images;
-(id)origin;
-(id)contentType;
-(DOMHTMLElement *)body;
-(id)createRange;
-(NSString *)URL;
-(id)createCSSStyleDeclaration;
-(id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2 ;
-(id)createElement:(id)arg1 ;
-(DOMElement *)documentElement;
-(DOMHTMLCollection *)links;
-(DOMHTMLCollection *)forms;
-(id)getElementsByTagName:(id)arg1 ;
-(id)firstElementChild;
-(id)createNodeIterator:(id)arg1 whatToShow:(unsigned)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4 ;
-(void)setBody:(DOMHTMLElement *)arg1 ;
-(DOMStyleSheetList *)styleSheets;
-(BOOL)hidden;
-(void)setCookie:(NSString *)arg1 ;
-(id)visibilityState;
-(id)createTextNode:(id)arg1 ;
-(id)getElementsByClassName:(id)arg1 ;
-(id)createDocumentFragment;
-(id)querySelectorAll:(id)arg1 ;
-(DOMAbstractView *)defaultView;
-(id)getElementById:(id)arg1 ;
-(NSString *)cookie;
-(NSString *)lastModified;
-(NSString *)readyState;
-(DOMHTMLCollection *)anchors;
-(id)children;
-(id)head;
-(NSString *)characterSet;
@end

