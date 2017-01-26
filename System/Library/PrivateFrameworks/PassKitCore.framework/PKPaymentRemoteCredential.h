/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSURL;

@interface PKPaymentRemoteCredential : PKPaymentCredential {

	NSString* _identifier;
	long long _status;
	NSURL* _passURL;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                    //@synthesize passURL=_passURL - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
@end

