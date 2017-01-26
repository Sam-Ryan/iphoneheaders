/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAWebWebResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webResult;
+(id)webResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

