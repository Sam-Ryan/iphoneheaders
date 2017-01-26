/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACFKeychainItemInfo.h>

@class NSString, ACFPrincipal, NSData;

@interface ACMKeychainTokenInfo : ACFKeychainItemInfo

@property (retain) NSString * indicator; 
@property (retain) ACFPrincipal * principal; 
@property (retain) NSData * tokenData; 
+(id)keychainTokenInfoWithPrincipal:(id)arg1 ;
+(id)classCode;
+(id)keychainTokenInfoWithPrincipal:(id)arg1 indicator:(id)arg2 ;
-(id)init;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setIndicator:(NSString *)arg1 ;
-(NSString *)indicator;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(ACFPrincipal *)principal;
@end

