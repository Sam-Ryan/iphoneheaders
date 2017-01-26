/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@interface XBLaunchImageProviderClient : BSBaseXPCClient
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)_sendMessageType:(long long)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(id)init;
-(void)killService;
-(id)initWithDefaultService;
-(void)launchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushContextForApplicationWithCompatibilityInfo:(id)arg1 ;
@end

