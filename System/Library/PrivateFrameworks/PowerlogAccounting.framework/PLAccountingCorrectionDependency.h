/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency {

	PLAccountingEnergyEventEntry* _energyEvent;

}

@property (retain) PLAccountingEnergyEventEntry * energyEvent;              //@synthesize energyEvent=_energyEvent - In the implementation block
-(id)range;
-(id)ID;
-(id)activationDate;
-(PLAccountingEnergyEventEntry *)energyEvent;
-(id)initWithEnergyEvent:(id)arg1 ;
-(void)setEnergyEvent:(PLAccountingEnergyEventEntry *)arg1 ;
@end
