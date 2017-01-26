/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface HMDWatchSystemState : NSObject {

	BOOL _companionReachable;
	NSHashTable* _watchSystemStateDelegates;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (assign,getter=isCompanionReachable,nonatomic) BOOL companionReachable;              //@synthesize companionReachable=_companionReachable - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                     //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * watchSystemStateDelegates;                        //@synthesize watchSystemStateDelegates=_watchSystemStateDelegates - In the implementation block
+(id)sharedState;
-(id)init;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)isCompanionReachable;
-(void)newIncomingMessageFromClient;
-(void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)arg1 forDelegate:(id)arg2 ;
-(NSHashTable *)watchSystemStateDelegates;
-(void)_callDidReceiveNewIncomingMessageForDelegate:(id)arg1 ;
-(void)setCompanionReachable:(BOOL)arg1 ;
-(void)registerDelegate:(id)arg1 ;
@end

