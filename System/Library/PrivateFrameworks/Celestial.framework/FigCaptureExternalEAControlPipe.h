/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, FigCaptureExternalEAControlPipeDelegate;
@class NSInputStream, NSObject, NSOutputStream, NSMutableData, NSMutableArray, NSData, NSRunLoop, NSString;

@interface FigCaptureExternalEAControlPipe : NSObject <NSStreamDelegate> {

	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_queue> _inputStreamQueue;
	NSOutputStream* _outputStream;
	NSObject*<OS_dispatch_queue> _outputStreamQueue;
	NSMutableData* _incomingPacket;
	unsigned _currentIncomingPacketBytesRead;
	unsigned _currentIncomingPacketLength;
	NSMutableArray* _outgoingPackets;
	NSData* _currentOutgoingPacket;
	unsigned _currentPacketBytesWritten;
	unsigned _currentOutgoingPacketLength;
	id<FigCaptureExternalEAControlPipeDelegate> _delegate;
	EAFrameBufferPacket _frameBuffers[2];
	BOOL _isEAOpen;
	BOOL _readData;
	NSRunLoop* _inputRunLoop;
	NSRunLoop* _outputRunLoop;
	NSObject*<OS_dispatch_queue> _inputRunQueue;
	NSObject*<OS_dispatch_queue> _outputRunQueue;
	FigCaptureExternalEAControlPipe* _weakSelf;
	id _clientAssertion;
	unsigned char _controlMode;

}

@property (assign,nonatomic) id<FigCaptureExternalEAControlPipeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL readData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FigCaptureExternalEAControlPipeDelegate>)arg1 ;
-(void)dealloc;
-(id<FigCaptureExternalEAControlPipeDelegate>)delegate;
-(void)close;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 clientAssert:(id)arg3 controlMode:(unsigned char)arg4 ;
-(BOOL)sendPacket:(IAPPacket*)arg1 ;
-(void)setReadData:(BOOL)arg1 ;
-(id)_packetToData:(IAPPacket*)arg1 ;
-(void)_writeOnce;
-(void)_readVideoBufferOverEA:(void*)arg1 ;
-(void)_readIAPOverEAPacket:(IAPPacket*)arg1 ;
-(void)_readOnce;
-(BOOL)readData;
@end

