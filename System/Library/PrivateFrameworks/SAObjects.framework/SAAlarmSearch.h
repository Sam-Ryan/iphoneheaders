/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAAlarmSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enabled;
-(NSURL *)identifier;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSArray *)frequency;
-(void)setFrequency:(NSArray *)arg1 ;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)minute;
-(void)setMinute:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
@end

