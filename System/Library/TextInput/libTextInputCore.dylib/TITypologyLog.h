/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerLogging.h>

@class NSUUID, NSDate, NSString, NSDictionary, NSMutableArray, TIRollingLog;

@interface TITypologyLog : NSObject <NSCopying, TIKeyboardInputManagerLogging> {

	NSUUID* _uuid;
	NSDate* _date;
	NSString* _systemVersion;
	NSString* _buildVersion;
	NSString* _clientIdentifier;
	NSDictionary* _config;
	NSMutableArray* _records;
	TIRollingLog* _traceLog;

}

@property (nonatomic,readonly) NSUUID * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * config;                   //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSMutableArray * records;              //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) TIRollingLog * traceLog;               //@synthesize traceLog=_traceLog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writePropertyList:(id)arg1 withFilename:(id)arg2 ;
+(BOOL)createTypologyDirectory;
+(BOOL)isFilenameHumanReadableTrace:(id)arg1 ;
+(id)typologyDirectoryURL;
+(BOOL)isFilenameTypologyLog:(id)arg1 ;
+(void)pruneTypologyLogsToMaxNumBytes:(long long)arg1 satisfyingPredicate:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)timestamp;
-(NSDate *)date;
-(NSString *)systemVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)config;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)records;
-(NSString *)buildVersion;
-(NSUUID *)uuid;
-(void)setConfig:(NSDictionary *)arg1 ;
-(id)propertyList;
-(id)initWithTypologyLog:(id)arg1 ;
-(id)textSummary;
-(void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4 ;
-(TIRollingLog *)traceLog;
-(void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2 ;
-(void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3 ;
-(void)logReceivedCandidateRejected:(id)arg1 ;
-(void)logReceivedLastAcceptedCandidateCorrected;
-(void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4 ;
-(void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2 ;
-(void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 ;
-(void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2 ;
-(void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)arg2 keyboardState:(id)arg3 ;
-(id)filenameForHumanReadableTrace;
-(void)writeHumanReadableTrace;
-(BOOL)shouldSubmitStructuredDataReport;
-(void)logReceivedSetOriginalInput:(id)arg1 ;
-(void)logReceivedTextAccepted:(id)arg1 ;
-(void)logToHumanReadableTrace:(id)arg1 ;
-(id)writeToFile;
-(id)generateStructuredDataReport;
-(void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3 ;
-(void)backgroundWriteLogsAndSubmitReport;
-(void)submitStructuredDataReport;
-(void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3 ;
-(NSString *)clientIdentifier;
-(id)initWithPropertyList:(id)arg1 ;
-(id)filename;
@end

