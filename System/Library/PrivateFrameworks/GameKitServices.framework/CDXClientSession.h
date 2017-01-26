/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDXClientSessionDelegate, OS_dispatch_source;
@class CDXClient, NSData, NSMutableIndexSet, NSObject, NSIndexSet;

@interface CDXClientSession : NSObject {

	id<CDXClientSessionDelegate> delegate_;
	CDXClient* CDXClient_;
	NSData* ticket_;
	NSData* sessionKey_;
	NSData* sessionKeyPrepped_;
	NSMutableIndexSet* participantsInFlight_;
	long long retransmitAttempts_;
	NSData* lastSent_;
	unsigned short seq_;
	unsigned char pid_;
	unsigned short* ack_;
	NSObject*<OS_dispatch_source> retransmitTimer_;
	/*^block*/id inboundHandler_;

}

@property (nonatomic,retain,readonly) CDXClient * CDXClient; 
@property (assign,nonatomic) id<CDXClientSessionDelegate> delegate; 
@property (nonatomic,copy) NSData * ticket; 
@property (nonatomic,copy,readonly) NSData * sessionKey; 
@property (nonatomic,copy,readonly) NSIndexSet * participantsInFlight; 
@property (nonatomic,copy) id inboundHandler; 
-(void)setDelegate:(id<CDXClientSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<CDXClientSessionDelegate>)delegate;
-(void)invalidate;
-(BOOL)sendData:(id)arg1 ;
-(void)stopRetransmitTimer;
-(BOOL)sendRaw:(id)arg1 toParticipants:(id)arg2 ;
-(BOOL)retransmitEvent;
-(CDXClient *)CDXClient;
-(id)encrypt:(id)arg1 ;
-(BOOL)sendData:(id)arg1 toParticipants:(id)arg2 ;
-(void)resetRetransmitTimer;
-(id)decrypt:(id)arg1 ticket:(id)arg2 ;
-(id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3 ;
-(void)recvRaw:(id)arg1 ticket:(id)arg2 ;
-(NSData *)sessionKey;
-(NSIndexSet *)participantsInFlight;
-(id)inboundHandler;
-(void)setInboundHandler:(id)arg1 ;
-(void)setTicket:(NSData *)arg1 ;
-(NSData *)ticket;
@end

