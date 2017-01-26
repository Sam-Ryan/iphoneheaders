/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;

@required
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
-(void)cancelAuthenticationChallenge:(id)arg1;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

@end

