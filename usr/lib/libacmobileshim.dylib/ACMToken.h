/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACFPrincipal, NSDate, NSString, NSData, NSNumber;

@interface ACMToken : NSObject {

	ACFPrincipal* _principal;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	NSString* _nonce;
	NSData* _tokenData;
	NSString* _userPreferences;
	NSNumber* _personID;
	NSNumber* _isTwoStepVerificationRequired;

}

@property (retain) ACFPrincipal * principal;                              //@synthesize principal=_principal - In the implementation block
@property (retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * tokenString; 
@property (retain) NSData * tokenData;                                    //@synthesize tokenData=_tokenData - In the implementation block
@property (retain) NSString * nonce;                                      //@synthesize nonce=_nonce - In the implementation block
@property (retain) NSString * userPreferences;                            //@synthesize userPreferences=_userPreferences - In the implementation block
@property (retain) NSNumber * personID;                                   //@synthesize personID=_personID - In the implementation block
@property (retain) NSNumber * isTwoStepVerificationRequired;              //@synthesize isTwoStepVerificationRequired=_isTwoStepVerificationRequired - In the implementation block
+(id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenString:(id)arg3 ;
+(id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenData:(id)arg3 ;
-(void)dealloc;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSData *)tokenData;
-(NSString *)tokenString;
-(void)setTokenString:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setNonce:(NSString *)arg1 ;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(NSNumber *)isTwoStepVerificationRequired;
-(void)setIsTwoStepVerificationRequired:(NSNumber *)arg1 ;
-(NSString *)userPreferences;
-(void)setUserPreferences:(NSString *)arg1 ;
-(ACFPrincipal *)principal;
-(NSString *)nonce;
@end

