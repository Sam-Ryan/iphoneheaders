/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand

@property (nonatomic,copy) NSArray * personSearches; 
@property (nonatomic,copy) NSNumber * resultsLimit; 
+(id)multiPersonSearch;
+(id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSArray *)personSearches;
-(void)setPersonSearches:(NSArray *)arg1 ;
-(NSNumber *)resultsLimit;
-(void)setResultsLimit:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

