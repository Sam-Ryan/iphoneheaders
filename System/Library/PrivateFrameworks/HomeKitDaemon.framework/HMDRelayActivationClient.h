/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPRelayActivationClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDRelayActivationClient : HAPRelayActivationClient {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _challengeIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSString * challengeIdentifier;                        //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
-(id)init;
-(void)close;
-(void)open;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_closeWithError:(id)arg1 ;
-(void)setChallengeIdentifier:(NSString *)arg1 ;
-(NSString *)challengeIdentifier;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
@end

