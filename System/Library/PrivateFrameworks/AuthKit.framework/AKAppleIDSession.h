/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSURLSessionAppleIDContext.h>

@class NSString, AKAnisetteProvisioningController, AKAnisetteData, NSLock;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {

	NSString* _serviceID;
	AKAnisetteProvisioningController* _anisetteController;
	AKAnisetteData* _proxiedAnisetteData;
	NSLock* _anisetteControllerLock;

}

@property (nonatomic,retain) AKAnisetteData * proxiedAnisetteData;              //@synthesize proxiedAnisetteData=_proxiedAnisetteData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)relevantHTTPStatusCodes;
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(BOOL*)arg3 ;
-(id)appleIDHeadersForRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_generateAppleIDHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_anisetteController;
-(AKAnisetteData *)proxiedAnisetteData;
-(void)setProxiedAnisetteData:(AKAnisetteData *)arg1 ;
@end

