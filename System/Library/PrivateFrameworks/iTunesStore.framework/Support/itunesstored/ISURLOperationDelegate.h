/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISURLOperationDelegate <ISOperationDelegate>
@optional
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2;
-(id)operation:(id)arg1 needNewBodyStream:(id)arg2;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3;
-(void)operation:(id)arg1 willSendRequest:(id)arg2;
-(BOOL)operation:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2;

@end

