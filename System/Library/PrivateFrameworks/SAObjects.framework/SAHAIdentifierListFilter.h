/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAHAFilter.h>

@class NSArray;

@interface SAHAIdentifierListFilter : SAHAFilter

@property (nonatomic,copy) NSArray * identifiers; 
+(id)identifierListFilter;
+(id)identifierListFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(id)groupIdentifier;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(NSArray *)identifiers;
-(id)encodedClassName;
@end

