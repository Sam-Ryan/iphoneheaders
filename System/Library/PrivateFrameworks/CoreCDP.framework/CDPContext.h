/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSNumber;

@interface CDPContext : NSObject <NSSecureCoding> {

	BOOL _isHSA2Account;
	BOOL _didUseSMSVerification;
	BOOL __useSecureBackupCachedPassphrase;
	BOOL __alwaysCreateEscrowRecord;
	NSDictionary* _authenticationResults;
	NSString* _appleID;
	NSString* _password;
	NSString* _passwordEquivToken;
	NSNumber* _dsid;
	NSString* _cachedLocalSecret;
	unsigned long long _cachedLocalSecretType;

}

@property (nonatomic,copy) NSDictionary * authenticationResults;                    //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                      //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * password;                                     //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * passwordEquivToken;                           //@synthesize passwordEquivToken=_passwordEquivToken - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                         //@synthesize dsid=_dsid - In the implementation block
@property (assign,nonatomic) BOOL isHSA2Account;                                    //@synthesize isHSA2Account=_isHSA2Account - In the implementation block
@property (assign,nonatomic) BOOL didUseSMSVerification;                            //@synthesize didUseSMSVerification=_didUseSMSVerification - In the implementation block
@property (nonatomic,copy) NSString * cachedLocalSecret;                            //@synthesize cachedLocalSecret=_cachedLocalSecret - In the implementation block
@property (assign,nonatomic) unsigned long long cachedLocalSecretType;              //@synthesize cachedLocalSecretType=_cachedLocalSecretType - In the implementation block
@property (assign,nonatomic) BOOL _useSecureBackupCachedPassphrase;                 //@synthesize _useSecureBackupCachedPassphrase=__useSecureBackupCachedPassphrase - In the implementation block
@property (assign,nonatomic) BOOL _alwaysCreateEscrowRecord;                        //@synthesize _alwaysCreateEscrowRecord=__alwaysCreateEscrowRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAuthenticationResults:(id)arg1 ;
-(NSDictionary *)authenticationResults;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(void)setPasswordEquivToken:(NSString *)arg1 ;
-(void)setIsHSA2Account:(BOOL)arg1 ;
-(BOOL)didUseSMSVerification;
-(void)setDidUseSMSVerification:(BOOL)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSNumber *)dsid;
-(NSString *)appleID;
-(void)setDsid:(NSNumber *)arg1 ;
-(void)updateWithAuthenticationResults:(id)arg1 ;
-(NSString *)passwordEquivToken;
-(void)set_alwaysCreateEscrowRecord:(BOOL)arg1 ;
-(void)set_useSecureBackupCachedPassphrase:(BOOL)arg1 ;
-(BOOL)isHSA2Account;
-(BOOL)_alwaysCreateEscrowRecord;
-(NSString *)cachedLocalSecret;
-(BOOL)_useSecureBackupCachedPassphrase;
-(unsigned long long)cachedLocalSecretType;
-(void)setCachedLocalSecret:(NSString *)arg1 ;
-(void)setCachedLocalSecretType:(unsigned long long)arg1 ;
@end

