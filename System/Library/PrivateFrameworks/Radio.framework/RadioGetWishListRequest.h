/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _maxNumberOfTracks;

}

@property (assign,nonatomic) unsigned long long maxNumberOfTracks;              //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned long long)arg1 ;
@end

