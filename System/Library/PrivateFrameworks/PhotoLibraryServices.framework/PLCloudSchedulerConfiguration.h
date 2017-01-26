/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLCloudSchedulerConfiguration : NSObject {

	NSArray* _triggers;
	NSArray* _scenarioProducers;
	unsigned long long _concurrencyLevel;

}

@property (nonatomic,retain) NSArray * triggers;                               //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) NSArray * scenarioProducers;                      //@synthesize scenarioProducers=_scenarioProducers - In the implementation block
@property (assign,nonatomic) unsigned long long concurrencyLevel;              //@synthesize concurrencyLevel=_concurrencyLevel - In the implementation block
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
-(NSArray *)scenarioProducers;
-(void)setScenarioProducers:(NSArray *)arg1 ;
-(unsigned long long)concurrencyLevel;
-(void)setConcurrencyLevel:(unsigned long long)arg1 ;
@end

