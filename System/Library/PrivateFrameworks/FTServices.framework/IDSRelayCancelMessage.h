/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/IDSFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSNumber;

@interface IDSRelayCancelMessage : IDSFaceTimeMessage <NSCopying> {

	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _relayType;
	NSNumber* _reason;
	NSData* _relayConnectionID;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;

}

@property (copy) NSString * peerID;                       //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSData * peerPushToken;                  //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSNumber * relayType;                    //@synthesize relayType=_relayType - In the implementation block
@property (copy) NSNumber * reason;                       //@synthesize reason=_reason - In the implementation block
@property (copy) NSData * relayConnectionID;              //@synthesize relayConnectionID=_relayConnectionID - In the implementation block
@property (copy) NSData * selfRelayIP;                    //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (copy) NSNumber * selfRelayPort;                //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (copy) NSData * peerRelayIP;                    //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (copy) NSNumber * peerRelayPort;                //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(NSNumber *)relayType;
-(NSData *)relayConnectionID;
-(NSData *)selfRelayIP;
-(NSNumber *)selfRelayPort;
-(NSData *)peerRelayIP;
-(NSNumber *)peerRelayPort;
-(void)setRelayType:(NSNumber *)arg1 ;
-(void)setRelayConnectionID:(NSData *)arg1 ;
-(void)setSelfRelayIP:(NSData *)arg1 ;
-(void)setSelfRelayPort:(NSNumber *)arg1 ;
-(void)setPeerRelayIP:(NSData *)arg1 ;
-(void)setPeerRelayPort:(NSNumber *)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
-(void)setReason:(NSNumber *)arg1 ;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(id)bagKey;
@end

