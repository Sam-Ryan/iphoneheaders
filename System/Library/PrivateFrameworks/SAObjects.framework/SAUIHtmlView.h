/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIHtmlView : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * html; 
+(id)htmlView;
+(id)htmlViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(id)encodedClassName;
@end

