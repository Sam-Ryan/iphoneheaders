/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/flowDispositionObserver.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface cellFlowObserver : NSObject <flowDispositionObserver> {

	unsigned _classCounter[19];
	unsigned _classFlags;
	unsigned _intialClassFlags;
	unsigned _everSetClassFlags;
	unsigned _everReportedClassFlags;
	unsigned _lastReportedClassFlags;
	NSDate* _lastReportTimestamp;
	BOOL _dampening;
	BOOL _foreground;
	unsigned _seqno;
	NSMutableDictionary* _foregroundAppWatchlist;
	BOOL _flowSnapshotActive;
	NSMutableSet* _flowSnapshotApps;
	unsigned _flowSnapshotFlags;
	BOOL _enabled;

}

@property (assign,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(id)init;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)beginTrafficClassFlowSnapshot;
-(void)endTrafficClassFlowSnapshot:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
-(BOOL)performDisposition:(unsigned)arg1 present:(BOOL)arg2 ;
-(void)noteNewUsage:(unsigned)arg1 ;
-(void)resetTrafficClassFlowSnapshot:(BOOL)arg1 ;
-(unsigned)noteFlow:(id)arg1 withDisposition:(unsigned)arg2 present:(BOOL)arg3 trackedBy:(id)arg4 ;
-(void)configurePolicies:(id)arg1 ;
@end

