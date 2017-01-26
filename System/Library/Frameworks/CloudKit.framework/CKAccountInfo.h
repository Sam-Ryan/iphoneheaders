/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKAccountInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUnitTestingAccount;
	BOOL _accountWantsPushRegistration;
	NSString* _email;
	NSString* _password;

}

@property (nonatomic,readonly) NSString * email;                             //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL isUnitTestingAccount;                      //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) BOOL accountWantsPushRegistration;              //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)password;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(NSString *)email;
-(BOOL)isUnitTestingAccount;
-(id)CKPropertiesDescription;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(BOOL)accountWantsPushRegistration;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
@end

