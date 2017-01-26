/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSData, NSString, NSError, ACAccount, NSDictionary;

@interface ACRemoteDeviceMessage : NSObject {

	NSMutableDictionary* _payload;
	NSData* _data;
	BOOL _needsReply;
	BOOL _isReply;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * sentMessageIdentifier; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSObject*<NSCoding> result; 
@property (nonatomic,readonly) NSString * command; 
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL needsReply;                                 //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                    //@synthesize isReply=_isReply - In the implementation block
+(id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
+(id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
+(id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3 ;
-(NSObject*<NSCoding>)result;
-(NSString *)sentMessageIdentifier;
-(BOOL)success;
-(NSError *)error;
-(NSDictionary *)options;
-(NSString *)command;
-(ACAccount *)account;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)_invalidateCachedData;
-(void)_setPayloadObject:(id)arg1 forKey:(id)arg2 ;
-(id)_payloadObjectForKey:(id)arg1 ;
-(void)setIsReply:(BOOL)arg1 ;
-(BOOL)isReply;
-(void)setNeedsReply:(BOOL)arg1 ;
-(BOOL)needsReply;
@end

