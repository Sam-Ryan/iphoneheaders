/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATSessionConnection.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, OS_dispatch_group, ATMessageLink;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject, NSXPCConnection, NSString, NSError, NSXPCListenerEndpoint;

@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding> {

	NSMutableArray* _sessionTasks;
	NSMutableDictionary* _sessionTasksByIdentifier;
	NSMutableSet* _observing;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSXPCConnection* _connection;
	double _startTime;
	double _finishTime;
	BOOL _suspended;
	BOOL _finished;
	BOOL _running;
	BOOL _cancelled;
	NSString* _sessionTypeIdentifier;
	NSString* _sessionIdentifier;
	NSString* _localizedDescription;
	double _progress;
	NSError* _error;
	NSXPCListenerEndpoint* _endpoint;
	NSString* _dataClass;
	id<ATMessageLink> _messageLink;

}

@property (retain) NSString * sessionTypeIdentifier;                            //@synthesize sessionTypeIdentifier=_sessionTypeIdentifier - In the implementation block
@property (retain) NSString * sessionIdentifier;                                //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (retain) NSString * localizedDescription;                             //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign) double progress;                                             //@synthesize progress=_progress - In the implementation block
@property (getter=isFinished) BOOL finished;                                    //@synthesize finished=_finished - In the implementation block
@property (getter=isRunning) BOOL running;                                      //@synthesize running=_running - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (readonly) double duration; 
@property (getter=isSuspended) BOOL suspended; 
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSString * dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (assign,nonatomic,__weak) id<ATMessageLink> messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)_remoteSessionsWithTypeIdentifier:(id)arg1 ;
+(void)_cancelSessionWithIdentifier:(id)arg1 ;
+(void)setSessionHost:(BOOL)arg1 ;
+(id)allSessions;
+(id)sessionsWithSessionTypeIdentifier:(id)arg1 ;
-(void)cancel;
-(BOOL)isSuspended;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(double)duration;
-(void)addObserver:(id)arg1 ;
-(NSString *)sessionIdentifier;
-(NSString *)localizedDescription;
-(void)removeObserver:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)progress;
-(BOOL)isRunning;
-(void)setSuspended:(BOOL)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)isFinished;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(NSString *)sessionTypeIdentifier;
-(void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 ;
-(void)_beginTasks:(id)arg1 ;
-(void)_observeKeysForTask:(id)arg1 ;
-(void)beginSessionTask:(id)arg1 ;
-(void)updateSessionTask:(id)arg1 ;
-(void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3 ;
-(void)_stopObservingKeysForTask:(id)arg1 ;
-(id)_keysToObserve;
-(void)waitToFinish;
-(void)setSessionTypeIdentifier:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)_finishWithError:(id)arg1 ;
-(id<ATMessageLink>)messageLink;
-(NSString *)dataClass;
-(id)initWithSessionIdentifier:(id)arg1 sessionTypeIdentifier:(id)arg2 ;
-(void)addSessionTasks:(id)arg1 ;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setMessageLink:(id<ATMessageLink>)arg1 ;
-(id)sessionTasksWithGroupingKey:(id)arg1 ;
-(id)sessionTasks;
-(id)initWithSessionTypeIdentifier:(id)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
@end

