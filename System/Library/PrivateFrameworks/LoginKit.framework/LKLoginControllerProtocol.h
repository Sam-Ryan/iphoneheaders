/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LKLoginControllerProtocol
@required
-(void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(void)loginAppleID:(id)arg1 password:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)saveClassConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)fetchClassRosterWithCompletionHandler:(/*^block*/id)arg1;

@end

