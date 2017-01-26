/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@protocol YTUserProfileRequestDelegate;
@class YTUserProfile;

@interface YTUserProfileRequest : YTXMLHTTPRequest {

	id<YTUserProfileRequestDelegate> _delegate;
	YTUserProfile* _profile;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(void)requestProfileForCurrentUser;
-(void)requestProfileForUsername:(id)arg1 ;
@end

