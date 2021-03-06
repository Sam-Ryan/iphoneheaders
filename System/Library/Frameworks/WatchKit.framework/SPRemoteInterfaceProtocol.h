/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPRemoteInterfaceProtocol <NSObject>
@optional
-(void)receiveNativeComplicationRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replyTimingData:(id)arg1;
-(void)extensionDidBeginUsingWithLaunchEnv:(id)arg1 launchArgs:(id)arg2;
-(void)extensionWillEndUsing;

@required
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationWillResignActive:(id)arg1;
-(void)applicationDidFinishConnecting:(id)arg1;
-(void)dataInterfaceDidBecomeActive:(id)arg1;
-(void)dataInterfaceWillResignActive:(id)arg1;
-(void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
-(void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
-(void)applicationDidTerminate:(id)arg1;
-(void)applicationContentsDidReset:(id)arg1;
-(void)applicationIsStillActive;
-(void)applicationDidReceiveRemoteNotification:(id)arg1 clientIdentifier:(id)arg2;
-(void)applicationDidReceiveLocalNotification:(id)arg1 clientIdentifier:(id)arg2;
-(void)preferredContentSizeCategory:(id)arg1;
-(void)layoutDirection:(long long)arg1;

@end

