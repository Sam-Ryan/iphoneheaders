/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString, SSAccount;

@interface AAUIMyPhotoRequest : AARequest {

	ACAccount* _account;
	NSString* _serverCacheTag;
	SSAccount* _iTunesAccount;

}

@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setiTunesAccount:(id)arg1 ;
-(SSAccount *)iTunesAccount;
-(id)initWithAccount:(id)arg1 ;
@end

