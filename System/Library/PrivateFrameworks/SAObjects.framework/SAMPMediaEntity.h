/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMPMediaEntity : SADomainObject

@property (nonatomic,copy) NSString * sortTitle; 
@property (nonatomic,copy) NSString * title; 
+(id)mediaEntity;
+(id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(id)encodedClassName;
@end

