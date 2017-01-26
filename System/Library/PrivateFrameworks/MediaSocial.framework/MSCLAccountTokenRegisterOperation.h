/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class MSCLAccount, SKUIMediaSocialAuthor, SSVMediaSocialPostExternalDestination, NSLock;

@interface MSCLAccountTokenRegisterOperation : SSVComplexOperation {

	MSCLAccount* _account;
	SKUIMediaSocialAuthor* _author;
	SSVMediaSocialPostExternalDestination* _externalDestination;
	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)_requestWithURL:(id)arg1 ;
-(id)_componentsWithURL:(id)arg1 ;
-(id)initWithAuthor:(id)arg1 externalDestination:(id)arg2 account:(id)arg3 ;
-(id)_queryItems;
@end

