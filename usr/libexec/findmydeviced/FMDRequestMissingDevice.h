/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <findmydeviced/FMDRequest.h>

@class FMDServiceProvider, FMDFMIPMissingDeviceInfo, NSString;

@interface FMDRequestMissingDevice : FMDRequest {

	FMDServiceProvider* _provider;
	FMDFMIPMissingDeviceInfo* _missingDeviceInfo;
	NSString* _shortLivedToken;

}

@property (nonatomic,retain) FMDServiceProvider * provider;                             //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) FMDFMIPMissingDeviceInfo * missingDeviceInfo;              //@synthesize missingDeviceInfo=_missingDeviceInfo - In the implementation block
@property (nonatomic,retain) NSString * shortLivedToken;                                //@synthesize shortLivedToken=_shortLivedToken - In the implementation block
-(void)deinitializeRequest;
-(id)requestUrl;
-(BOOL)showAuthFailedMessage;
-(BOOL)canRequestBeRetriedNow;
-(BOOL)canReplace:(id)arg1 ;
-(FMDFMIPMissingDeviceInfo *)missingDeviceInfo;
-(id)initWithProvider:(id)arg1 token:(id)arg2 andMissingDeviceInfo:(id)arg3 ;
-(void)setMissingDeviceInfo:(FMDFMIPMissingDeviceInfo *)arg1 ;
-(FMDServiceProvider *)provider;
-(void)setProvider:(FMDServiceProvider *)arg1 ;
-(id)authToken;
-(void)setShortLivedToken:(NSString *)arg1 ;
-(NSString *)shortLivedToken;
-(id)requestBody;
@end
