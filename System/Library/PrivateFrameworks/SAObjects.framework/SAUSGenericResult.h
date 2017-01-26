/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUSGenericResult : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * actionButton; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,copy) NSString * secondaryTitle; 
@property (nonatomic,retain) SAUIImageResource * thumbnail; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * titleMaxLines; 
+(id)genericResult;
+(id)genericResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SAUIImageResource *)thumbnail;
-(void)setThumbnail:(SAUIImageResource *)arg1 ;
-(id)groupIdentifier;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(NSArray *)descriptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setTitleMaxLines:(NSNumber *)arg1 ;
-(NSString *)footnote;
-(NSString *)secondaryTitle;
-(NSNumber *)titleMaxLines;
-(SAUIAppPunchOut *)actionButton;
-(BOOL)centered;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)setActionButton:(SAUIAppPunchOut *)arg1 ;
-(id)encodedClassName;
@end

