/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASyncVerificationResult : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long fail; 
@property (nonatomic,copy) NSArray * failedObjectIds; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long total; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)verificationResult;
+(id)verificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)total;
-(void)setTotal:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(long long)fail;
-(void)setFail:(long long)arg1 ;
-(NSArray *)failedObjectIds;
-(void)setFailedObjectIds:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

