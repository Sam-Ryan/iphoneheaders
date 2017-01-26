/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLAssistantServiceHandler.h>

@class SLFacebookSession, NSString;

@interface SLAssistantFacebookPost : NSObject <SLAssistantServiceHandler> {

	SLFacebookSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performPostRequestWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performCreateWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)session;
@end

