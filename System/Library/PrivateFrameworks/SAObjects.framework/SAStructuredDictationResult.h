/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAStructuredDictationResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * items; 
+(id)structuredDictationResult;
+(id)structuredDictationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
@end
