/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYServiceDelegate <NSObject>
@optional
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
-(void)service:(id)arg1 incomingData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)service:(id)arg1 incomingStream:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
-(id)service:(id)arg1 willPreferSession:(id)arg2 overSession:(id)arg3;
-(void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
-(void)serviceDidPairDevice:(id)arg1;
-(void)serviceDidUnpairDevice:(id)arg1;

@required
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;

@end

