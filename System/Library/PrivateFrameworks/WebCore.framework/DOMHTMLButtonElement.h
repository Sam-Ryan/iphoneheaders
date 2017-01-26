/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * name; 
@property (copy) NSString * type; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
@property (copy) NSString * accessKey; 
-(int)structuralComplexityContribution;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(id)formAction;
-(void)setFormAction:(id)arg1 ;
-(id)formEnctype;
-(void)setFormEnctype:(id)arg1 ;
-(id)formMethod;
-(void)setFormMethod:(id)arg1 ;
-(BOOL)formNoValidate;
-(void)setFormNoValidate:(BOOL)arg1 ;
-(id)formTarget;
-(void)setFormTarget:(id)arg1 ;
-(BOOL)willValidate;
-(id)validationMessage;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(void)click;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(id)labels;
-(id)validity;
@end

