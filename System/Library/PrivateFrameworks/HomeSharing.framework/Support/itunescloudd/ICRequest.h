/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:53 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@class NSString;

@interface ICRequest : HSRequest {

	long long _reason;
	long long _allowedRetryCount;
	NSString* _requestingBundleID;

}

@property (assign,nonatomic) long long reason;                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long allowedRetryCount;              //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleID;              //@synthesize requestingBundleID=_requestingBundleID - In the implementation block
-(NSString *)requestingBundleID;
-(void)setRequestingBundleID:(NSString *)arg1 ;
-(long long)allowedRetryCount;
-(long long)reason;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(void)setReason:(long long)arg1 ;
@end

