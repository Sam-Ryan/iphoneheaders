/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString, NSArray;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSNumber * globalTimeout; 
@property (nonatomic,copy) NSString * policyId; 
@property (nonatomic,copy) NSArray * routes; 
@property (nonatomic,copy) NSNumber * timeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicy;
+(id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setRoutes:(NSArray *)arg1 ;
-(NSArray *)routes;
-(id)groupIdentifier;
-(NSNumber *)globalTimeout;
-(void)setGlobalTimeout:(NSNumber *)arg1 ;
-(NSString *)policyId;
-(void)setPolicyId:(NSString *)arg1 ;
-(NSNumber *)timeToLive;
-(void)setTimeToLive:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

