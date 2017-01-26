/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDataCollectionManager <NSObject>
@required
-(void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
-(void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
-(void)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2;

@end

