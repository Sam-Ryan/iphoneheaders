/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * cname; 
@property (nonatomic,copy) NSString * host; 
@property (nonatomic,copy) NSNumber * mptcp; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) NSString * resolver; 
@property (nonatomic,copy) NSString * resolverProtocol; 
@property (nonatomic,copy) NSString * routeId; 
@property (nonatomic,copy) NSNumber * timeout; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicyRoute;
+(id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)host;
-(void)setTimeout:(NSNumber *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)cname;
-(void)setCname:(NSString *)arg1 ;
-(NSNumber *)mptcp;
-(void)setMptcp:(NSNumber *)arg1 ;
-(NSString *)resolver;
-(void)setResolver:(NSString *)arg1 ;
-(NSString *)resolverProtocol;
-(void)setResolverProtocol:(NSString *)arg1 ;
-(NSString *)routeId;
-(void)setRouteId:(NSString *)arg1 ;
-(NSNumber *)timeout;
-(id)encodedClassName;
@end

