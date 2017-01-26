/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HAPBTLETransactionIdentifier, HAPCharacteristic, NSData, HAPBlockOperation, HAPBTLEControlOutputStream, HAPTimer;

@interface HAPBTLERequest : NSObject {

	unsigned char _type;
	BOOL _encrypted;
	BOOL _finished;
	HAPBTLETransactionIdentifier* _identifier;
	HAPCharacteristic* _characteristic;
	NSData* _body;
	double _timeoutInterval;
	HAPBlockOperation* _operation;
	HAPBTLEControlOutputStream* _controlOutputStream;
	HAPTimer* _responseTimer;

}

@property (nonatomic,readonly) HAPBTLETransactionIdentifier * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPCharacteristic * characteristic;                          //@synthesize characteristic=_characteristic - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;                           //@synthesize encrypted=_encrypted - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                             //@synthesize finished=_finished - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                                          //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                      //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic,__weak) HAPBlockOperation * operation;                          //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HAPBTLEControlOutputStream * controlOutputStream;              //@synthesize controlOutputStream=_controlOutputStream - In the implementation block
@property (nonatomic,retain) HAPTimer * responseTimer;                                      //@synthesize responseTimer=_responseTimer - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(HAPBlockOperation *)operation;
-(void)setOperation:(HAPBlockOperation *)arg1 ;
-(HAPBTLETransactionIdentifier *)identifier;
-(unsigned char)type;
-(NSData *)body;
-(id)shortDescription;
-(BOOL)isFinished;
-(void)cancelWithError:(id)arg1 ;
-(double)timeoutInterval;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)_serializeHeader;
-(id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(BOOL)arg4 timeoutInterval:(double)arg5 ;
-(HAPBTLEControlOutputStream *)controlOutputStream;
-(void)setControlOutputStream:(HAPBTLEControlOutputStream *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(HAPTimer *)responseTimer;
-(void)setResponseTimer:(HAPTimer *)arg1 ;
-(id)serialize;
-(BOOL)isEncrypted;
@end

