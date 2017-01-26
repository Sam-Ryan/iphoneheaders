/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SyncManagerProtocol <NSObject>
@required
-(void)insert:(id)arg1;
-(id)fetchObjectWithUniqueId:(id)arg1;
-(void)resetTimers;
-(void)deleteObjectWithUniqueId:(id)arg1;
-(void)deleteObjectsWithUniqueIds:(id)arg1;
-(double)timerIncoming;
-(double)timerOutgoing;
-(double)timerLifetime;
-(id)fetchObjectsWithLimits:(id)arg1;
-(void)insertWithoutTransaction:(id)arg1;
-(void)updateAllObjects:(id)arg1;
-(void)updateObjects:(id)arg1;
-(void)deleteObjectsWithLimits:(id)arg1;
-(void)insertRecordsWithoutTransactions:(id)arg1;
-(void)deleteAllObjects;
-(id)fetchAllObjects;

@end

