/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLNfcAgent : PLAgent {

	PLXPCListenerOperatorComposition* _cardNotification;
	PLXPCListenerOperatorComposition* _fieldNotification;
	PLXPCListenerOperatorComposition* _transactionNotification;
	PLXPCListenerOperatorComposition* _tsmCommunicationNotification;
	double _onPower;

}

@property (retain) PLXPCListenerOperatorComposition * cardNotification;                          //@synthesize cardNotification=_cardNotification - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * fieldNotification;                         //@synthesize fieldNotification=_fieldNotification - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * transactionNotification;                   //@synthesize transactionNotification=_transactionNotification - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * tsmCommunicationNotification;              //@synthesize tsmCommunicationNotification=_tsmCommunicationNotification - In the implementation block
@property (assign) double onPower;                                                               //@synthesize onPower=_onPower - In the implementation block
+(void)load;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardDefinitionCard;
+(id)entryEventForwardDefinitionField;
+(id)entryEventForwardDefinitionTransaction;
+(id)entryEventForwardDefinitionTSMCommunication;
+(id)defaults;
-(id)init;
-(void)initOperatorDependancies;
-(void)setOnPower:(double)arg1 ;
-(void)setCardNotification:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)fieldChangedWithEntry:(id)arg1 ;
-(void)setFieldNotification:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setTransactionNotification:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setTsmCommunicationNotification:(PLXPCListenerOperatorComposition *)arg1 ;
-(double)onPower;
-(PLXPCListenerOperatorComposition *)cardNotification;
-(PLXPCListenerOperatorComposition *)fieldNotification;
-(PLXPCListenerOperatorComposition *)transactionNotification;
-(PLXPCListenerOperatorComposition *)tsmCommunicationNotification;
@end

