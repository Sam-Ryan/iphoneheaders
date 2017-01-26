/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {

	NSString* _initialURLString;
	BOOL _flushCache;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	NSString* _oneTimePassword;
	NSString* _machineId;
	/*^block*/id _handler;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (assign,nonatomic) BOOL flushCache;                       //@synthesize flushCache=_flushCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(id)protocolVersion;
-(id)bodyDictionary;
-(void)dealloc;
-(void)setFlushCache:(BOOL)arg1 ;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg1 ;
-(void)setDeviceProvisioningMachineId:(id)arg1 ;
-(id)urlCredential;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(id)initWithURLString:(id)arg1 ;
-(NSURLRequest *)urlRequest;
-(id)urlString;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(BOOL)flushCache;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
@end

