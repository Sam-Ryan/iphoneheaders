/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest {

	SLFacebookRegistrationInfo* _registrationInfo;

}
-(id)_urlEncodedString:(id)arg1 ;
-(id)_tokenSecret;
-(void)_prepareRequestForValidation;
-(id)_sha1HashForString:(id)arg1 ;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
@end
