/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CECBusPollingOperationDelegate <NSObject>
@optional
-(void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
-(void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3;

@required
-(BOOL)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2;
-(void)pollingOperationCompleted:(id)arg1;

@end
