/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * definition; 
@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSArray * variations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionEntry;
+(id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)definition;
-(id)groupIdentifier;
-(NSArray *)examples;
-(void)setExamples:(NSArray *)arg1 ;
-(void)setDefinition:(NSString *)arg1 ;
-(NSArray *)variations;
-(void)setVariations:(NSArray *)arg1 ;
-(id)encodedClassName;
@end
