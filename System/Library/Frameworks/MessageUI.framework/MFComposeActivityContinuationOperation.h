/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, MFComposeActivityContinuationOperationDelegate;
@class NSObject, NSInputStream, NSOutputStream, NSData, NSString;

@interface MFComposeActivityContinuationOperation : NSOperation <NSStreamDelegate> {

	BOOL _finished;
	BOOL _executing;
	NSObject*<OS_dispatch_queue> _streamHandlerQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSData* _draftData;
	unsigned long long _draftDataByteIndex;
	unsigned long long _draftBytesReceived;
	unsigned long long _draftExpectedSize;
	unsigned long long _transmissionType;
	BOOL _doneWithInputStream;
	BOOL _doneWithOutputStream;
	id<MFComposeActivityContinuationOperationDelegate> _delegate;

}

@property (nonatomic,retain) NSData * draftData;                                                       //@synthesize draftData=_draftData - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesReceived;                                       //@synthesize draftBytesReceived=_draftBytesReceived - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesExpected;                                       //@synthesize draftExpectedSize=_draftExpectedSize - In the implementation block
@property (assign,nonatomic) unsigned long long transmissionType;                                      //@synthesize transmissionType=_transmissionType - In the implementation block
@property (assign,nonatomic) id<MFComposeActivityContinuationOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2 ;
+(id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(BOOL)isConcurrent;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<MFComposeActivityContinuationOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<MFComposeActivityContinuationOperationDelegate>)delegate;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(unsigned long long)bytesReceived;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)setTransmissionType:(unsigned long long)arg1 ;
-(void)setDraftData:(NSData *)arg1 ;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_startContinuationStreams;
-(void)_complete;
-(void)_setFinished:(BOOL)arg1 ;
-(void)_commonContinuationStreamInitializationWithStream:(id)arg1 ;
-(void)_receivingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_sendingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_handleErrorCode:(unsigned long long)arg1 logString:(id)arg2 ;
-(void)_didFinishTransferringContinuationPayload;
-(void)_failedToTransferContinuationPayload;
-(void)_checkInContinuationStream:(id)arg1 ;
-(void)_finishReceivingContinuationDataAndCloseStream;
-(void)_commonContinuationStreamTeardownWithStream:(id*)arg1 ;
-(unsigned long long)bytesExpected;
-(unsigned long long)transmissionType;
-(NSData *)draftData;
@end

