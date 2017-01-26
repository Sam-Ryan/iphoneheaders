/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSSet;

@interface TSKWarning : NSObject {

	NSString* _message;
	NSDictionary* _userInfo;
	NSSet* _affectedObjects;
	NSString* _localizedLocation;

}

@property (nonatomic,copy) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSSet * affectedObjects;                   //@synthesize affectedObjects=_affectedObjects - In the implementation block
@property (nonatomic,copy) NSString * localizedLocation;              //@synthesize localizedLocation=_localizedLocation - In the implementation block
+(id)warningWithMessage:(id)arg1 ;
+(id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2 ;
+(id)warningWithMessage:(id)arg1 affectedObject:(id)arg2 ;
-(void)setLocalizedLocation:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 affectedObjects:(id)arg2 ;
-(void)setAffectedObjects:(NSSet *)arg1 ;
-(NSString *)localizedLocation;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSSet *)affectedObjects;
@end

