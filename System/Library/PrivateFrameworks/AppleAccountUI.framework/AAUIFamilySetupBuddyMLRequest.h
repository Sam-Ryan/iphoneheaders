/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class SSAccount, NSString;

@interface AAUIFamilySetupBuddyMLRequest : AAFamilyRequest {

	SSAccount* _iTunesAccount;
	NSString* _inviteCode;

}

@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                             //@synthesize inviteCode=_inviteCode - In the implementation block
-(id)urlRequest;
-(id)urlString;
-(void)setiTunesAccount:(id)arg1 ;
-(BOOL)isUserInitiated;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(SSAccount *)iTunesAccount;
@end

