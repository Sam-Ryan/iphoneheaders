/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKSimpleTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableSet, NSMutableArray, GKDiscoveryPeerConnection, NSNumber, GKSimpleTimer, NSObject;

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate> {

	NSString* _serviceName;
	NSString* _playerID;
	NSString* _deviceID;
	NSMutableSet* _interfaces;
	NSMutableArray* _orderedInterfaces;
	NSMutableArray* _attemptedInterfaces;
	GKDiscoveryPeerConnection* _trialConnection;
	NSNumber* _chosenInterface;
	BOOL _shouldSignalDiscovery;
	NSMutableArray* _sendDataBuffer;
	GKDiscoveryPeerConnection* _connection;
	GKSimpleTimer* _resolveTimer;
	/*^block*/id _resolveTimeoutHandler;
	NSObject*<OS_dispatch_queue> _syncQueue;
	int _state;
	double _discoveryTimeStamp;

}

@property (nonatomic,copy) NSString * serviceName;                                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSMutableSet * interfaces;                                //@synthesize interfaces=_interfaces - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedInterfaces;                       //@synthesize orderedInterfaces=_orderedInterfaces - In the implementation block
@property (nonatomic,retain) NSMutableArray * attemptedInterfaces;                     //@synthesize attemptedInterfaces=_attemptedInterfaces - In the implementation block
@property (nonatomic,retain) NSNumber * chosenInterface;                               //@synthesize chosenInterface=_chosenInterface - In the implementation block
@property (nonatomic,retain) GKDiscoveryPeerConnection * trialConnection;              //@synthesize trialConnection=_trialConnection - In the implementation block
@property (assign,nonatomic) BOOL shouldSignalDiscovery;                               //@synthesize shouldSignalDiscovery=_shouldSignalDiscovery - In the implementation block
@property (assign,nonatomic) double discoveryTimeStamp;                                //@synthesize discoveryTimeStamp=_discoveryTimeStamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * sendDataBuffer;                          //@synthesize sendDataBuffer=_sendDataBuffer - In the implementation block
@property (assign,nonatomic) int state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GKDiscoveryPeerConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;                 //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,copy) NSString * playerID;                                        //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) GKSimpleTimer * resolveTimer;                             //@synthesize resolveTimer=_resolveTimer - In the implementation block
@property (nonatomic,copy) id resolveTimeoutHandler;                                   //@synthesize resolveTimeoutHandler=_resolveTimeoutHandler - In the implementation block
-(NSString *)serviceName;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)invalidate;
-(id)stringForState:(int)arg1 ;
-(GKDiscoveryPeerConnection *)connection;
-(id)initWithServiceName:(id)arg1 ;
-(void)setConnection:(GKDiscoveryPeerConnection *)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)parseServiceNameForInit:(id)arg1 ;
-(BOOL)shouldSignalDiscovery;
-(NSNumber *)chosenInterface;
-(void)setResolveTimeoutHandler:(id)arg1 ;
-(void)setResolveTimer:(GKSimpleTimer *)arg1 ;
-(GKSimpleTimer *)resolveTimer;
-(void)cleanUpForBrowse;
-(void)timeout:(id)arg1 ;
-(id)nextInterfaceIndex;
-(void)startResolveTimerWithHandler:(/*^block*/id)arg1 ;
-(void)stopResolveTimer;
-(void)didLoseInterface:(id)arg1 ;
-(void)flushDataBuffer;
-(void)setInterfaces:(NSMutableSet *)arg1 ;
-(NSMutableArray *)orderedInterfaces;
-(void)setOrderedInterfaces:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attemptedInterfaces;
-(void)setAttemptedInterfaces:(NSMutableArray *)arg1 ;
-(void)setChosenInterface:(NSNumber *)arg1 ;
-(GKDiscoveryPeerConnection *)trialConnection;
-(void)setTrialConnection:(GKDiscoveryPeerConnection *)arg1 ;
-(void)setShouldSignalDiscovery:(BOOL)arg1 ;
-(NSMutableArray *)sendDataBuffer;
-(void)setSendDataBuffer:(NSMutableArray *)arg1 ;
-(double)discoveryTimeStamp;
-(void)setDiscoveryTimeStamp:(double)arg1 ;
-(id)resolveTimeoutHandler;
-(void)setServiceName:(NSString *)arg1 ;
-(NSMutableSet *)interfaces;
-(NSString *)playerID;
-(void)setPlayerID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

