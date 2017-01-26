/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@protocol _DKKnowledgeStoreExecuteProtocol;
@class NSDictionary, NSObject, _DKDataProtectionStateMonitor;

@interface _DKUserNextSleepPeriodMonitor : _DKMonitor {

	NSDictionary* _tuningDictionary;
	NSObject*<_DKKnowledgeStoreExecuteProtocol> _knowledgeStore;
	_DKDataProtectionStateMonitor* _dataProtectionMonitor;

}

@property (retain) NSDictionary * tuningDictionary;                                         //@synthesize tuningDictionary=_tuningDictionary - In the implementation block
@property (retain) NSObject*<_DKKnowledgeStoreExecuteProtocol> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (retain) _DKDataProtectionStateMonitor * dataProtectionMonitor;                   //@synthesize dataProtectionMonitor=_dataProtectionMonitor - In the implementation block
+(id)eventStream;
-(void)setDataProtectionMonitor:(_DKDataProtectionStateMonitor *)arg1 ;
-(_DKDataProtectionStateMonitor *)dataProtectionMonitor;
-(NSDictionary *)tuningDictionary;
-(id)readConfigurationFromDefaults;
-(id)_eventWithDate:(id)arg1 ;
-(id)sanitizeTuningConfiguration:(id)arg1 ;
-(id)initWithQueryExecutor:(id)arg1 ;
-(void)setTuningDictionary:(NSDictionary *)arg1 ;
-(id)defaultTuningConfiguration;
-(id)getCTSJobCriteria;
-(void)registerCTSUpdateJob;
-(id)init;
-(void)stop;
-(void)start;
-(void)update;
-(NSObject*<_DKKnowledgeStoreExecuteProtocol>)knowledgeStore;
-(void)setKnowledgeStore:(NSObject*<_DKKnowledgeStoreExecuteProtocol>)arg1 ;
@end

