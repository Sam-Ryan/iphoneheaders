/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:02 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/IDSLinkDelegate.h>

@protocol IDSLinkDelegate, OS_dispatch_source;
@class IDSUDPLink, NSArray, IDSSockAddrWrapper, NSString, NSMutableDictionary, NSDictionary, NSObject;

@interface IDSUDPRelayLink : NSObject <IDSLink, IDSLinkDelegate> {

	IDSUDPLink* _udpLink;
	id<IDSLinkDelegate> _delegate;
	/*^block*/id _inviteDataHandler;
	/*^block*/id _allocationHandler;
	/*^block*/id _cancelHandler;
	NSArray* _interfaceIPv4AddressArray;
	IDSSockAddrWrapper* _commNATServerAddress;
	long long _relayState;
	NSString* _participantID;
	unsigned _callID;
	unsigned short _channelNumber;
	IDSSockAddrWrapper* _relayLocalAddress;
	IDSSockAddrWrapper* _relayServerAddress;
	NSMutableDictionary* _requestResponseDictionary;
	NSDictionary* _updateDictionary;
	NSMutableDictionary* _commNATRequestDictionary;
	NSMutableDictionary* _stunReqToTransID;
	NSObject*<OS_dispatch_source> _refreshTimer;
	double _nextRefreshTime;
	BOOL _alloclRefreshDone;
	BOOL _channelRefreshDone;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	unsigned long long _state;
	unsigned long long _headerOverhead;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	NSString* _conferenceID;

}

@property (copy) id inviteDataHandler;                                             //@synthesize inviteDataHandler=_inviteDataHandler - In the implementation block
@property (copy) id allocationHandler;                                             //@synthesize allocationHandler=_allocationHandler - In the implementation block
@property (copy) id cancelHandler;                                                 //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (copy) NSString * participantID;                                         //@synthesize participantID=_participantID - In the implementation block
@property (readonly) unsigned callID;                                              //@synthesize callID=_callID - In the implementation block
@property (readonly) unsigned short channelNumber;                                 //@synthesize channelNumber=_channelNumber - In the implementation block
@property (copy) IDSSockAddrWrapper * relayLocalAddress;                           //@synthesize relayLocalAddress=_relayLocalAddress - In the implementation block
@property (copy) IDSSockAddrWrapper * relayServerAddress;                          //@synthesize relayServerAddress=_relayServerAddress - In the implementation block
@property (nonatomic,retain) NSString * conferenceID;                              //@synthesize conferenceID=_conferenceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead;                            //@synthesize headerOverhead=_headerOverhead - In the implementation block
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID16*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(BOOL)link:(id)arg1 didReceivePacket:(SCD_Struct_ID16*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)setInviteDataHandler:(id)arg1 ;
-(void)startCommNATRequest;
-(void)setRelayServerAddress:(IDSSockAddrWrapper *)arg1 ;
-(void)setAllocationHandler:(id)arg1 ;
-(void)startRelayRequestWithType:(long long)arg1 lifeTime:(int)arg2 ;
-(void)sendCommNATRequestWithPacketBuffer:(SCD_Struct_ID16*)arg1 startTime:(double)arg2 scheduledRexmit:(int)arg3 ;
-(BOOL)commNATRequestWithIntefaceAddresss:(id)arg1 outputBuffer:(char*)arg2 length:(int*)arg3 ;
-(void)setRelayLocalAddress:(IDSSockAddrWrapper *)arg1 ;
-(BOOL)readCommNATResponseWithBuffer:(char*)arg1 length:(int)arg2 index:(unsigned*)arg3 ;
-(void)createInviteData;
-(void)sendRelayRequestWithType:(long long)arg1 packetBuffer:(SCD_Struct_ID16*)arg2 startTime:(double)arg3 scheduledRexmit:(int)arg4 sendItNow:(BOOL)arg5 ;
-(void)startRelayRefreshTimer;
-(unsigned long long)sendData:(id)arg1 toDeviceID:(id)arg2 ;
-(void)_sendTestData;
-(BOOL)processAllocateResponse:(id)arg1 ;
-(BOOL)processChannelBindResponse:(id)arg1 ;
-(BOOL)processRefreshResponse:(id)arg1 ;
-(void)processCommNATPacket:(SCD_Struct_ID16*)arg1 ;
-(BOOL)processStunPacket:(SCD_Struct_ID16*)arg1 ;
-(BOOL)createInviteDataWithParticipantID:(id)arg1 callID:(unsigned*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)processRelayRequestResponseWithDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)processRelayUpdateWithDictionary:(id)arg1 ;
-(void)stopLink;
-(void)_sendTestDataUsingPacketBuffer;
-(void)startRelayTest;
-(void)stopRelayTest;
-(id)inviteDataHandler;
-(id)allocationHandler;
-(IDSSockAddrWrapper *)relayLocalAddress;
-(IDSSockAddrWrapper *)relayServerAddress;
-(void)setConferenceID:(NSString *)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned long long)state;
-(void)invalidate;
-(void)start;
-(unsigned short)channelNumber;
-(id)cancelHandler;
-(unsigned)callID;
-(NSString *)conferenceID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
@end

