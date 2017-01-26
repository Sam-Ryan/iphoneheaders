/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString;

@interface MANetworkService : NSObject <NSURLSessionDataDelegate> {

	BOOL _allowInvalidCert;

}

@property (assign) BOOL allowInvalidCert;                           //@synthesize allowInvalidCert=_allowInvalidCert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)allowInvalidCert;
-(void)setAllowInvalidCert:(BOOL)arg1 ;
@end

