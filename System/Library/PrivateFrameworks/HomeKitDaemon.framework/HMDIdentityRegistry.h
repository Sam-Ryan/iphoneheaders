/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HMDIdentityRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _registry;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registry;                      //@synthesize registry=_registry - In the implementation block
-(id)init;
-(void)clear;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)registerPublicKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)publicKeyForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)registry;
-(void)deregisterPublicKeyForIdentifier:(id)arg1 ;
-(void)setRegistry:(NSMutableDictionary *)arg1 ;
@end

