/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLSmartPLService, PLEntryNotificationOperatorComposition;

@interface SmartPLMemoryTracking : NSObject {

	PLSmartPLService* _operator;
	PLEntryNotificationOperatorComposition* _memoryTrackingNotification;

}

@property (__weak) PLSmartPLService * operator;                                                      //@synthesize operator=_operator - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * memoryTrackingNotification;              //@synthesize memoryTrackingNotification=_memoryTrackingNotification - In the implementation block
+(id)defaults;
-(PLSmartPLService *)operator;
-(void)setOperator:(PLSmartPLService *)arg1 ;
-(void)startWithOperator:(id)arg1 ;
-(void)handleMemoryTracking:(id)arg1 ;
-(void)setMemoryTrackingNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)memoryTrackingNotification;
@end

