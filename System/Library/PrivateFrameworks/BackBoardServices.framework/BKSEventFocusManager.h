/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSEventFocusIPCInterface;
@class NSString, NSMutableSet, NSMutableDictionary;

@interface BKSEventFocusManager : NSObject {

	id<BKSEventFocusIPCInterface> _ipcInterface;
	BOOL _needsFlush;
	BOOL _systemAppControlsFocusOnMainDisplay;
	int _pid;
	NSString* _clientIdentifier;
	NSMutableSet* _currentState;
	NSMutableDictionary* _pendingStatesByPriority;

}

@property (assign,nonatomic) int pid;                                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                           //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * pendingStatesByPriority;              //@synthesize pendingStatesByPriority=_pendingStatesByPriority - In the implementation block
@property (assign,nonatomic) BOOL needsFlush;                                                     //@synthesize needsFlush=_needsFlush - In the implementation block
@property (assign,nonatomic) BOOL systemAppControlsFocusOnMainDisplay;                            //@synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay - In the implementation block
+(id)sharedInstance;
-(BOOL)needsFlush;
-(void)setNeedsFlush:(BOOL)arg1 ;
-(id)initWithIPCInterface:(id)arg1 ;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3 ;
-(void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingStatesByPriority;
-(void)reallyFlushWithSet:(id)arg1 ;
-(void)setSystemAppControlsFocusOnMainDisplay:(BOOL)arg1 ;
-(BOOL)systemAppControlsFocusOnMainDisplay;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)flush;
-(NSMutableSet *)currentState;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(NSString *)clientIdentifier;
-(void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2 ;
@end

