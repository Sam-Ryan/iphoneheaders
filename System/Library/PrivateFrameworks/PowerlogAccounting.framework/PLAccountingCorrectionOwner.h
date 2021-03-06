/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingOwner.h>

@class PLAccountingEnergyEstimateEventEntry;

@interface PLAccountingCorrectionOwner : PLAccountingOwner {

	PLAccountingEnergyEstimateEventEntry* _rootEnergyEstimate;

}

@property (__weak) id<PLAccountingCorrectionOwnerManager> manager; 
@property (retain) PLAccountingEnergyEstimateEventEntry * rootEnergyEstimate;              //@synthesize rootEnergyEstimate=_rootEnergyEstimate - In the implementation block
-(void)run;
-(id)range;
-(id)ID;
-(id)activationDate;
-(PLAccountingEnergyEstimateEventEntry *)rootEnergyEstimate;
-(void)correct;
-(id)initWithRootEnergyEstimate:(id)arg1 ;
-(void)setRunDate:(id)arg1 ;
-(void)setRootEnergyEstimate:(PLAccountingEnergyEstimateEventEntry *)arg1 ;
@end

