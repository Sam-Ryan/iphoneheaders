/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nsurlsessiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionTaskDelegatePrivate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithError:(id)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;

@end

