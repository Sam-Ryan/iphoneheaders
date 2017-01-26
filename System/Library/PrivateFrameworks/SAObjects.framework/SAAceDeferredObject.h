/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceCommand.h>
#import <SAObjects/SAClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SAAceDeferredObject : SABaseCommand <SAAceSerializable, SAAceCommand, SAClientBoundCommand, SAServerBoundCommand>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,retain) id<SAAceSerializable> value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)aceDeferredObject;
+(id)aceDeferredObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(id<SAAceSerializable>)value;
-(void)setValue:(id<SAAceSerializable>)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(NSArray *)callbacks;
-(void)setCallbacks:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

