/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, SSLookupProperties, NSString;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	long long _personalizationStyle;
	SSLookupProperties* _properties;
	long long _resultFilters;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle; 
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,nonatomic) BOOL authenticatesIfNeeded; 
@property (assign,nonatomic) long long personalizationStyle;                             //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (assign,nonatomic) long long resultFilters;                                    //@synthesize resultFilters=_resultFilters - In the implementation block
@property (nonatomic,copy,readonly) SSLookupProperties * _lookupProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SSLookupProperties *)_lookupProperties;
-(void)_setTimeoutInterval:(id)arg1 ;
-(long long)resultFilters;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(id)initWithLocation:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setResultFilters:(long long)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(long long)personalizationStyle;
-(long long)localizationStyle;
-(BOOL)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(NSString *)keyProfile;
-(void)startWithLookupBlock:(/*^block*/id)arg1 ;
-(void)setLocalizationStyle:(long long)arg1 ;
@end

