/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <findmydeviced/FMDRequest.h>

@class FMDServiceProvider, NSDictionary, NSURL;

@interface FMDRequestAckRegister : FMDRequest {

	FMDServiceProvider* _provider;
	NSDictionary* _registerCommand;
	NSURL* _ackURL;

}

@property (nonatomic,retain) FMDServiceProvider * provider;               //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSDictionary * registerCommand;              //@synthesize registerCommand=_registerCommand - In the implementation block
@property (nonatomic,retain) NSURL * ackURL;                              //@synthesize ackURL=_ackURL - In the implementation block
-(void)deinitializeRequest;
-(id)requestUrl;
-(BOOL)canReplace:(id)arg1 ;
-(void)setAckURL:(NSURL *)arg1 ;
-(NSURL *)ackURL;
-(void)setRegisterCommand:(NSDictionary *)arg1 ;
-(NSDictionary *)registerCommand;
-(id)initWithProvider:(id)arg1 registerCommand:(id)arg2 ackURL:(id)arg3 ;
-(FMDServiceProvider *)provider;
-(void)setProvider:(FMDServiceProvider *)arg1 ;
-(id)requestBody;
@end
