/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDD, NSMutableArray, NSObject;

@interface CDDPools : NSObject {

	CDD* cdd;
	NSMutableArray* pooltable;
	int poolNotificationToken;
	NSObject*<OS_dispatch_queue> poolQueue;

}

@property (nonatomic,retain) CDD * cdd; 
-(CDD *)cdd;
-(id)initWithCDDinstance:(id)arg1 ;
-(void)dumpLight;
-(void)setCdd:(CDD *)arg1 ;
-(void)resetPoolValue:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)allocPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 value:(long long)arg3 parentIntegerId:(unsigned long long)arg4 maxFraction:(double)arg5 modulationType:(int)arg6 ;
-(long long)readPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(unsigned long long)compareAndSwapPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 compareValue:(long long)arg3 swapValue:(long long)arg4 ;
-(BOOL)poolExistsInPersistentStore:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)decrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 decrementValue:(long long)arg3 ;
-(void)incrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 incrementValue:(long long)arg3 ;
-(void)deletePoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)cachePoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 parentIntegerId:(unsigned long long)arg3 maxFraction:(double)arg4 modulationType:(int)arg5 ;
-(void)refillPoolsOfModulationType:(int)arg1 fromSlot:(int)arg2 toSlot:(int)arg3 ;
-(void)refillPoolsOfModulationType:(int)arg1 forSlotNumber:(int)arg2 ;
-(long long)persistentPoolReadWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 delete:(BOOL)arg3 ;
-(void)doAllocPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 value:(long long)arg3 parentIntegerId:(unsigned long long)arg4 maxFraction:(double)arg5 modulationType:(long long)arg6 ;
-(void)persistentPoolWriteWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 value:(long long)arg3 ;
-(long long)doReadPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(long long)doCachePoolOnMiss:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)doDecrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 decrementValue:(long long)arg3 sync:(BOOL)arg4 ;
-(BOOL)isPoolAndItsParentPositive:(unsigned long long)arg1 cliendId:(unsigned long long)arg2 ;
-(BOOL)isPoolDescendentOfBudgetType:(unsigned long long)arg1 clientId:(unsigned long long)arg2 budgetType:(long long)arg3 ;
-(id)doSearchPoolName:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)doIncrementPoolWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 incrementValue:(long long)arg3 sync:(BOOL)arg4 ;
-(unsigned long long)findParentsDailyBudget:(id)arg1 ;
-(void)postPoolChangeNotificationWithCurrent:(unsigned long long)arg1 WithReplacement:(unsigned long long)arg2 ;
-(void)changePoolParentWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 parentIntegerId:(unsigned long long)arg3 ;
-(void)decrementPoolWithIntegerIdWB:(unsigned long long)arg1 clientId:(unsigned long long)arg2 decrementValue:(long long)arg3 ;
-(BOOL)isPoolDescentdentOfVariantName:(unsigned long long)arg1 clientId:(unsigned long long)arg2 clientVariantName:(id)arg3 ;
-(void)dumpAll;
@end

